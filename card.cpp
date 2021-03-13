/* 
 * File: card.cpp
 * Author: UNO Project Team
 * Created on March 11, 2021 at 1:12 AM
 */

#include "card.h"

// Returns the string representation of a color.
const std::string& col2Str(Color col) {
    static std::string colors[] = {"Red","Yellow","Green","Blue","Black"};
    static std::string undefined("Undefined Color");
    
    if (col > -1 && col < 6) return colors[col];
    return undefined;
}

// Returns the string representation of a face.
const std::string& face2Str(Face fc) {
    static std::string faces[] = {"0","1","2","3","4","5","6","7","8","9",
        "Skip","Reverse","+2","Wild","Wild +4"};
    static std::string undefined("Undefined Face");
    
    if (fc > -1 && fc < 15) return faces[fc];
    return undefined;
}

// Konstruktor
Card::Card(Color col, Face fc) {
    color = col;
    face = fc;
}

Card::Card(const Card &other) {
    color = other.getColor();
    face = other.getFace();
}

// Returns whether this card is exactly equal to the other.
bool Card::operator==(const Card &other) const {
    return other.getColor() == this->getColor() &&
           other.getFace() == this->getFace();
}

// Returns whether this card shares a face or a color with the other.
bool Card::operator|=(const Card &other) const {
    return other.getColor() == this->getColor() ||
           other.getFace() == this->getFace();
}

// Returns the string representation of this card.
std::string Card::toString() const {
    if (getColor() == Color::BLACK)
        return face2Str(getFace());
    return std::string(col2Str(getColor())).append(" ").append(face2Str(getFace()));
}