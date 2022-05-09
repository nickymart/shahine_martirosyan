#include <iostream>
#include "graph.hpp"

using namespace std;

int main() {

    Graph *graph = new Graph(6);
    graph->printMatrix();
    graph->addEdge(3, 0);
    graph->addEdge(3, 1);
    graph->addEdge(3, 3);

    graph->removeEdge(3, 1);
    graph->removeVertex(5);
    graph->printMatrix();
    graph->nodeNeighbours(3);
    return 0;
}