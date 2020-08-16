//
// Created by jakub on 09.08.2020.
//

#ifndef CHECKERS_PIECE_H
#define CHECKERS_PIECE_H


#include <vector>

enum Color {RED = 1, WHITE = -1};

class Piece {
private:
    int x;
    int y;
    Color color;

public:
    Piece(int x, int y, Color color);

    int getColor() const;

    void setColor(Color color);

    void setX(int x);

    void setY(int y);

    int getX() const;

    int getY() const;

    virtual void isMoveValid(std::vector<std::vector<Piece *>> array, int x, int y) = 0;

    virtual void move(std::vector<std::vector<Piece *>> array) = 0;

    virtual void print() = 0;
};


#endif //CHECKERS_PIECE_H
