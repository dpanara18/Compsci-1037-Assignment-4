/* CS1037a 2022 */
/* Assignment 04 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 20/11/2022 */

#include "main_headers.h"

//Stores the card value, suite, suite name and value name for each card dealt
int cardAssignment(int numOfDecks, int numOfSuits, int numOfCards, int ***deck){
    struct cardAssigned {
        int cardSuite;
        int cardValue;
        char cardSuiteName[10];
        char cardValueName[10];
        };

    //Initializing an array as the structure above
    struct cardAssigned card[numOfDecks * numOfSuits * numOfCards];

    int cardNum; //card counter
    int suits; //suits
    int cards; //cards
    int decks; //decks

    //Loop to find the location of each card
    for ( cardNum = 1; card <= numOfDecks * numOfSuits * numOfCards; cardNum++ )
    {
        for ( decks = 0; decks < numOfDecks; decks++)
        {
            /* loop through rows of deck */
            for ( suits = 0; suits <numOfSuits; suits++ )
            {
                /* loop through columns of deck for current suits */
                for ( cards = 0; cards < numOfCards; cards++ )
                {
                /* if slot contains current card then store the values for that card */
                if ( deck[decks][ suits ][ cards ] == cardNum )
                    {
                    card[cardNum].cardSuite = suits; //Stores the suit value for each card
                    card[cardNum].cardValue = cards; //Stores the card value for each card
                    strcpy(card[cardNum].cardSuiteName, "suitName[suits]"); //Stores the suit name for each card
                    strcpy(card[cardNum].cardValueName, "faceValue[cards]"); //Stores the card value name for each card
                    } /* end if */
                } /* end for */
            } /* end for */
        } /* end for */
    } /* end for */
} //End function
