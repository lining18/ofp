/* Copyright (c) 2014, Nokia
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

#ifndef __OFP_NET_WRAP_H__
#define __OFP_NET_WRAP_H__

#if __GNUC__ >= 4
#pragma GCC visibility push(default)
#endif

#ifdef OFP_PLAT_ODP_DPDK
void ofp_netwrap_main_ctor(void);
void ofp_netwrap_main_dtor(void);
void setup_wrappers(void);
#endif

#if __GNUC__ >= 4
#pragma GCC visibility pop
#endif

#endif /* __OFP_NET_WRAP_H__ */