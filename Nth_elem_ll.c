//a function to get Nth node in a Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * next;
};
void getNth(struct node* head,int n )
{
	int count =1;
	while(count!=n && head!=NULL)
	{
		head=head->next;
		count+=1;
	}
	if (count !=n)
	printf("n Exceeds size of list");
	else
	printf("%d",head->data);
}
push(struct node **head_ref,int new_data)
{
	struct node *new_node=(struct node *)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}
int main()
{
	struct node *head=NULL;
	push(&head,7);
	push(&head,8);
	push(&head,71);
	push(&head,9);
	push(&head,17);
	getNth(head,9);
}
