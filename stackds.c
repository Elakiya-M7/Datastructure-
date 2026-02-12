#include <stdio.h>
#define MAX 3

int stack[MAX], top = -1;

int isfull()
{
    return (top == MAX - 1);
}

int isempty()
{
    return (top == -1);
}

void push()
{
    int d;

    if (isfull())
    {
        printf("STACK IS FULL\n");
        return;
    }

    printf("ENTER THE VALUE TO PUSH: ");
    scanf("%d", &d);

    stack[++top] = d;
    printf("VALUE %d INSERTED SUCCESSFULLY\n", d);
}

int pop()
{
    return stack[top--];
}

int peek()
{
    return stack[top];
}

int main()
{
    int choice, del, v;

    while (1)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            if (isempty())
            {
                printf("STACK IS EMPTY\n");
            }
            else
            {
                del = pop();
                printf("DELETED VALUE IS %d\n", del);
            }
            break;

        case 3:
            if (isempty())
            {
                printf("STACK IS EMPTY\n");
            }
            else
            {
                v = peek();
                printf("TOP ELEMENT IS %d\n", v);
            }
            break;

        case 4:
            return 0;

        default:
            printf("INVALID CHOICE\n");
        }
    }
}

