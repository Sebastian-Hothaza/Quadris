#ifndef tblock_h
#define tblock_h

#include "block.h"

class TBlock: public Block{
    void orientation_0(Pos leftCorner, std::vector<Pos> &newPositions);
    void orientation_1(Pos leftCorner, std::vector<Pos> &newPositions);
    void orientation_2(Pos leftCorner, std::vector<Pos> &newPositions);
    void orientation_3(Pos leftCorner, std::vector<Pos> &newPositions);
    
    public:
    TBlock(int levelCreated);
    void rotateClockwise() override;
    void rotateCounterclockwise() override;
    
    std::vector<std::vector<State>> printBlock() override;
};

#endif
