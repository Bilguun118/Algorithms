#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;


template<typename T>
class Graph {
    map<T, list<T> > l;

    public:
        void addEdge(int x, int y) {
            l[x].push_back(y);
            l[y].push_back(x);
        }

        void BFS(T srcNode) {
            // Use Queue Data Structure
            map<T, bool> visited;
            queue<T> qqueue;
            qqueue.push(srcNode);
            visited[srcNode] = true;
            
            // Traverse Queue
            while(!qqueue.empty()) {
                // Get That Node From Queue
                T node = qqueue.front();
                qqueue.pop();

                // Find Neighbours of Current Node From Queue

                for (int nbr:l[node]) {
                    if (!visited[nbr]) {
                        qqueue.push(nbr);
                        visited[nbr] = true;

                    }
                }
            }
        }
};

int main() {
    Graph<int> nodes;
    nodes.addEdge(0, 1);
    nodes.addEdge(1, 2);
    nodes.addEdge(2, 3);
    nodes.addEdge(3, 4);
    nodes.BFS(0);
    cout << "END" << endl;
    return 0;
}