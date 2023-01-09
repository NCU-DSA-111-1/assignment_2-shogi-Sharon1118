#include "../inc/function.h"


int main() {
    char con='f';
    int player=ME;
    int duanpos,jinpos,duandes,jindes;
    int posx,posy,desx,desy;
    CHESS bmap;
    initialize();
    printthemap();
    printf("遊戲開始\n");
    Push();
    do{ 
        if(con=='b')
        {
            Pop();
        }
 
        else if(con=='f')
        {   
            if(player==ME)
            {
                printf("「我」下棋\n");
            }
            else
            {
                printf("「敵方」下棋\n");
            }
            printf("請問要移動哪顆旗子?(段,筋)\n");
            scanf(" (%d,%d)",&duanpos,&jinpos);
            printf("請問要移動到哪裡?(段,筋)\n");
            scanf(" (%d,%d)",&duandes,&jindes);

            posx=duanpos-1;
            posy=jinpos-1;
            desx=duandes-1;
            desy=jindes-1;

            check(posx,posy,desx,desy);
        }
        printf("繼續遊戲:f\t退回上一步:b\t退出:o\t");
        scanf(" %s",&con);
        if(con!='b'){
            Push();
        }
        player=(!player);
    }while(con!='o');

    return 0;
}