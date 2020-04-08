#pragma once
#include <iostream>
#include <vector>

class Card {
    /*enum Suit_Type {
        Diamonds,
        Hearts,
        Spades,
        Clubs,
        Red,
        Black,
    } suit;*/
    int suit;
    /*enum Value_Type {
        Two = 2,
        Three = 3,
        Four = 4,
        Five = 5,
        Six = 6,
        Seven = 7,
        Eight = 8,
        Nine = 9,
        Ten = 10,
        Jack,
        Queen,
        King,
        Ace,
        Joker,
    } value;*/
    int value;
public:
    Card();
    Card(int newsuit, int newval);
    void printCard();
    int getSuit();
    int getVal();

};

class Deck {
    std::vector<Card> cards;
public:
    Deck();

    Card draw();
};