#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <utility>
#include <set>
#include<cstdlib>

using namespace std;

#include "model/Edge.h"
#include "input/Input.h"
#include "input/MatrixInput.h"
#include "input/ListInput.h"
#include "algorithm/Algorithm.h"
#include "algorithm/BellmanFordAlgorithm.h"

void edmondsKarp(vector<Vertex *> vertices, vector<Edge *> edges) {

}


//void bellmanFordAlgorithm(vector<vector<int> > matrix) {
//    int size = matrix.size();
//    int distances[size];
//    vector<int> path;
//
//    for (int i = 0; i < size; i++) distances[i] = INT_MAX;
//
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size; j++) {
//            for (int k = 0; k < size; k++) {
//
//                if (matrix[j][k] != INT_MAX && distances[j] != INT_MAX && distances[j] + matrix[j][k] < distances[k])
//                    distances[k] = distances[j] + matrix[j][k];
//            }
//        }
//    }


//}

//
//void bellmanFordAlgorithm(std::vector<Vertex *> vertices, std::vector<Edge *> edges) {
//    int verticesSize = vertices.size();
//    int edgesSize = edges.size();
//    for (int i = 0; i < verticesSize; i++) {
//        for (int j = 0; j < edgesSize; j++) {
//            Edge *current = edges[j];
//            if (current->start->distance + current->weight < current->end->distance) {
//                current->end->distance = current->start->distance + current->weight;
//                current->end->predecessor = current->start;
//            }
//        }
//    }
//
//    for (int i = 0; i < edgesSize; i++) {
//        Edge *current = edges[i];
//        if (current->start->distance + current->weight < current->end->distance) {
//            cout << "Infinite" << endl;
//            return;
//        }
//
//    }
//    cout << "has path:" << endl;
//    Vertex *current = vertices[verticesSize - 1];
//    vector<int> temp;
//    while (current != NULL) {
//        temp.push_back(current->number);
//        current = current->predecessor;
//    }
//    for (int i = temp.size() - 1; i >= 0; i--) {
//        cout << temp[i] << " ";
//    }
//
//    cout << endl;
//
//
//};


int main(int argc, char **argv) {


    std::vector<Vertex *> vertices;
    std::vector<Edge *> edges;


    Input *input;
    cout << "Enter l to list, m to matrix" << endl;
    string a;
    cin >> a;
    if (a == "l") {
        input = new ListInput();
    } else {
        input = new MatrixInput();

    }
    input->getInput();
    edges = input->edges;
    vertices = input->vertices;
    for (int i = 0; i < vertices.size(); i++) {
        if (vertices[i]->number == 1) {
            vertices[i]->distance = 0;
        }
    }

    cout << "Enter b to do bellman, or e for edmonds-karp";
    Algorithm *algorithm;
    cin >> a;
    if (a == "b") {
        algorithm = new BellmanFordAlgorithm(vertices, edges);
//        bellmanFordAlgorithm(vertices, edges);
        algorithm->getPath();
    }
    if (a == "b") {
//        edmondsKarp(vertices, edges);
    }


//   	cout << "START END DISTANCE WEIGHT" << endl;
//	for(int i = 0 ; i < edges.size();i++)
//	{
//		Edge * current = edges[i];
//		cout << current->start->number -1 << " " << " ";
//
//		cout << current->end->number -1 << " " << " ";
//
//		cout << current->weight << endl;
//	}

//		cout <<"VERTICES" << endl;
//	for(int i = 0 ; i < vertices.size();i++)
//	{
//		cout << " NUMB "  << vertices[i]->number << " " ;
//		cout << "DISTANCE " << vertices[i]->distance << " ";
//		if(vertices[i]->predecessor != NULL)cout << "PRE " << vertices[i]->predecessor->number ;
//		cout << endl;
//
//	}
    return 0;


}
