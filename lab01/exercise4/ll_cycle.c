#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    if (head==NULL) return 0;
    node *fast_ptr=head;
    node *slow_ptr=head;
    while(1){
          fast_ptr=fast_ptr->next->next;
          slow_ptr=slow_ptr->next;
        if(fast_ptr==NULL || fast_ptr->next==NULL || fast_ptr->next->next==NULL){
            return 0;
        }
        
        if(fast_ptr==slow_ptr){
            return 1;
        }
      

    }
    return 0;
}
