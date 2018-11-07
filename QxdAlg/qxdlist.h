/************************************************************************
 **
 **  @file   qxdlist.h
 **  @date   2018-11-7
 **  @author Arthur Rodrigues Araruna <ararunaufc(at)gmail.com>
 **
 **  @brief
 **
 **  @copyright
 **  This source code is part of an educational project, associated with
 **  an undergraduate course or extension project, that is hosted at
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

#ifndef ED_QXALG_QXDLIST_H
#define ED_QXALG_QXDLIST_H

#include "qxddefs.h"

//.!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
//. OBSERVAÇÕES
//.
//. - Não altere este arquivo.
//. - Nos arquivos de implementação você pode definir outras funções para que
//.   sejam usadas como auxiliares das neste arquivo.
//.!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//

struct __qxd_list;

typedef struct __qxd_list * QxList;


QxList qx_list_new   ();
void   qx_list_delete(QxList list);

size_t qx_list_size    (QxList list);

bool qx_list_empty(QxList list);

bool    qx_list_contains (QxList list, int element);
qxIndex qx_list_find     (QxList list, int element, qxIndex fromIndex);
qxIndex qx_list_find_last(QxList list, int element, qxIndex upToIndex);

int qx_list_at  (QxList list, qxIndex index);
int qx_list_font(QxList list);
int qx_list_back(QxList list);

void qx_list_insert    (QxList list, int element, qxIndex index);
void qx_list_push_back (QxList list, int element);
void qx_list_push_front(QxList list, int element);

void qx_list_remove_element(QxList list, int element);
void qx_list_remove_at     (QxList list, qxIndex index);
void qx_list_pop_back      (QxList list);
void qx_list_pop_front     (QxList list);

#endif //ED_QXALG_QXDLIST_H
