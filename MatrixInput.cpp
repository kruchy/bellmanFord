#include "MatrixInput.h"

MatrixInput::~MatrixInput() {
}


void MatrixInput::getInput() {

    {
        int size = 4;
        int matrix[][size] = {
                {0, 0, 0, 0},
                {1, 0, 0, 0},
                {5, 0, 0, 0},
                {0, 2, 5, 0}
        };

        for (int i = 0; i < size; i++) {
            vertices.push_back(new Vertex(i + 1));
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (matrix[i][j] > 0) {

                    edges.push_back(new Edge(vertices[j], vertices[i], matrix[i][j]));
                }
            }
        }
    };
};

