#include "../inc/function.h"

void printthemap()
{
    printf("\t");
    for(int k = 0; k < COL; k++)
    {
        printf("%d\t",k+1);
    }
    printf("\n");
        for (int i = 0; i < ROW; i++)
    {
        printf("%d\t",i+1);
        for (int k = 0; k < COL; k++)
        {
            if (map[i][k].id != SPACE)
            {
                if (map[i][k].owner == 1)
                {
                    switch (map[i][k].id) 
                    {
                    case 0:
                        printf("\033[31m步\t\033[0m");
                        break;
                    case 1:
                        printf("\033[31m角\t\033[0m");
                        break;
                    case 2:
                        printf("\033[31m飛\t\033[0m");
                        break;
                    case 3:
                        printf("\033[31m香\t\033[0m");
                        break;
                    case 4:
                        printf("\033[31m桂\t\033[0m");
                        break;
                    case 5:
                        printf("\033[31m銀\t\033[0m");
                        break;
                    case 6:
                        printf("\033[31m金\t\033[0m");
                        break;
                    case 7:
                        printf("\033[31m王\t\033[0m");
                        break;
                    }
                }
                else
                {
                    switch (map[i][k].id) 
                    {
                    case 0:
                        printf("\033[34m步\t\033[0m");
                        break;
                    case 1:
                        printf("\033[34m角\t\033[0m");
                        break;
                    case 2:
                        printf("\033[34m飛\t\033[0m");
                        break;
                    case 3:
                        printf("\033[34m香\t\033[0m");
                        break;
                    case 4:
                        printf("\033[34m桂\t\033[0m");
                        break;
                    case 5:
                        printf("\033[34m銀\t\033[0m");
                        break;
                    case 6:
                        printf("\033[34m金\t\033[0m");
                        break;
                    case 7:
                        printf("\033[34m王\t\033[0m");
                        break;
                    }
                }
            }
            else
            {
                printf("口\t");
            }
        }
        printf("\n");
    }
}