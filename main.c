/* CS1037a 2022 */
/* Assignment 04 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 20/11/2022 */

#include "main_headers.h"

int main()
{
    int game;
    int loop = 1;

    srand( time( 0 ) ); /* seed random-number generator */

    printf("Greetings Professor.\n");

    //Infinite loop to prompt user to enter a number between 1 - 5 to play a game and 6 to quit the program
    while(loop){
        printf("\nShall we play a game:\n");
        printf(" \t1: Poker\n \t2: Euchre\n \t3: Blackjack\n \t4: Spider Solitaire\n \t5: Classic Solitaire\n \t6: Quit\n");
        printf("Game: ");
        scanf("%d", &game);

        //If 1 - 5 is entered the appropriate game function will be called, if 6 is entered the loop ends
        switch(game){
            case 1:
            poker(1, 4, 13);
            break;

            case 2:
            euchre(1, 4, 6);
            break;

            case 3:
            blackjack(6, 4, 13);
            break;

            case 4:
            spiderSolitaire(1, 4, 13);
            break;

            case 5:
            clasicSolitaire(1, 4, 13);
            break;

            case 6:
            loop = 0;
            break;

            //If none of the above are selected user is prompted to type a correct number
            default:
            printf("The value of %d is not in the list.\nPlease try again.\n", game);
            break;
        }
    }
    printf("\n--------------------Assignment Four (04) written by: Dev Panara (dpanara)--------------------");

    return 0;
}
