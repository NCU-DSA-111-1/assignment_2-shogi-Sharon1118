#include "../inc/function.h"

void movechess(int posx,int posy,int desx,int desy)
{
    printf("請問要移動哪顆旗子?(輸入棋子的座標)\n");
    scanf("(%d,%d)",&posx,&posy);
    printf("請問要移動到哪裡?(輸入棋子的座標)\n");
    scanf("(%d,%d)",&desx,&desy);
    map[desx][desy].id=map[posx][posy].id;
    map[desx][desy].owner=map[posx][posy].owner;
    map[desx][desy].x=desx;
    map[desx][desy].y=desy;
    map[posx][posy].id=SPACE;

    printthemap();
}