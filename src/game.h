#pragma once
#include "grid.h"
#include"blocks.cpp"

class Game
{
public:
    Game();
    void Draw();
    void HandleInput();
    void MoveBlockDown();
    bool gameOver;
    int score;

private:
    Grid grid;
    Block GetRandomBlock();
    void MoveBlockLeft();
    void MoveBlockRight();
    std::vector<Block> GetAllBlocks();
    void Reset();
    bool IsBlockOutside();
    void RotateBlock();
    void LockBlock();
    bool BlockFits();
    void UpdateScore(int LinesCleared, int moveDownPoints);
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};