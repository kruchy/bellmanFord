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
#include "algorithm/FordFulkersonAlgorithm.h"

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

    cout << "Enter b to do BellmanFordAlgorithm, or f for FordFulkersonAlgorithm";
    Algorithm *algorithm;
    string b;
    cin >> b;
//    if (a == "b") {
//        algorithm = new BellmanFordAlgorithm(vertices, edges);
//        cout << algorithm->result() << endl;
//    }
    if (a == "l" && b == "f") {
        vector<Edge *> e = input->edges;
        algorithm = new FordFulkersonAlgorithm(input->vertices, e, input->VertStart, input->VertEnd);
        string res = algorithm->result();
        cout << "Najwiekszy przeplyw w grafie :  " << res << endl;
    }
    if (a == "m" && b == "f") {
        algorithm = new FordFulkersonAlgorithm(input->matrix, input->start, input->end);
        string res = algorithm->result();
        cout << "Najwiekszy przeplyw w grafie :  " << res << endl;
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
