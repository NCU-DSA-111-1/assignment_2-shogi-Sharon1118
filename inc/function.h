#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROW  9
#define COL  9
#define ME  0
#define OTHER  1
#define NO  2

enum PIECES//枚舉棋子
{
    A, B, C, D, E, F, G, H, SPACE
};
//步=A=0;角=B=1;角=C=2;角=D=3;角=E=4;角=F=5;角=G=6;

extern int Chess[8];

typedef struct chess 
{
    int x;//座標x
    int y;//座標y
    int id;//哪個棋子
    int owner;//誰的旗子
    //char situation;
}CHESS;

typedef struct mapnode
{
    CHESS checkerboard[ROW][COL];
    struct mapnode* next;
}MAPNODE;
extern MAPNODE* stack;

CHESS map[ROW][COL];

void initialize();
void printthemap();
void movechess(int,int,int,int);
void check(int,int,int,int);
void Push(void);
void Pop(void);


#endif