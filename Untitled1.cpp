#include <_mingw.h>
#include <txlib.h>
using namespace std;

void results (int i);
void area(int x, int y);
void nolik(int x, int y);
void krestik (int x, int y);
void pole (int x, int y, int m);


int main()
{
    txCreateWindow (800, 600);
    txSetFillColour (TX_NULL);
    int x=50,y=50, m=1;
    pole (x, y, m);
    int cell[9] = {0,0,0,0,0,0,0,0};
    int turn=0;
    RECT area1 = { x, y, x+50, y+50 };
    RECT area2 = { x+50, y, x+100, y+50 };
    RECT area3 = { x+100, y, x+150, y+50 };
    RECT area4 = { x, y+50, x+50, y+100 };
    RECT area5 = { x+50, y+50, x+100, y+100};
    RECT area6 = { x+100, y+50, x+150, y+100 };
    RECT area7 = { x, y+100, x+50, y+150 };
    RECT area8 = { x+50, y+100, x+100, y+150 };
    RECT area9 = { x+100, y+100, x+150, y+150 };
    while (txMouseButtons() !=3)
    {
        if ((txMouseButtons() &1) && (In(txMousePos(), area1)) && cell [0] == 0 && turn !=1)
        {
            cell[0] = 1;
            krestik (x, y);
            turn = 1;
        };
        if ((txMouseButtons() &2) && (In(txMousePos(), area1)) && cell [0] == 0 && turn !=2)
        {
            cell[0] = 2;
            nolik(x, y);
            turn = 2;
        };
        if ((txMouseButtons() &2) && (In(txMousePos(), area2)) && cell [1] == 0 && turn !=2)
        {
            cell[1] = 2;
            nolik(x+50, y);
            turn = 2;
        };
        if ((txMouseButtons() &1) && (In(txMousePos(), area2)) && cell [1] == 0 && turn !=1)
        {
            cell[1] = 1;
            krestik (x+50, y);
            turn = 1;
        };
        if ((txMouseButtons() &1) && (In(txMousePos(), area3)) && cell [2] == 0 && turn !=1)
        {
            cell[2] = 1;
            krestik (x+100, y);
            turn = 1;
        };
        if ((txMouseButtons() &2) && (In(txMousePos(), area3)) && cell [2] == 0 && turn !=2)
        {
            cell[2] = 2;
            nolik(x+100, y);
            turn = 2;
        };
        if ((txMouseButtons() &2) && (In(txMousePos(), area4)) && cell [3] == 0 && turn !=2)
        {
            cell[3] = 2;
            nolik(x, y+50);
            turn = 2;
        };
        if ((txMouseButtons() &1) && (In(txMousePos(), area4)) && cell [3] == 0 && turn !=1)
        {
            cell[3] = 1;
            krestik (x, y+50);
            turn = 1;
        };
        if ((txMouseButtons() &1) && (In(txMousePos(), area5)) && cell [4] == 0 && turn !=1)
        {
            cell[4] = 1;
            krestik (x+50, y+50);
            turn = 1;
        };
        if ((txMouseButtons() &2) && (In(txMousePos(), area5)) && cell [4] == 0 && turn !=2)
        {
            cell[4] = 2;
            nolik(x+50, y+50);
            turn = 2;
        };
        if ((txMouseButtons() &2) && (In(txMousePos(), area6)) && cell [5] == 0 && turn !=2)
        {
            cell[5] = 2;
            nolik(x+100, y+50);
            turn = 2;
        };
        if ((txMouseButtons() &1) && (In(txMousePos(), area6)) && cell [5] == 0 && turn !=1)
        {
            cell[5] = 1;
            krestik (x+100, y+50);
            turn = 1;
        };
        if ((txMouseButtons() &1) && (In(txMousePos(), area7)) && cell [6] == 0 && turn !=1)
        {
            cell[6] = 1;
            krestik (x, y+100);
            turn = 1;
        };
        if ((txMouseButtons() &2) && (In(txMousePos(), area7)) && cell [6] == 0 && turn !=2)
        {
            cell[6] = 2;
            nolik(x, y+100);
            turn = 2;
        };
        if ((txMouseButtons() &2) && (In(txMousePos(), area8)) && cell [7] == 0 && turn !=2)
        {
            cell[7] = 2;
            nolik(x+50, y+100);
            turn = 1;
        };
        if ((txMouseButtons() &1) && (In(txMousePos(), area8)) && cell [7] == 0 && turn !=1)
        {
            cell[7] = 1;
            krestik (x+50, y+100);
            turn = 1;
        };
        if ((txMouseButtons() &2) && (In(txMousePos(), area9)) && cell [8] == 0 && turn !=2)
        {
            cell[8] = 2;
            nolik(x+100, y+100);
            turn = 2;
        };
        if ((txMouseButtons() &1) && (In(txMousePos(), area9)) && cell [8] == 0 && turn !=1)
        {
            cell[8] = 1;
            krestik (x+100, y+100);
            turn = 1;
        };
        if ((cell[0] == 1 && cell[1] == 1 && cell[2] == 1) ||
            (cell[0] == 2 && cell[1] == 2 && cell[2] == 2) ||
            (cell[3] == 1 && cell[4] == 1 && cell[5] == 1) ||
            (cell[3] == 2 && cell[4] == 2 && cell[5] == 2) ||
            (cell[6] == 1 && cell[7] == 1 && cell[8] == 1) ||
            (cell[6] == 2 && cell[7] == 2 && cell[8] == 2) ||
            (cell[0] == 1 && cell[3] == 1 && cell[6] == 1) ||
            (cell[0] == 2 && cell[3] == 2 && cell[6] == 2) ||
            (cell[1] == 1 && cell[4] == 1 && cell[7] == 1) ||
            (cell[1] == 2 && cell[4] == 2 && cell[7] == 2) ||
            (cell[2] == 1 && cell[5] == 1 && cell[8] == 1) ||
            (cell[2] == 2 && cell[5] == 2 && cell[8] == 2) ||
            (cell[0] == 1 && cell[4] == 1 && cell[8] == 1) ||
            (cell[0] == 2 && cell[4] == 2 && cell[8] == 2) ||
            (cell[2] == 1 && cell[4] == 1 && cell[6] == 1) ||
            (cell[2] == 2 && cell[4] == 2 && cell[6] == 2))
            {
                cout<<"Победил игрок "<<turn<<". Тот, кто ходил первый.";
                break;
            }
    }

    return 0;
}

void pole (int x, int y, int m)
{
    txRectangle (x*m, y*m, x*m+50*m, y*m+50*m);
    txRectangle (x*m+50*m, y*m+50*m, x*m+100*m, y*m+100*m);
    txRectangle (x*m+100*m, y*m+100*m, x*m+150*m, y*m+150*m);
    txRectangle (x*m+50*m, y*m, x*m+100*m, y*m+50*m);
    txRectangle (x*m+100*m, y*m+50*m, x*m+150*m, y*m+100*m);
    txRectangle (x*m+100*m, y*m, x*m+150*m, y*m+50*m);
    txRectangle (x*m, y*m+50*m, x*m+50*m, y*m+100*m);
    txRectangle (x*m, y*m+100*m, x*m+50*m, y*m+150*m);
    txRectangle (x*m+50*m, y*m+100*m, x*m+100*m, y*m+150*m);
}

void krestik (int x, int y)
{
    txLine (x, y, x+50, y+50);
    txLine (x+50, y, x, y+50);
}

void nolik (int x, int y)
{
    txCircle (x+25, y+25, 25);
}







