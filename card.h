/* 
 * File: card.h
 * Author: UNO Project Team
 * Created on March 11, 2021 at 1:04 AM
 */

#ifndef CARD_H
#define CARD_H

#include <string>

// Represents an UNO card color.
enum Color {
    RED,
    YELLOW,
    GREEN,
    BLUE,
    BLACK
};

// Represents an UNO card face.
// If you add any cards, put them at the end and add a return entry to the face2Str() function.
// TODO Maybe?: Read card color and face strings in from a file.
enum Face {
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    SKIP,
    RVRS,
    PLS2,
    WLD,
    WLD4
};

const std::string& col2Str(Color col);
const std::string& face2Str(Face fc);

// Represents an UNO card.
class Card {
private:
    Color color;
    Face face;
    
public:
    Card(Color, Face);
    Card(const Card &);
    
    bool operator==(const Card &other) const;
    bool operator|=(const Card &other) const;
    
    Color getColor() const { return color; }
    Face getFace() const { return face; }
    
    std::string toString() const;
};

#endif /* CARD_H */

