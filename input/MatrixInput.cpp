#include <iostream>
#include "MatrixInput.h"

MatrixInput::~MatrixInput() {
}


void MatrixInput::getInput() {

    {
        int size = 7;
        this->matrix = vector<vector<int>>({//     1  2  3  4  5  6  7
                                                   vector<int>({0, 9, 0, 0, 9, 0, 0}),//1
                                                   vector<int>({0, 0, 7, 3, 0, 0, 0}),//2
                                                   vector<int>({0, 0, 0, 4, 0, 0, 6}),//3
                                                   vector<int>({0, 0, 0, 0, 0, 2, 9}),//4
                                                   vector<int>({0, 0, 0, 3, 0, 6, 0}),//5
                                                   vector<int>({0, 0, 0, 0, 0, 0, 8}),//6
                                                   vector<int>({0, 0, 0, 0, 0, 0, 0}) //7
                                           });
        this->start = 0;
        this->end = 6;
        for (int i = 0; i < size; i++) {
            vertices.push_back(new Vertex(i + 1));
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (matrix[i][j] != INT_MAX) {

                    edges.push_back(new Edge(vertices[j], vertices[i], matrix[i][j]));
                }
            }
        }
    };


};

