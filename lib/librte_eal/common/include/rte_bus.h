/*-
 *   BSD LICENSE
 *
 *   Copyright(c) 2016 NXP
 *   All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in
 *       the documentation and/or other materials provided with the
 *       distribution.
 *     * Neither the name of NXP nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _RTE_BUS_H_
#define _RTE_BUS_H_

/**
 * @file
 *
 * DPDK device bus interface
 *
 * This file exposes API and interfaces for bus abstraction
 * over the devices and drivers in EAL.
 */

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <sys/queue.h>

#include <rte_log.h>
#include <rte_dev.h>

/** Double linked list of buses */
TAILQ_HEAD(rte_bus_list, rte_bus);

/**
 * A structure describing a generic bus.
 */
struct rte_bus {
	TAILQ_ENTRY(rte_bus) next;   /**< Next bus object in linked list */
	const char *name;            /**< Name of the bus */
};

/**
 * Register a Bus handler.
 *
 * @param bus
 *   A pointer to a rte_bus structure describing the bus
 *   to be registered.
 */
void rte_bus_register(struct rte_bus *bus);

/**
 * Unregister a Bus handler.
 *
 * @param bus
 *   A pointer to a rte_bus structure describing the bus
 *   to be unregistered.
 */
void rte_bus_unregister(struct rte_bus *bus);

/**
 * Dump information of all the buses registered with EAL.
 *
 * @param f
 *	 A valid and open output stream handle
 *
 * @return
 *	 0 in case of success
 *	!0 in case there is error in opening the output stream
 */
void rte_bus_dump(FILE *f);

/**
 * Helper for Bus registration.
 * The constructor has higher priority than PMD constructors.
 */
#define RTE_REGISTER_BUS(nm, bus) \
static void __attribute__((constructor(101), used)) businitfn_ ##nm(void) \
{\
	(bus).name = RTE_STR(nm);\
	rte_bus_register(&bus); \
}

#ifdef __cplusplus
}
#endif

#endif /* _RTE_BUS_H */
