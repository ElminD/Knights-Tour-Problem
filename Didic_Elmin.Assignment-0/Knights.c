#include <stdio.h>

#define SIZE 5

int safeMove(int x, int y)
{
    if(x < 0 || y < 0 || x >= SIZE || y >= SIZE)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void tour(int x, int y, int squaresChecked, int board[SIZE][SIZE])
{
    board[x][y] = squaresChecked;
    int order = 0;
    int i,j,k;

    int xMoves[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int yMoves[] = {1, 2, 2, 1, -1, -2, -2, -1};

    if(squaresChecked >= SIZE * SIZE)
    {
        while(order < SIZE*SIZE) {
            for (i = 0; i < SIZE; i++) {
                for (j = 0; j < SIZE; j++) {
                    if (board[i][j] == order) {
                        printf("%d,", (i * 5) + j + 1);
                    }
                }
            }
            order += 1;
        }


            for (i = 0; i < SIZE; i++) {
                for (j = 0; j < SIZE; j++) {
                    if (board[i][j] == order) {
                        printf("%d\n", (i * 5) + j + 1);
                    }
                }
            }


        board[x][y] = 0;
        return;
    }

    for(k = 0; k < 8; k++)
    {
        int nextX = x + xMoves[k];
        int nextY = y + yMoves[k];

        if(safeMove(nextX, nextY) == 0 && board[nextX][nextY] == 0)
        {
            tour(nextX, nextY, squaresChecked + 1, board);
        }
    }

    board[x][y] = 0;
}




void runTour(int board[SIZE][SIZE])
{
    int i,j;

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {

            tour(i,j,1,board);
        }
    }
}

int main() {

    int board[SIZE][SIZE];

    int i,j;

    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            board[i][j] = 0;
        }
    }
    runTour(board);



    return 0;
}
