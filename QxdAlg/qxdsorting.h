/************************************************************************
 **
 **  @file   qxdsorting.h
 **  @date   2018-8-13
 **  @author Arthur Rodrigues Araruna <ararunaufc(at)gmail.com>
 **
 **  @brief
 **
 **  @copyright
 **  This source code is part of an educational project, associated with
 **  a undergraduate course or extension project, that is hosted at
 **  Universidade Federal do Ceará, Campus Quixadá.
 **  Copyright (C) 2018 UFC Quixadá, All Rights Reserved.
 **
 **  This project is free software: you can redistribute it and/or modify
 **  it under the terms of the GNU General Public License as published by
 **  the Free Software Foundation, either version 3 of the License, or
 **  (at your option) any later version.
 **
 **  This project is distributed in the hope that it will be useful,
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **  GNU General Public License for more details.
 **
 **  You should have received a copy of the GNU General Public License
 **  along with the source code of this project. If not, see
 **  <http://www.gnu.org/licenses/>.
 **
 *************************************************************************/


#ifndef QXDSORTING_H
#define QXDSORTING_H

#include "qxddefs.h"

//******* BÁSICOS
void qx_insertion_sort(qxGenericArray array, qxCompareFunc compare, size_t elem_size, size_t num_elems);

void qx_selection_sort(qxGenericArray array, qxCompareFunc compare, size_t elem_size, size_t num_elems);

void qx_bubble_sort(qxGenericArray array, qxCompareFunc compare, size_t elem_size, size_t num_elems);

//******* EFICIENTES
void qx_merge_sort(qxGenericArray array, qxCompareFunc compare, size_t elem_size, size_t num_elems);

void qx_quick_sort(qxGenericArray array, qxCompareFunc compare, size_t elem_size, size_t num_elems);

//******* ESPECÍFICOS
void qx_counting_sort_i(int      array[], size_t num_elems, int      min_val, int      max_val);
void qx_counting_sort_l(long     array[], size_t num_elems, long     min_val, long     max_val);
void qx_counting_sort_u(unsigned array[], size_t num_elems, unsigned min_val, unsigned max_val);

void qx_radix_sort_i(int   array[], size_t num_elems);
void qx_radix_sort_f(float array[], size_t num_elems, short precision);

#endif // QXDSORTING_H
