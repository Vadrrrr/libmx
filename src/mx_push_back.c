#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *back = mx_create_node(data);
    t_list *tmp = *list;

    if (*list == NULL || list == NULL) {
        *list = back;
        return;
    }
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = back;
}

// int main() {
//      t_list *back = NULL;
//      char *data = "hello";
//      mx_push_back(&back,data);
    
//     for (int i = 0; back; i++){
//         printf("%s\n" , back->data);
//     }
// }
