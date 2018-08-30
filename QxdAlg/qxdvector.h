#ifndef QXDVECTOR_H
#define QXDVECTOR_H

#include "qxddefs.h"

#include <stdbool.h>

typedef struct __qx_vector {
    size_t size;
    size_t capacity;
    size_t elemSize;
    qxGenericArray storage;
} * qxVector;

qxVector qx_vector_new(size_t capacity, size_t elemSize);
void qx_vector_delete(qxVector vector);
void qx_vector_delete_complex(qxVector vector, qxHandleElementFunc deleter, qxUserData data);

void qx_vector_clear(qxVector vector);

qxVector qx_vector_clone(qxVector vector);
qxVector qx_vector_clone_subvector(qxVector vector, qxIndex begin, qxIndex end);

void qx_vector_copy(qxVector to, qxIndex to_begin, qxVector from, qxIndex from_begin, size_t num_elems);

bool qx_vector_reserve(qxVector vector, size_t capacity);

bool qx_vector_is_empty(qxVector vector);
size_t qx_vector_size(qxVector vector);
qxGenericElement qx_vector_at(qxVector vector, qxIndex index);
qxGenericElement qx_vector_first(qxVector vector);
qxGenericElement qx_vector_last(qxVector vector);

bool qx_vector_insert_at(qxVector vector, qxIndex index, qxGenericElement elem);
bool qx_vector_push_front(qxVector vector, qxGenericElement elem);
bool qx_vector_push_back(qxVector vector, qxGenericElement elem);

bool qx_vector_remove_at(qxVector vector, qxIndex index);
bool qx_vector_pop_front(qxVector vector);
bool qx_vector_pop_back(qxVector vector);

#endif // QXDVECTOR_H
