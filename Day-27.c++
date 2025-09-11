#include <iostream>
using namespace std;

#define MAX 100

int adj[MAX][MAX];  
int visited[MAX];
int dist[MAX];
int queueArr[MAX];
int front = 0, rear = 0;

void enqueue(int x) { queueArr[rear++] = x; }
int dequeue() { return queueArr[front++]; }
bool isEmpty() { return front == rear; }

int shortestPath(int V, int start, int end) {
    for(int i=0;i<V;i++) { visited[i]=0; dist[i]=-1; }

    visited[start] = 1;
    dist[start] = 0;
    enqueue(start);

    while(!isEmpty()) {
        int node = dequeue();
        for(int i=0;i<V;i++) {
            if(adj[node][i] && !visited[i]) {
                visited[i] = 1;
                dist[i] = dist[node] + 1;
                enqueue(i);
                if(i == end) return dist[i]; 
            }
        }
    }
    return -1; 
}

int main() {
    int V = 5;

    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;
    adj[2][3] = adj[3][2] = 1;
    adj[3][4] = adj[4][3] = 1;

    int start = 0, end = 4;
    cout << "Shortest path length: " << shortestPath(V, start, end);
}
