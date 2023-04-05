/* CS1037a 2022 */
/* Assignment 04 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 20/11/2022 */

#include "main_headers.h"

int poker(int numOfDecks, int numOfSuits, int numOfCards){
    int numOfPlayers; //Declaring int for number of players
    int condition = 1; //Integer for infinite while loop to prompt for number of players
    // Dynamically allocating the upper level pointer representing number of decks
    int ***pDeck = (int ***)malloc(numOfDecks * sizeof(int **));
    //Dynamically allocating each deck to represent the number of suits
    for(int i = 0; i < numOfDecks; i++){
    pDeck[i] = (int **)malloc(numOfSuits * sizeof(int *));
    }
    //Dynamically allocating each suit to represent the number of cards
    for(int i = 0; i < numOfDecks; i++){
        for(int j = 0; j < numOfSuits; j++){
            pDeck[i][j] = (int*)malloc(numOfCards * sizeof(int));
        }
    }
    //Initializing each card to 0
    for(int i = 0; i < numOfDecks; i++){
        for(int j = 0; j < numOfSuits; j++){
            for(int k = 0; k < numOfCards; k++){
                pDeck[i][j][k] = 0;
            }
        }
    }

    //Infinite loop to prompt user for number of players
    while (condition){
        printf("Enter the number of players (between 1 and 6) in this game: ");
        scanf("%d", &numOfPlayers);

        //If user inputs 1 - 5 the loop ends, if not loop will run again
        switch(numOfPlayers){
        case 1:
            condition = 0;
            break;
        case 2:
            condition = 0;
            break;
        case 3:
            condition = 0;
            break;
        case 4:
            condition = 0;
            break;
        case 5:
            condition = 0;
            break;
        case 6:
            condition = 0;
            break;
        default:
            printf("\n%d is an incorrect number of players for this game.\nPlease enter a value between 1 and 6.\n", numOfPlayers);
            break;
        }
    }

    shuffleDeck(numOfDecks, numOfSuits, numOfCards, pDeck); //Shuffling the decks
    printCards(numOfPlayers, 5, numOfDecks, numOfSuits, numOfCards, pDeck); //Printing the cards

    /*    Freeing the dynamically allocated space in memory    */
    //Freeing each suite first
    for(int i = 0; i < numOfDecks; i++){
        for(int j = 0; j < numOfSuits; j++){
            free(pDeck[i][j]);
        }
    }
    //Freeing each deck
    for(int i = 0; i < numOfDecks; i++){
        free(pDeck[i]);
    }
    //Freeing upper level pointer
    free(pDeck);
} //End function
