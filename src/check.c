#include "../inc/function.h"

void check(int posx,int posy,int desx,int desy)
{
    int obstacle;
    if(map[posx][posy].id==SPACE)
    {
        printf("那裡沒有棋子\n");
    }
    else if(map[desx][desy].id!=SPACE)
    {
        printf("目的地有其他棋子,請輸入其他位置\n");
    }
    else if( (desx==posx) && (desy==posy) )
    {
        printf("目的地不可和出發點相同\n");
    }
    else
    {
        if(map[posx][posy].owner==1)
        {
            switch (map[posx][posy].id) 
            {
                case 0://步
                    if(desx==(posx+1) && desy==posy)
                    {
                        movechess(posx,posy,desx,desy);
                        //Push();
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入\n");
                    }
                    break;
                case 1://角
                    if( abs(desx-posx)==abs(desy-posy) )
                    {
                        movechess(posx,posy,desx,desy);
                        //Push();
                    }
                    else
                    {
                       printf("不可移動到該位置，請從新輸入\n");
                    }
                    break;
                case 2://飛
                    if(desx==posx || desy==posy)
                    {
                      movechess(posx,posy,desx,desy);
                      //Push();
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入\n");
                    }
                    break;
                case 3://香
                    if( (desx>posx) && (desy==posy))
                    {
                        for(int i=posx+1;i<=desx;i++)
                        {
                            if(map[i][posy].id!=SPACE){
                                obstacle=1;
                            }
                        }
                        if(obstacle!=1)
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入\n");
                        }
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入\n");
                    }
                    break;
                case 4://桂
                    if(desx!=(posx+2))
                    {
                        printf("不可移動到該位置，請從新輸入\n");
                    }
                    else
                    {
                        if(desy!=(posy+1) && desy!=(posy-1))
                        {
                            printf("不可移動到該位置，請從新輸入\n");
                        }
                        else
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                    }
                    break;
                case 5://銀
                    if( desx==(posx+1) )
                    {
                        if( (desy==posy-1) || (desy==posy) || (desy==posy+1) )
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入\n");
                        }
                    }
                    else if(desx==(posx-1))
                    {
                        if( (desy==posy-1) || (desy==posy+1) )
                        {
                            //movechess(posx,posy,desx,desy);
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入\n");
                        }
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入\n");
                    }
                    break;
                case 6://金
                    if(desx==(posx+1))
                    {
                        if(desy=(desy==posy-1) || (desy==posy) || (desy==posy+1))
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入\n");
                        }
                    }
                    else if(desx==posx)
                    {
                        if((desy==posy-1) || (desy==posy+1))
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入\n");
                        }
                    }
                    else if(desx==(posx-1))
                    {
                        if(desy==posy)
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入\n");
                        }
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入\n");
                    }
                    break;
                case 7://玉
                    if( (desx-posx<=1) && (desy-posy<=1) )
                    {
                        movechess(posx,posy,desx,desy);
                        //Push();
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入\n");
                    }
                    break;
            }
        }
        else
        {
            switch (map[posx][posy].id) 
            {
                case 0://步
                    if( desx==(posx-1) && (desy==posy) )
                    {
                        movechess(posx,posy,desx,desy);
                        //Push();
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入");
                    }
                    break;
                case 1://角
                    if( abs(desx-posx)==abs(desy-posy) )
                    {
                        movechess(posx,posy,desx,desy);
                        //Push();
                    }
                    else
                    {
                       printf("不可移動到該位置，請從新輸入");
                    }
                    break;
                case 2://飛
                    if(desx==posx || desy==posy)
                    {
                      movechess(posx,posy,desx,desy);
                      //Push();
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入");
                    }
                    break;
                case 3://香
                    if( (desx<posx) && (desy==posy))
                    {
                        for(int i=posx-1;i>=desx;i--)
                        {
                            if(map[i][posy].id!=SPACE){
                                obstacle=1;
                            }
                        }
                        if(obstacle!=1)
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入");
                        }
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入");
                    }
                    break;
                case 4://桂
                    if(desx!=(posx-2))
                    {
                        printf("不可移動到該位置，請從新輸入");
                    }
                    else
                    {
                        if(desy!=(posy+1) && desy!=(posy-1))
                        {
                            printf("不可移動到該位置，請從新輸入");
                        }
                        else
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                    }
                    break;
                case 5://銀
                    if( desx==(posx-1) )
                    {
                        if( (desy==posy-1) || (desy==posy) || (desy==posy+1) )
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入");
                        }
                    }
                    else if(desx==(posx+1))
                    {
                        if( (desy==posy-1) || (desy==posy+1) )
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入");
                        }
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入");
                    }
                    break;
                case 6://金
                    if(desx==(posx-1))
                    {
                        if(desy=(desy==posy-1) || (desy==posy) || (desy==posy+1))
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入");
                        }
                    }
                    else if(desx==posx)
                    {
                        if((desy==posy-1) || (desy==posy+1))
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入");
                        }
                    }
                    else if(desx==(posx+1))
                    {
                        if(desy==posy)
                        {
                            movechess(posx,posy,desx,desy);
                            //Push();
                        }
                        else
                        {
                            printf("不可移動到該位置，請從新輸入");
                        }
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入");
                    }
                    break;
                case 7://玉
                    if( (desx-posx<=1) && (desy-posy<=1) )
                    {
                        movechess(posx,posy,desx,desy);
                        //Push();
                    }
                    else
                    {
                        printf("不可移動到該位置，請從新輸入");
                    }
                    break;
            }
        }
    }
}