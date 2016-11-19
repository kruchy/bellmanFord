//
// Created by Krzysiek on 2016-11-19.
//

#include "BellmanFordAlgorithm.h"


BellmanFordAlgorithm::BellmanFordAlgorithm(vector<vector<int>> matrix) {

    int size = matrix.size();
    int distances[size];

    for (int i = 0; i < size; i++) distances[i] = INT_MAX;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {

                if (matrix[j][k] != INT_MAX && distances[j] != INT_MAX && distances[j] + matrix[j][k] < distances[k])
                    distances[k] = distances[j] + matrix[j][k];
            }
        }
    }


}

BellmanFordAlgorithm::BellmanFordAlgorithm(vector<Vertex *> vertices, vector<Edge *> edges) {
    int verticesSize = vertices.size();
    int edgesSize = edges.size();
    for (int i = 0; i < verticesSize; i++) {
        for (int j = 0; j < edgesSize; j++) {
            Edge *current = edges[j];
            if (current->start->distance + current->weight < current->end->distance) {
                current->end->distance = current->start->distance + current->weight;
                current->end->predecessor = current->start;
            }
        }
    }

    for (int i = 0; i < edgesSize; i++) {
        Edge *current = edges[i];
        if (current->start->distance + current->weight < current->end->distance) {
            cout << "Infinite" << endl;
            return;
        }

    }
    cout << "has path:" << endl;
    Vertex *current = vertices[verticesSize - 1];
    while (current != NULL) {
        path.push_back(current);
        current = current->predecessor;
    }

}
