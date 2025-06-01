#include <iostream>
using namespace std;

typedef int itemType;

const int MAXSTACK = 255;

typedef struct {
    itemType Item[MAXSTACK];
    int Count;
}Stack;

void InitializeStack(Stack *S);
int Full(Stack *S);
int Empty(Stack *S);
void Pop(Stack *S, itemType *x);
void Push(Stack *S, itemType x);
