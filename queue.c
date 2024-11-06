#include<stdio.h>
#include<stdbool.h>
#define size 5
int que[size];
int front = -1;
int rear = -1;
bool isempty()
{
return front == -1 && rear == -1;
}
bool isfull()
{
return rear == size - 1;
}
void enq(int x)
{
if(isfull())
{
printf("\n queue is overflow! Cannot enqueue element %d in queue.",x);
}
else if(isempty())
{
front = rear = 0;
que[rear] = x;
}
else
{
rear ++;
que[rear] = x;
}
}
void deq()
{
if(isempty())
{
printf("\n queue is underflow! Cannot dequeue elements.");
}
else if(front == rear)
{
front = rear = -1;
}
else
{
printf("\n dequeue element %d from queue successfully!",que[front]);
front ++;
}
}
void display()
{
if(isempty())
{
printf("\n queue is underflow cannot display elements");
}
else
{
printf("\n queue elements ( from front to rear):");
for(int i=front;i<rear+1;i++)
printf("\n%d",que[i]);
}
}
int main()
{
int element;
printf("\n enter element to enqueue in queue :");
for(int i =0;i<=size-1;i++)
{
scanf("\n%d",&element);
enq(element);
}
display();
deq();
// if we again try to enqueue element after dequeue then it will not 
// work because when we dequeue elements from front of the queue it 
// will also remove its position from the queue. So , we cannot insert 
// any other element.
enq(10);
display();
enq(20);
deq();
display();
deq();
display();
return 0;
}
