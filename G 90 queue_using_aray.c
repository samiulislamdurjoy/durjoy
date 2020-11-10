#include<stdio.h>
#include<stdlib.h>
struct queue
{
   int size;
   int f;
   int r;
   int* arr;
};
int isFull(struct queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct queue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void enqueue(struct queue *q,int val)
{
    if(isFull(q))
    {
        printf("The Queue is full.said by is full function\n");
    }
    else
    {
        q->r++;
        q->arr[q->r]=val;
        return printf("the element %d is added in the index %d. NB: maximum index to be used is %d\n",val,q->r,q->size-1);
    }
}
int dequeue(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("The queue is empty said by is empty function.\n");
        return 000;
    }
    else
    {
        q->f++;
        int a=q->arr[q->f];
        return printf("the element %d is removed from index %d\n",a,q->f);

    }
}
int main()
{
    struct queue q;
    q.size=4;
    q.f=q.r=-1;
    q.arr = (int*) malloc(q.size*sizeof(int));

    enqueue(&q,12);
    enqueue(&q,15);
    enqueue(&q,18);
    enqueue(&q,19);
    enqueue(&q,18);
    enqueue(&q,18);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);









    return 0;
}
