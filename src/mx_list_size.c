#include "libmx.h"

int mx_list_size(t_list *list) {
    t_list *temp = NULL;
    int i = 0;
    if (!list)
        return i;
    else {
        temp = list;
        for(;temp; i++, temp = temp -> next);
        return i;
    }
}

// int main(){
//  mx_printstr("\n\n----------------MX_LIST_SIZE-------------------\n");
//         char *list_size_str = "HEAD", *list_size_str1 = "STR1", *list_size_str2 = "STR2", *list_size_str3 = "STR3";
//         t_list *size_new_list = NULL;
//         mx_push_back(&size_new_list, list_size_str), mx_push_back(&size_new_list, list_size_str1), mx_push_back(&size_new_list, list_size_str2), mx_push_back(&size_new_list, list_size_str3);
//         int list_size = mx_list_size(size_new_list);
//         mx_printstr("list size is 4? | "); mx_printint(list_size); mx_printstr("\n");
// }
