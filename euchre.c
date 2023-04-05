/* CS1037a 2022 */
/* Assignment 04 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 20/11/2022 */

#include "main_headers.h"

int euchre(int numOfDecks, int numOfSuits, int numOfCards){
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

    shuffleDeck(numOfDecks, numOfSuits, numOfCards, pDeck); //Shuffling the deck
    printCards(4, 5, numOfDecks, numOfSuits, numOfCards, pDeck); //Printing the cards

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
} //End Function
