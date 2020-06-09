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
    list_node_t *node = NULL,*head = NULL;
	int flag = 0,sum = 0,node_value;

    while(p || q)
    {
        sum = ((NULL == p)?0:p->val) + ((NULL == q)?0:q->val) + flag;
		flag = sum / 10;
		node_value = sum % 10;
		
		//生成结点
        node = calloc(1, sizeof(list_node_t));
        if(NULL == node)
            return NULL;    
						
		node->val = node_value;
		node->next = head;
		head = node;
		
        p++;
        q++;
    }
	
	if(flag > 0)
	{
		node = calloc(1, sizeof(list_node_t));
        if(NULL == node)
            return NULL;  

		node->val = flag;
		node->next = head;
		head = node;		
	}
	
    return head;
}

int main(int argc,char *argv[])
{
    add_two_numbers(l2, l2);

    return 0;
}
