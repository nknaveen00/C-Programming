#include<stdio.h>

void board();
int checkwin();

char game[10]={'0','1','2','3','4','5','6','7','8','9'};
int opt=1;

void main()
{
    int count=1,win;
    printf("\t\t\tTic Tac Toe\n");
    printf("\n\nFor Player 1: *");
    printf("\nFor Player 2: @");
    printf("\nTo select your position press 1 to 9");
    printf("\nLet's Start the Game!!!\n");
    printf("\nYour board is here\n");
    board();
    while(opt)
    {
        if(count>9)
        {
            printf("\nMatch draw");
            break;
        }
        printf("\nPlayer 1\nEnter your position: ");
        scanf("%d",&opt);
        game[opt]='*';
        board();
        if(count>=3)
        {
            win=checkwin();
            if(win==1)
            {
                printf("\nPlayer 1 win");
                break;
            }
            else
            {
                if(win==0&&count==5)
                {
                    printf("\nMatch draw");
                    break;
                }
            }
        }
        printf("\nPlayer 2\nEnter your position: ");
        scanf("%d",&opt);
        game[opt]='@';
        board();
        if(count>=3)
        {
            win=checkwin();
            if(win==1)
            {
                printf("\nPlayer 2 win");
                break;
            }
        }
        count++;
    }

}

void board()
{
    printf("\t-------------------------------------------------\n");
    //printf("\t|\t\t|\t\t|\t\t|\n");
    printf("\t|\t%c\t|\t%c\t|\t%c\t|",game[1],game[2],game[3]);
   // printf("\n\t|\t\t|\t\t|\t\t|\n");
    printf("\n\t-------------------------------------------------\n");
    //printf("\t|\t\t|\t\t|\t\t|\n");
    printf("\t|\t%c\t|\t%c\t|\t%c\t|",game[4],game[5],game[6]);
    //printf("\n\t|\t\t|\t\t|\t\t|\n");
    printf("\n\t-------------------------------------------------\n");
    //printf("\t|\t\t|\t\t|\t\t|\n");
    printf("\t|\t%c\t|\t%c\t|\t%c\t|",game[7],game[8],game[9]);
    //printf("\n\t|\t\t|\t\t|\t\t|\n");
    printf("\n\t-------------------------------------------------\n");
}

int checkwin()
{
    if(game[1]==game[2]&&game[2]==game[3])
        return 1;
    else if(game[4]==game[5]&&game[5]==game[6])
        return 1;
    else if(game[7]==game[8]&&game[8]==game[9])
        return 1;
    else if(game[1]==game[4]&&game[4]==game[7])
        return 1;
    else if(game[2]==game[5]&&game[5]==game[8])
        return 1;
    else if(game[3]==game[6]&&game[6]==game[9])
        return 1;
    else if(game[1]==game[5]&&game[5]==game[9])
        return 1;
    else if(game[3]==game[5]&&game[5]==game[7])
        return 1;
    else
        return 0;
}
