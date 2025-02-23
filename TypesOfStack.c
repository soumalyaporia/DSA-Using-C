#include<stdio.h>

#define MAX 5
struct Stack{
    int arr[MAX];
    int top;
};
void intStack(struct Stack* stack)
{
    stack->top=-1;
}
int isFull(struct Stack* stack)
{
    return stack->top==MAX-1;
}
int isEmpty(struct Stack* stack)
{
    return stack->top==-1;
}
void push(struct Stack* stack, int value)
{
    if(isFull(stack))
    {
        printf("Stack Overflow Unable to push %d\n",value);
    }
    else
    {
        stack->arr[++stack->top]=value;
        
        printf("%d pushed into the stack.\n",value);
    }
}
int pop(struct Stack* stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow unable to pop\n");
        return-1;
    }
    else
    {
        return stack->arr[stack->top--];
    }
}

int peek(struct Stack* stack)
{
    if(isEmpty(stack))
    {
        printf("Stack is empty.\n");
        return-1;
    }
    else
    {
        return stack->arr[stack->top];
    }
}

void display(struct Stack* stack)
{
    if(isEmpty(stack))
    {
        printf("Stack is empty.\n");
    }

    else
    {
        printf("Stack elements are:");

        for(int i=0;i<=stack->top;i++)
        {
            printf("%d",stack->arr[i]);
        }

        printf("\n");
    }
}

int main()
{
    struct Stack stack;

    int choice, value;


    intStack(&stack);

    while(1)
    {
        printf("\nEnter your choice:\n");

        printf("1.Push\n");

        printf("2.Pop\n");

        printf("3.Peek\n");

        printf("4.Display\n");

        printf("5.Exit\n");

        printf("Choice:");

        scanf("%d",& choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push:");
            scanf("%d",&value);
            push(&stack,value);
            break;
        case 2:
            value=pop(&stack);
            if(value!=-1)
            {
                printf("%d popped from the stack.\n",value);
            }
            break;
        
        case 3:
            value=peek(&stack);
            if(value!=-1)
            {
                printf("Top element is:%d\n",value);
            }
            break;
        case 4:
            display(&stack);
            break;
        
        case 5:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice! please try again.\n");
        }
    }
    return 0;
}