#include "qxdlist.h"
#include <stdlib.h>

struct __qxd_list
{
  int n ;
  QxList next ;
} ;

void delete (QxList list)
{
  if(list -> next != NULL)
  {
    delete(list -> next) ;
  }
  else
  {
    free(list) ;
    list -> next = NULL ;
  }

  return ;
}

size_t count_size(QxList list)
{
  static int n = 0 ;
  if(list -> next != NULL)
  {
    ++n ;
    count_size(list -> next) ;
  }

  return n ;
}

QxList qx_list_new()
{
  QxList new = (QxList) malloc (sizeof(QxList)) ;
  new -> next = NULL ;
  return new ;
}

void qx_list_delete(QxList list)
{
  if(!qx_list_empty(list))
  {
    delete(list) ;
  }
  else
    free(list) ;

  return ;
}

size_t qx_list_size(QxList list)
{
  if(!qx_list_empty(list))
  {
    return count_size(list) ;
  }
  else
    return 0 ;
}


bool qx_list_empty(QxList list)
{
  if (list -> next == NULL)
    return true ;

  return false ;
}

bool qx_list_contains(QxList list, int element)
{
  QxList l = list -> next ;
  while(l != NULL)
  {
    if(l -> n == element)
    {
      return true ;
    }
    l = l -> next ;
  }

  return false ;

}

qxIndex qx_list_find(QxList list, int element, qxIndex fromIndex)
{
  qxIndex count = 0 ;
  QxList l = list -> next ;
  if(qx_list_empty(list))
    return QX_LAMBDA_INDEX ;

  while((count != fromIndex) && (l -> next != NULL))
  {
    l = l -> next ;
    count++ ;
  }

  while((l -> n != element) && l != NULL)
  {
    l = l -> next ;
    count++ ;
  }
  if(l -> n == element)
    return count ;

  return QX_LAMBDA_INDEX ;
}

// qxIndex qx_list_find_last(QxList list, int element, qxIndex upToIndex)
// {
//   if(list -> next != NULL)
//   {
//     qxIndex(list -> next, element, upToIndex) ;
//   }
//   if(list.element == element)
//     return
//}

int qx_list_at(QxList list, qxIndex index)
{
  qxIndex aux = 0 ;
  QxList lista = list -> next ;
  if((qxIndex)(qx_list_size(list)) < index)
    return QX_LAMBDA_ELEMENT ;

  while(aux < index)
  {
    ++ aux ;
    lista = lista -> next ;
  }
  return lista -> n ;
}

int qx_list_font(QxList list)
{
  if(qx_list_empty(list))
    return QX_LAMBDA_ELEMENT ;

  return list -> next -> n ;
}

int qx_list_back(QxList list)
{
  if(!qx_list_empty(list))
  {
    if(list -> next != NULL)
    {
      qx_list_back(list -> next) ;
    }
    return list -> n ;
  }
  else
    return QX_LAMBDA_ELEMENT ;
}

// bool qx_list_insert_at(QxList list, int element, qxIndex index)
// {
//   if(qxIndex (qx_list_size(list)) >= index)
//   {
//
//   }
// }

void qx_list_push_front(QxList list, int element)
{
  QxList new ;
  new -> next = list -> next ;
  list -> next = new ;
}

void qx_list_push_back(QxList list, int element)
{
  QxList l, lis ;
  l -> n = element, l -> next = NULL ;

   if(qx_list_empty(list))
   {
     list -> next = l ;
   }
   else
   {
     while(list -> next != NULL)
     {
       lis -> next = list -> next ;
     }
     lis -> next = l ;
   }
}

// qxIndex qx_list_remove_element_first(QxList list, int element)
// {
//
// }
