#include "graph.hpp"

using namespace std;

int main() {
    Graph graph(4);
    graph.addNode();
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);    
    graph.printGraph();
    cout << graph.isEdgeExists(3, 0);
    cout << endl;
    LinkedList<int> _list = graph.findeConnection(0);
    for (int i = 0; i < _list.size(); i++) {
        cout << _list[i] << " ";
    }
    cout << endl;
    graph.removeNode(2);
    graph.printGraph();
    return 0;
}