/* CS1037a 2022 */
/* Assignment 04 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 20/11/2022 */

#include "main_headers.h"

int dealCards(int numOfPlayers, int numOfCardsToDeal, int ***deck, int numOfDecks, int numOfSuits, int numOfCards){
    int newDeck[numOfDecks*numOfSuits*numOfCards];
    int a = 0;
    int **playerCards = (int**)malloc(numOfPlayers * sizeof(int*));

    for(int i = 0; i < numOfPlayers; i++){
        playerCards[i] = (int*)malloc(numOfCardsToDeal * sizeof(int));
    }

    for(int i = 0; i < numOfDecks; i++){
        for(int j = 0; j < numOfSuits; j++){
            for(int k = 0; k < numOfCards; k++){
                newDeck[a] = deck[i][j][k];
                a++;
            }
        }
    }

    for(int i = 0; i < numOfPlayers; i++){
        a = i;
        for(int j = 0; j < numOfCardsToDeal; j++){
            playerCards[i][j] = newDeck[a];
            a = a + numOfPlayers;
        }
    }

    //printCards(numOfPlayers, numOfCardsToDeal, numOfDecks, numOfSuits, numOfCards, playerCards, deck);
}
