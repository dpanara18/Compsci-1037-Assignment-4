/* CS1037a 2022 */
/* Assignment 04 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 20/11/2022 */

#include "main_headers.h"

int printCards(int numOfPlayers, int numOfCardsToDeal, int numOfDecks, int numOfSuits, int numOfCards, int ***deck){
    int card; //card counter
    int suits; //suits
    int cards; //cards
    int decks; //decks
    int count; //counter

    //Printing the cards for each player
    for(int i = 0; i < numOfPlayers; i++){
    printf("\nCards for player number: %d\n", i + 1);
    count = 0;

    //Loops through each card for the player
    for (  card = i + 1; count < numOfCardsToDeal; card = card + numOfPlayers)
    {
        for ( decks = 0; decks < numOfDecks; decks++)
        {
        /* loop through rows of deck */
            for ( suits = 0; suits < numOfSuits; suits++ )
            {
                /* loop through columns of deck for current suits */
                for ( cards = 0; cards < numOfCards; cards++ )
                {
                /* if slot contains current card, display */
                if ( deck[decks][ suits ][ cards ] == card )
                    {
                    printf( "%-6s of   %-18s[consisting of a stored card value of %d and a stored suit value of of %d]\n", faceValue[cards], suitName[suits], cards, suits);
                    count ++;
                    } /* end if */
                } /* end for */
            } /* end for */
        } /* end for */
    } /* end for */
    }/* end for */

    //If blackjack is played, print another person
    if(numOfCardsToDeal == 2){
    printf("\nCards for THE DEALER:\n");
    count = 0;

    //Loops through each card for the new player, the dealer or number of players + 1
    for (  card = numOfPlayers + 1; count < numOfCardsToDeal; card = card + numOfPlayers)
    {
        for ( decks = 0; decks < numOfDecks; decks++)
        {
        /* loop through rows of deck */
            for ( suits = 0; suits < numOfSuits; suits++ )
            {
                /* loop through columns of deck for current suits */
                for ( cards = 0; cards < numOfCards; cards++ )
                {
                /* if slot contains current card, display */
                if ( deck[decks][ suits ][ cards ] == card )
                    {
                    printf( "%-6s of   %-18s[consisting of a stored card value of %d and a stored suit value of of %d]\n", faceValue[cards], suitName[suits], cards, suits);
                    count ++;
                    } /* end if */
                } /* end for */
            } /* end for */
        } /* end for */
    } /* end for */
    }
} //End function
