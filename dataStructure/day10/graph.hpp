#ifndef __GRAPH_H__
#define __GRAPH_H__

#include <iostream>
#include "linkedlist.hpp"

using namespace std;

class Graph {
private:
    LinkedList<int>* _adjacency_list;
    int _size;

    void dfs(bool*, int) const;

public:
    Graph();
    Graph(int);

    int degree(int) const;
    void addNode();
    void removeNode(int);
    void addEdge(int, int);
    void printGraph();
    void removeEdge(int, int);
    bool isEdgeExists(int, int) const;
    LinkedList<int> findeNeighbours(int) const;
    LinkedList<int> findeConnection(int) const;
};

Graph::Graph() {
    _size = 0;
}

void Graph::printGraph() {
    for (int i = 0; i < _size; i++) {
        cout << i << "-->";
        for (int j = 0; j < _adjacency_list[i].size(); j++) {
            cout << _adjacency_list[i][j] << " ";
        }
        cout << endl;
    }
}

Graph::Graph(int number_of_vertices) {
    _size = number_of_vertices;
    _adjacency_list = new LinkedList<int>[number_of_vertices];
}

int Graph::degree(int v) const {
    return _adjacency_list[v].size();
}

void Graph::addNode() {
    LinkedList<int>* temporary_list = new LinkedList<int>[_size + 1];
    for (int i = 0; i < _size; i++) {
        temporary_list[i] = _adjacency_list[i];
    }
    _adjacency_list = temporary_list;
    _size++;
}

void Graph::removeNode(int u) {
    if (0 <= u && u < _size) {
        LinkedList<int>* temporary_list = new LinkedList<int>[_size - 1];
        for (int i = 0; i < _size; i++) {
            if (i != u) {
                for (int j = 0; j < _adjacency_list[i].size(); j++) {
                    if (_adjacency_list[i][j] == u) {
                        _adjacency_list[i].removeByIndex(j);
                        break;
                    }
                }
            }
            if (i < u) {
                temporary_list[i] = _adjacency_list[i];
            }
            if (i > u) {
                temporary_list[i - 1] = _adjacency_list[i];
            }
        }
        _adjacency_list = temporary_list;
        _size--;
        for (int i = 0; i < _size; i++) {
            for (int j = 0; j < _adjacency_list[i].size(); j++) {
                if (_adjacency_list[i][j] > u) {
                    _adjacency_list[i].decrease(j);
                }
            }
        }
    }
}

void Graph::addEdge(int u, int v) {
    _adjacency_list[u].addAtIndex(_adjacency_list[u].size(), v);
    _adjacency_list[v].addAtIndex(_adjacency_list[v].size(), u);
}

void Graph::removeEdge(int u, int v) {
    for (int i = 0; i < _adjacency_list[u].size(); i++) {
        if (_adjacency_list[u][i] == v) {
            _adjacency_list[u].removeByIndex(i);
            break;
        }
    }
    for (int i = 0; i < _adjacency_list[v].size(); i++) {
        if (_adjacency_list[v][i] == u) {
            _adjacency_list[v].removeByIndex(i);
            break;
        }
    }
}

bool Graph::isEdgeExists(int u, int v) const {
    for (int i = 0; i < _adjacency_list[u].size(); i++) {
        if (_adjacency_list[u][i] == v) {
            return true;
        }
    }
    return false;
}

LinkedList<int> Graph::findeNeighbours(int u) const {
    return _adjacency_list[u];
}

LinkedList<int> Graph::findeConnection(int u) const {
    bool* is_visited = new bool[_size];
    for (int i = 0; i < _size; i++) {
        is_visited[i] = false;
    }
    dfs(is_visited, u);
    LinkedList<int> answer;
    for (int i = 0; i < _size; i++) {
        if (is_visited[i]) {
            answer.addAtIndex(answer.size(), i);
        }
    }
    return answer;
}

void Graph::dfs(bool* is_visited, int u) const {
    is_visited[u] = true;
    for (int i = 0; i < _adjacency_list[u].size(); i++) {
        if (!is_visited[_adjacency_list[u][i]]) {
            dfs(is_visited, _adjacency_list[u][i]);
        }
    }
}

#endif // __GRAPH_H__