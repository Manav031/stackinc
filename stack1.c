#include <stdio.h>
#include <stdlib.h>

struct stack1
{   
    int top;
    int size;
    int * a;
};

int isEmpty(struct stack1 *s) {
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack1 *s) {
    if (s->top == s->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack1 *s, int v) {
    if (isFull(s))
    {
        printf("stack is overflow!");
    }
    else
    {
        s->top++;
        s->a[s->top] = v;
        // printf("value inserted\n");
    }
}

void pop(struct stack1 *s) {
    if (isEmpty(s))
    {
        printf("stack is underflow!");
    }
    else
    {
        int gv;
        gv = s->a[s->top];
        s->top--;
        // printf("value deleted was %d", gv);
    }
}

void peek(struct stack1 *s) {
    if (isEmpty(s))
    {
        printf("stack is underflow");
    }
    else
    {
        printf("the value on top is %d\n", s->a[s->top]);
    }
}

void change(struct stack1 *s, int v) {
    if (isEmpty(s))
    {
        printf("stack is underflow");
    }
    else
    {
        s->a[s->top] = v;
    }
}

void display(struct stack1 *s) {
    for (int i = s->top; i >= 0; --i)
    {
        printf("%d\n", s->a[i]);
    }
    
}

void main() {
    struct stack1 *s = (struct stack1 *) malloc(sizeof(struct stack1));
    s->top = -1;
    s->size = 100;
    s->a = (int *) malloc(s->size * sizeof(int));
    // push(s,10);
    // push(s,20);
    // push(s,30);
    // push(s,40);
    // push(s,50);
    // display(s);
    // peek(s);
    // display(s);
}