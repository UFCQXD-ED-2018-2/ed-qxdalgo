#include <stdio.h>
#include "qxlist.h"
int main()
{
    // printf("Hello World!\n");

    QxList list = qx_list_new() ;
    qx_list_push_back(list, 10) ;
    qx_list_push_back(list, 6) ;
    qx_list_push_back(list, 1) ;

    printf("\n%d", list -> next.n) ;

    return 0;
}
