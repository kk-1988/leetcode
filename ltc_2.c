#include <stdio.h>
#include <stdlib.h>

typedef struct list_node {
     int val;
     struct list_node *next;
}list_node_t;

list_node_t* add_two_numbers(list_node_t* l1, list_node_t* l2)
{
    if(NULL == l1 || NULL == l2)
        return NULL;

    list_node_t *p = l1, *q = l2;
    list_node_t *next = NULL,*head = NULL;

    while(p || q)
    {
        next = calloc(1, sizeof(list_node_t));
        if(NULL == next)
            return NULL;

        //产生node
        next->val = ((NULL == p)?0:p->val) + ((NULL == q)?0:q->val);
        next->next = NULL;
        
        if(NULL == head)
            head = next;
        else
        {
            next->next = head;
            head->next = NULL;
            head = next;
        }
            
        p++;
        q++;
    }

    return head;
}

int main(int argc,char *argv[])
{
    list_node_t *l1,*l2;
    l1 = (list_node_t *)malloc(5);
    l2 = (list_node_t *)malloc(4);

    
    

    add_two_numbers(l2, l2);

    return 0;
}
