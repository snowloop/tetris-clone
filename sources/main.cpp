#include <iostream>
using namespace std;

wstring tetris_bricks[7];
int main()
{
    tetris_bricks[0].append(L"..X.");
    tetris_bricks[0].append(L"..X.");
    tetris_bricks[0].append(L"..X.");
    tetris_bricks[0].append(L"..X.");

    tetris_bricks[1].append(L"..X.");
    tetris_bricks[1].append(L".XX.");
    tetris_bricks[1].append(L"..X.");
    tetris_bricks[1].append(L"....");


    tetris_bricks[2].append(L".....XX..XX.....");
    tetris_bricks[2].append(L".....XX..XX.....");
    tetris_bricks[2].append(L".....XX..XX.....");
    tetris_bricks[2].append(L".....XX..XX.....");
    
    tetris_bricks[3].append(L"..X..XX..X......");
    tetris_bricks[4].append(L".X...XX...X.....");
    tetris_bricks[5].append(L".X...X...XX.....");
    tetris_bricks[6].append(L"..X...X..XX.....");
    return 0;
}