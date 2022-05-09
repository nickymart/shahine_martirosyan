#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    vector<vector<int>> _adjMatrix;

public:
    Graph(int);
    void addVertex();
    void printMatrix(); 
    void addEdge(int, int);
    void removeVertex(int);
    void removeEdge(int, int);
    void nodeNeighbours(int);
    void nodeConnections(int);
    bool isEdgeExist(int, int);

};

bool Graph::isEdgeExist(int u, int v) {
    return _adjMatrix[u][v] == 1 || _adjMatrix[v][u] == 1;
}

void Graph::nodeConnections(int vertex) {
    for (int i = 0; i < _adjMatrix.size(); i++) {
        if (_adjMatrix[vertex][i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void Graph::nodeNeighbours(int vertex) {
    for (int i = 0; i < _adjMatrix.size(); i++) {
        if (_adjMatrix[vertex][i] == 1) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void Graph::removeVertex(int vertex) {
    _adjMatrix.erase(_adjMatrix.begin() + vertex);
    for (int i = 0; i < _adjMatrix.size(); i++) {
        _adjMatrix[i].erase(_adjMatrix[i].begin() + vertex);
    }
}

void Graph::printMatrix() {
    cout << "  ";
    for (int i = 0; i < _adjMatrix.size(); i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < _adjMatrix.size(); i++) {
        cout << i << " ";
        for (int j = 0; j < _adjMatrix.size(); j++) {
            cout << _adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

Graph::Graph(int size) {
    for (int i = 0; i < size; i++) {
        _adjMatrix.push_back(vector<int>());
        for (int j = 0; j < size; j++) {
            _adjMatrix[_adjMatrix.size() - 1].push_back(0);
        }
    }
}

void Graph::addVertex() {
    _adjMatrix.push_back(vector<int>());
    for (int i = 0; i < _adjMatrix.size(); i++) {
        _adjMatrix[i].push_back(0);
    }
}

void Graph::addEdge(int u, int v) {
    _adjMatrix[u][v] = 1;
}

void Graph::removeEdge(int u, int v) {
    _adjMatrix[u][v] = 0;
}

#endif