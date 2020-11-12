#include<stdio.h>
#include<stdlib.h>
struct node * f=NULL;
struct node * r=NULL;
struct node
{
    int data;
    struct node * next;
};
void enqueue(int val)
{
    struct node * n=(struct node *)malloc(sizeof (struct node));
    if(n==NULL)
    {
        printf("queue is full");
    }
    else
    {
        n->data=val;
        n->next=NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next=n;
            r=n;
        }

    }

}
int dequeue()
{
    int val=-1;
    struct node * ptr = f ;
    if(f==NULL)
    {
        printf("The queue is empty.\n");
    }
    else
    {
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}
void linkedlisttraversal(struct node *xyz)
{
    if(f==NULL)
    {
        printf("No value to be printed.\n");
    }
    else
    {
        printf("Printing the elements of this Queue\n");
        while(xyz!=NULL)
        {
            printf("Element: %d\n",xyz->data);
            xyz=xyz->next;
        }
    }





}
int main()
{
    linkedlisttraversal(f);
    dequeue();
    printf("%d\n",dequeue());
    enqueue(3);
    enqueue(3);
    enqueue(3);
    enqueue(3);
    linkedlisttraversal(f);
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    printf("%d\n",dequeue());
    linkedlisttraversal(f);

    printf("%d\n",dequeue());


    linkedlisttraversal(f);
    return 0;
}
