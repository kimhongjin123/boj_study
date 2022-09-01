#include <iostream>
#include <queue>
using namespace std;


int a, b, c; 
int map[1001][1001];
bool visited[1001];
queue<int> q;

void reset() {
    for (int i = 1; i <= a; i++) {
        visited[i] = 0;
    }
}


void BFS(int v) {
    q.push(v);
    visited[v] = true;
    cout << v << " ";

    while (!q.empty()) {
        v = q.front();
        q.pop();

        for (int i = 1; i <= a; i++) {
            if (map[v][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = true;
                cout << i << " ";
            }
        }
    }
}

int main() {
    cin >> a >> b >> c;

    for (int i = 0; i < b; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    reset();
    DFS(c);

    cout << '\n';

    reset();
    BFS(c);

    return 0;
}
