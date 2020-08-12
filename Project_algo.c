#include <stdio.h>




char box[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void table();

int main()
{

    printf("#####                    ##### ##########   ##           #########    ############    ####        ####     ##########\n");
    printf("  ##                      ##   ##      ##   ##           ##     ##    ##        ##    ## ##      ## ##     ##      ##\n");
    printf("   ##                    ##    ##           ##           ##           ##        ##    ##  ##    ##  ##     ##\n");
    printf("    ##       ####       ##     ##    #      ##           ##           ##        ##    ##   ##  ##   ##     ##    #\n");
    printf("     ##     ##  ##     ##      #######      ##           ##           ##        ##    ##    ####    ##     #######\n");
    printf("      ##   ##    ##   ##       ##    #      ##           ##           ##        ##    ##            ##     ##    #\n");
    printf("       ## ##      ## ##        ##           ##           ##           ##        ##    ##            ##     ##\n");
    printf("        ###        ###         ##      ##   ##      ##   ##      ##   ##        ##    ##            ##     ##      ##\n");
    printf("         #          #          ##########   ##########   ##########   ############   ####          ####    ##########\n");


    printf("\n\n\n\n\n");



    printf("                                                  TIC TAC TOE\n");
    printf("\n\n\n\n\n");



    int player = 1, i, choice;

    char fill;
    do
    {
        table();

       if(player%2)
       {
           player = 1;
       }
       else
       {
           player = 2;
       }

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);


        if(player == 1)
       {
           fill = 'X';
       }
       else
       {
           fill = 'O';
       }

        if (choice == 1 && box[1] == '1')
            box[1] = fill;

        else if (choice == 2 && box[2] == '2')
            box[2] = fill;

        else if (choice == 3 && box[3] == '3')
            box[3] = fill;

        else if (choice == 4 && box[4] == '4')
            box[4] = fill;

        else if (choice == 5 && box[5] == '5')
            box[5] = fill;

        else if (choice == 6 && box[6] == '6')
            box[6] = fill;

        else if (choice == 7 && box[7] == '7')
            box[7] = fill;

        else if (choice == 8 && box[8] == '8')
            box[8] = fill;

        else if (choice == 9 && box[9] == '9')
            box[9] = fill;

        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = checkwin();

        player++;
    }while (i ==  - 1);

    table();

    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();

    return 0;
}


int checkwin()
{
    if (box[1] == box[2] && box[2] == box[3])
        return 1;

    else if (box[4] == box[5] && box[5] == box[6])
        return 1;

    else if (box[7] == box[8] && box[8] == box[9])
        return 1;

    else if (box[1] == box[4] && box[4] == box[7])
        return 1;

    else if (box[2] == box[5] && box[5] == box[8])
        return 1;

    else if (box[3] == box[6] && box[6] == box[9])
        return 1;

    else if (box[1] == box[5] && box[5] == box[9])
        return 1;

    else if (box[3] == box[5] && box[5] == box[7])
        return 1;

    else if (box[1] != '1' && box[2] != '2' && box[3] != '3' &&
        box[4] != '4' && box[5] != '5' && box[6] != '6' && box[7]
        != '7' && box[8] != '8' && box[9] != '9')

        return 0;
    else
        return  - 1;
}



void table()
{



    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n",box[1], box[2], box[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[4], box[5], box[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[7], box[8], box[9]);

    printf("     |     |     \n\n");
}
