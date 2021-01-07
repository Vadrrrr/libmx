#include "libmx.h"

void mx_push_front(t_list **list, void *data) {
   t_list *front = mx_create_node(data);
    if (*list == NULL) {
        *list = front;
        return;
    }
    front -> next = *list;
    *list = front;
}
// int main() {
//      t_list *front = NULL;
//      char *data = "hello";
     
//     mx_push_front(&front,data);
//     printf("%s\n" , front -> data);
// }
