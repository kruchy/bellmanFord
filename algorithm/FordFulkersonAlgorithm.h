//
// Created by Krzysiek on 2016-11-19.
//

#ifndef BELLMANFORD_FORDFULKERSONALGORITHM_H
#define BELLMANFORD_FORDFULKERSONALGORITHM_H


#include "Algorithm.h"

class FordFulkersonAlgorithm : public Algorithm {
public:
    FordFulkersonAlgorithm(vector<Vertex *> vertices, vector<Edge *> edges);

    FordFulkersonAlgorithm(vector<vector<int>> matrix);

};


#endif //BELLMANFORD_FORDFULKERSONALGORITHM_H
