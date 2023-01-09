#include "../inc/function.h"
int Chess[] = { D,E,F,G,H,A,B,C };
void initialize() {
    for (int i = 0; i < ROW; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            map[i][k].id = SPACE;
            map[i][k].owner = NO;
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int k = 0; k < COL; k++)
        {
            int chessname = SPACE;
            int onr;
            //別人的棋
            if (i <= 2)
            {   
                //初始化第一行的棋子，
                if (i == 0)
                {
                    if (k <= 4)
                    {
                        chessname = Chess[k];
                        onr = OTHER;
                    }
                    else
                    {
                        chessname = Chess[8 - k];
                        onr = OTHER;
                    }
                }
                //設置飛
                if (i == 1 && k == 1)
                {
                    chessname = C;
                    onr = OTHER;
                }
                //設置角
                if (i == 1 && k == 7)
                {
                    chessname = B;
                    onr = OTHER;
                }
                if (i == 2)
                {
                    chessname = A;
                    onr = OTHER;
                }

            }
            //自己的棋
            if( (i>=6) && (i<=8) )
            {
                //初始化第一行的棋子，
                if (i == 8)
                {
                    if (k <= 4)
                    {
                        chessname = Chess[k];
                        onr = ME;
                    }
                    else
                    {
                        chessname = Chess[8 - k];
                        onr = ME;
                    }
                }
                //設置角
                if (i == 7 && k == 1)
                {
                    chessname = B;
                    onr = ME;
                }
                //設置飛
                if (i == 7 && k == 7)
                {
                    chessname = C;
                    onr = ME;
                }
                if (i == 6)
                {
                    chessname = A;
                    onr = ME;
                }
            }
            map[i][k].id = chessname;
            map[i][k].owner = onr;
            map[i][k].x = i;
            map[i][k].y = k;
        }
    }
}
