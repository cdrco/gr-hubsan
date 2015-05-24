/* -*- c++ -*- */
/* 
 * Copyright 2015 Mike Walters.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_HUBSAN_UTIL_H
#define INCLUDED_HUBSAN_UTIL_H

#include <hubsan/packet_decoder_b.h>

namespace gr {
  namespace hubsan {

    uint8_t generate_checksum(uint8_t *data, int length);
    uint16_t _bswap16(uint16_t x);

  } // namespace hubsan
} // namespace gr

#endif /* INCLUDED_HUBSAN_UTIL_H */

