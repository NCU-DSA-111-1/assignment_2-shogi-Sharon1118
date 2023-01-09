#include "../inc/function.h"
MAPNODE* stack=NULL;
void Push(void)
{
    MAPNODE* tmp;
    tmp=(MAPNODE*)malloc(sizeof(MAPNODE));
    memcpy(tmp->checkerboard, map, ROW*COL*sizeof(CHESS));
    tmp->next=stack;
    stack=tmp;
}


void Pop()
{
    MAPNODE* tmp;
    if(stack==NULL)
    {
        printf("Ther is nothing to be poped");
    }
    else
    {
        tmp=stack;
        stack=stack->next;
        memcpy(map, tmp->checkerboard, ROW*COL*sizeof(CHESS));
        printthemap();
        free(tmp);
    }
}