#ifndef __DIJKSTA_H__
#define __DIJKSTA_H__

#include <iostream>

using namespace std;

const int PINF = __INT32_MAX__;

int* dijkstra(int** matrix, int number_of_vertices, int start_vertex) {
    // initialization
    int* distance = new int[number_of_vertices];
    bool* is_visited = new bool[number_of_vertices];
    for (int i = 0; i < number_of_vertices; i++) {
        is_visited[i] = false;
        distance[i] = PINF;
    }
    distance[start_vertex] = 0;
    for (int i = 0; i < number_of_vertices; i++) {
        // find vertex whos distance is minimum
        int current_vertex = -1;
        for (int j = 0; j < number_of_vertices; j++) {
            if (!is_visited[j] && (current_vertex == -1 || distance[current_vertex] > distance[j])) {
                current_vertex = j;
            }
        }
        if (distance[current_vertex] == PINF) {
            break;
        }
        // update distance
        for (int j = 0; j < number_of_vertices; j++) {
            if (matrix[current_vertex][j] != PINF && 
                matrix[current_vertex][j] + distance[current_vertex] < distance[j]) {
                distance[j] = matrix[current_vertex][j] + distance[current_vertex];
            }
        }
        is_visited[current_vertex] = true;
    }
    return distance;
}

#endif // __DIJKSTA_H__
