// Source: https://www.geeksforgeeks.org/flood-fill-algorithm-implement-fill-paint/

#include <iostream>

using namespace std;

const int M = 8;
const int N = 8;

int dr[4] = {0, 0, 1, -1};
int dc[4] = {-1, 1, 0, 0};

void floadFill(int a[][N], int x, int y, int prevC, int newC)
{
    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dr[i], ny = y + dc[i];
        if (nx >= 0 && ny >= 0 && nx < N && ny < M && prevC == a[nx][ny])
        {
            a[nx][ny] = newC;
            floadFill(a, nx, ny, prevC, newC);
        }
    }
}

int main()
{
    int a[M][N] = {
        {1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 0},
        {1, 0, 0, 1, 1, 0, 1, 1},
        {1, 2, 2, 2, 2, 0, 1, 0},
        {1, 1, 1, 2, 2, 0, 1, 0},
        {1, 1, 1, 2, 2, 2, 2, 0},
        {1, 1, 1, 1, 1, 2, 1, 1},
        {1, 1, 1, 1, 1, 2, 2, 1},
    };
    int x = 4, y = 4, newC = 3;

    floadFill(a, x, y, a[x][y], newC);

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}