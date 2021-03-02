#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Creating a node
struct node
{
	int data;
	struct node *next;
};
void main()
{
	clrscr();

	int ans;
	struct node *start=NULL, *last=NULL, *temp=NULL, *t;

                    //traversing
	do
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter the node data: ");
		scanf("%d", &temp->data);
		temp->next=NULL;

		if(start==NULL)
		{
			start=temp;
			last=temp;
		}
		else
		{
			last->next=temp;
			last=last->next;
		}

		printf("Continue (If yes then press 1 or else press 0.)? ");
		scanf("%d", &ans);
	}
	while(ans==1);

	printf("Linked List: ");
	t=start;

	while(t!=NULL)
	{
		printf("\t%d",t->data);
		t=t->next;
	}

	getch();
}