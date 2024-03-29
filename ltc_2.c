#include <stdio.h>
#include <stdlib.h>

typedef struct list_node {
     int val;
     struct list_node *next;
}list_node_t;

list_node_t* add_two_numbers(list_node_t *l1, list_node_t *l2)
{
    if(NULL == l1 || NULL == l2)
        return NULL;

    list_node_t *p = l1, *q = l2;
    list_node_t *node = NULL;
	list_node_t *head = (list_node_t *)calloc(1, sizeof(list_node_t));
    list_node_t *tail = head;
	int flag = 0;
	int sum = 0;
	int node_value;

    while(p || q)
    {
        sum = ((NULL == p)?0:p->val) + ((NULL == q)?0:q->val) + flag;
		flag = sum / 10;
		node_value = sum % 10;

		//生成结点
        node = (list_node_t *)calloc(1, sizeof(list_node_t));
        if(NULL == node)
            return NULL;

		node->val = node_value;
        tail->next = node;
        tail = node;

        //这里需要加上判断，否则可能p或者q可能为NULL，这样会崩溃
        if(p)
            p = p->next;

        if(q)
            q = q->next;
    }

	if(flag > 0)
	{
		node = (list_node_t *)calloc(1, sizeof(list_node_t));
        if(NULL == node)
            return NULL;

		node->val = flag;
		tail->next = node;
        tail = node;
	}

    return head->next;
}

int main(int argc,char *argv[])
{
	list_node_t *l1,*l2;
	l1 = (list_node_t *)malloc(sizeof(list_node_t) * 5);
	l2 = (list_node_t *)malloc(sizeof(list_node_t) * 4);

    add_two_numbers(l1, l2);

    return 0;
}
