//
// Created by Krzysiek on 2016-11-19.
//

#ifndef BELLMANFORD_BELLMANFORDALGORITHM_H
#define BELLMANFORD_BELLMANFORDALGORITHM_H


#include "Algorithm.h"

class BellmanFordAlgorithm : public Algorithm {
public:

    BellmanFordAlgorithm(vector<Vertex *> vertices, vector<Edge *> edges);

    BellmanFordAlgorithm(vector<vector<int>> matrix);

};


#endif //BELLMANFORD_BELLMANFORDALGORITHM_H
