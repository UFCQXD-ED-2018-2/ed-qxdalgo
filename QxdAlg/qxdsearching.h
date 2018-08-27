/************************************************************************
 **
 **  @file   qxdsearching.hpp
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


#ifndef QXDSEARCHING_H
#define QXDSEARCHING_H

#include "qxddefs.h"

#include <stdbool.h>


bool qx_contains(qxGenericArray array, qxCompareFunc compare, size_t elem_size, size_t num_elems, bool is_sorted);

qxIndex qx_find_index(qxGenericArray array, qxGenericElement element, qxCompareFunc compare, size_t elem_size, size_t num_elems, bool is_sorted);

qxIndex qx_lower_bound(qxGenericArray array, qxGenericElement element, qxCompareFunc compare, size_t elem_size, size_t num_elems, bool is_sorted);
qxIndex qx_upper_bound(qxGenericArray array, qxGenericElement element, qxCompareFunc compare, size_t elem_size, size_t num_elems, bool is_sorted);


qxIndex qx_binary_search(qxGenericArray array, qxCompareFunc compare, size_t elem_size, size_t num_elems);
qxIndex qx_exponential_search(qxGenericArray array, qxCompareFunc compare, size_t elem_size, size_t num_elems);

#endif // QXDSEARCHING_H
