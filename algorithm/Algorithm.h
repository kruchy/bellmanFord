
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

    virtual string result() =0;

    int f = 0;
    Algorithm(vector<Vertex *> vertices, vector<Edge *> edges);

    Algorithm(vector<vector<int>> matrix);

    Algorithm() {}

    virtual  ~Algorithm() {

    };
};


#endif //BELLMANFORD_ALGORITHM_H
