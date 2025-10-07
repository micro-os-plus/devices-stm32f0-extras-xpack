/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
 * Copyright (c) 2020-2025 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

#ifndef MICRO_OS_PLUS_DEVICE_H_
#define MICRO_OS_PLUS_DEVICE_H_

// ----------------------------------------------------------------------------

#include <micro-os-plus/architecture.h>

#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Wpadded"
#if defined(__cplusplus)
#pragma GCC diagnostic ignored "-Wuseless-cast"
#pragma GCC diagnostic ignored "-Wold-style-cast"
#pragma GCC diagnostic ignored "-Wzero-as-null-pointer-constant"
#if __GNUC__ >= 10
#pragma GCC diagnostic ignored "-Wvolatile"
#endif
#endif

#include "stm32f0xx.h"

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_DEVICE_H_

// ----------------------------------------------------------------------------
