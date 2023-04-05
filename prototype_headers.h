/* CS1037a 2022 */
/* Assignment 04 */
/* Dev Panara */
/* 251208360 */
/* dpanara */
/* 20/11/2022 */

#ifndef PROTOTYPE_HEADERS_H_INCLUDED
#define PROTOTYPE_HEADERS_H_INCLUDED
#include "cardID.h"

int shuffleDeck(int numOfDecks, int numOfSuits, int numOfCards, int ***deck);
int poker(int numOfDecks, int numOfSuits, int numOfCards);
int euchre(int numOfDecks, int numOfSuits, int numOfCards);
int blackjack(int numOfDecks, int numOfSuits, int numOfCards);
int spiderSolitaire(int numOfDecks, int numOfSuits, int numOfCards);
int clasicSolitaire(int numOfDecks, int numOfSuits, int numOfCards);
int dealCards(int numOfPlayers, int numOfCardsToDeal, int ***deck, int numOfDecks, int numOfSuits, int numOfCards);
int printCards(int numOfPlayers, int numOfCardsToDeal, int numOfDecks, int numOfSuits, int numOfCards, int ***deck);
int cardAssignment(int numOfDecks, int numOfSuits, int numOfCards, int ***deck);

#endif // PROTOTYPE_HEADERS_H_INCLUDED
