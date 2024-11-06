#include<stdio.h>

#define MAX_SIZE 5
 int stack[MAX_SIZE];
 int top = -1;
  

 void push(int item)
 {
  if(top==MAX_SIZE-1)
  {
    printf("\n stack ovreflow!cannot push %d elments",item);
  }
  else
  {
    stack[++top]=item;
    printf("\n pushed %d onto the stack.",item);
  }
 }
   void pop()
   {
    int item;
     if(top==-1)
     {
      printf("\n stack underflow!cannot pop element");
     } 
     else
     {
        item=stack[top--];
        printf("\n popped %d from the stack.",item);
    }
}
    void peek()
{
    if(top==-1)
{
    printf("\n stack underflow!cannot perform peek operation.");
}
    else
{
    printf("\n top element of the stack:%d",stack[top]);
}
}
void display()
{
if(top==-1)
{
printf("\n stack is underflow cannot display stack elements!");
}
else
{
printf("\n stack elements (from top to bottom):");
for(int i=top;i>=0;i--)
printf("\n %d",stack[i]);
}
}
int main()
{
int element;
for(int x=0;x<=MAX_SIZE-1;x++)
{
printf("\n enter the element to push into the stack:");
scanf("\n %d",&element);
push(element);
}
display();
push(10);
push(20);
push(30);
pop();
display();
peek();
pop();
display();
peek();
pop();
display();
return 0;
}