// -*- coding: utf-8-unix -*-
/*
 * Copyright (c) 2021-2025 Daishi Mori (mori0091)
 *
 * This software is released under the MIT License.\n
 * See https://github.com/mori0091/libmsx/blob/main/LICENSE
 *
 * GitHub libmsx project\n
 * https://github.com/mori0091/libmsx
 */
/**
 * \file im_cmpl_v_SP16x16.c
 */

#include <im.h>
#include <vmem.h>

void im_cmpl_v_SP16x16(const SP16x16 * src) {
  const uint8_t * p = &(*src)[0][0];
  for (uint8_t n = 32; n--; ) {
    vmem_set(~(*p++));
  }
}
