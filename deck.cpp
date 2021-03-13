/* 
 * File: deck.cpp
 * Author: UNO Project Team
 * Created on March 12, 2021 at 11:57 AM
 */

#include <algorithm>
#include "deck.h"

Deck::Deck() { }

Deck::Deck(const Card *cards, int count) : cards(cards, cards+count) { }

// Helper function for sort().
bool cardCompare(Card &first, Card &second) {
    if (first.getColor() < second.getColor()) return true;
    else if (first.getColor() > second.getColor()) return false;
    return first.getFace() < second.getFace();
} 

// Sorts this deck by color and then face.
void Deck::sort() {
    std::sort(cards.begin(), cards.end(), cardCompare);
}

// Shuffles this deck.
void Deck::shuffle() {
    std::random_shuffle(cards.begin(), cards.end());
}