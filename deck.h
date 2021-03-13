/* 
 * File: deck.h
 * Author: UNO Project Team
 * Created on March 12, 2021 at 11:46 AM
 */

#ifndef DECK_H
#define DECK_H

#include <vector>

#include "card.h"

// Represents a deck of UNO cards.
class Deck {
private:
    std::vector<Card> cards;
    
public:
    Deck();
    Deck(const Card *cards, int count);
    
     // Returns the card at the given position. Does not throw any errors.
    Card operator[](int i) const { return cards[i]; }
    
    void sort();
    void shuffle();
    
    // TODO: These functions
    //void transfer(int index, Deck &destination);
    //void transfer(Card &card, Deck &desitnation);
    //void transferAll(Deck &destination);
    
    bool isEmpty() const { return cards.empty(); } // Returns true if this deck is empty.
    int count() const { return cards.size(); } // Returns the number of cards in this deck.
    const std::vector<Card> getCards() const { return cards; } // Returns this deck's cards.
};

#endif /* DECK_H */

