
#ifndef BELLMANFORD_ALGORITHM_H
#define BELLMANFORD_ALGORITHM_H

#include "../model/Vertex.h"
#include "../model/Edge.h"
#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <utility>
#include <limits.h>
#include <set>
#include<cstdlib>

using namespace std;

class Algorithm {
public :
    vector<Vertex *> path;

    void getPath() {
        for (int i = path.size() - 1; i >= 0; i--) {
            cout << path[i]->number << " ";
        }
        cout << endl;
    }

    Algorithm(vector<Vertex *> vertices, vector<Edge *> edges);

    Algorithm(vector<vector<int>> matrix);

    Algorithm() {}

    virtual  ~Algorithm() {

    };
};


#endif //BELLMANFORD_ALGORITHM_H
