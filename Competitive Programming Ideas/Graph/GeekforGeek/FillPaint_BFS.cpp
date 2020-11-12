// Source: https://www.geeksforgeeks.org/flood-fill-algorithm-implement-fill-paint/

#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

const int M = 8;
const int N = 8;
int dr[4] = {0, 0, 1, -1};
int dc[] = {-1, 1, 0, 0};
bool vis[M][N];

typedef pair<int, int> ii;

bool checkValidCoord(int x, int y)
{
    return x >= 0 && y >= 0 && x < M && y < N;
}

void BFS(int a[][N], int x, int y, int prevC, int newC)
{
    queue<ii> q;
    memset(vis, false, sizeof(vis));
    q.push({x, y});

    while (!q.empty()) {
        ii f = q.front();
        vis[f.first][f.second] = true;
        a[f.first][f.second] = newC;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = f.first + dr[i], ny = f.second + dc[i];
            if (checkValidCoord(nx, ny) && a[nx][ny] == prevC && !vis[nx][ny]) {
                q.push({nx, ny});
            }
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

    BFS(a, x, y, a[x][y], newC);

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}
