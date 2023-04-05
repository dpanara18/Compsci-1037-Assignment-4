/* CS1037a 2022 */
/* Assignment 04 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 20/11/2022 */

#include "main_headers.h"


//Shuffles the cards
int shuffleDeck(int numOfDecks, int numOfSuits, int numOfCards, int ***deck)
 {
   int decks; //Decks
   int suits; //suits
   int cards; //cards
   int card; //counter
   int condition;

   /* for each of the cards, choose slot of deck randomly */
   for ( card = 1; card <= numOfDecks*numOfSuits*numOfCards; card++ )
   {
       condition = 1;
      while(condition) {
      decks = rand() % numOfDecks;
      suits = rand() % numOfSuits;
      cards = rand() % numOfCards;
      if(deck[decks][suits][cards] == 0){
        //place card number in chosen slot of deck if slot has not been selected yet
        deck[decks][suits][cards] = card;
        condition = 0;}
      } /* end do...while */
   }
 } //End function
