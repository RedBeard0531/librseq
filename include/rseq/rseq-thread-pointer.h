/* SPDX-License-Identifier: LGPL-2.1-only OR MIT */
/*
 * rseq-thread-pointer.h
 *
 * (C) Copyright 2021 - Mathieu Desnoyers <mathieu.desnoyers@efficios.com>
 */

#ifndef _RSEQ_THREAD_POINTER
#define _RSEQ_THREAD_POINTER

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__x86_64__) || defined(__i386__)
#include <rseq/rseq-x86-thread-pointer.h>
#elif defined(__PPC__)
#include <rseq/rseq-ppc-thread-pointer.h>
#else
#include <rseq/rseq-generic-thread-pointer.h>
#endif

#ifdef __cplusplus
}
#endif

#endif
