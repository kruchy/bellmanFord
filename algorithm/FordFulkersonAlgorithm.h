//
// Created by Krzysiek on 2016-11-19.
//

#ifndef BELLMANFORD_FORDFULKERSONALGORITHM_H
#define BELLMANFORD_FORDFULKERSONALGORITHM_H


#include "Algorithm.h"
#include <map>
class FordFulkersonAlgorithm : public Algorithm {
public:


    FordFulkersonAlgorithm(vector<vector<int>> matrix, int start, int end);

    FordFulkersonAlgorithm(vector<Vertex *> vertices, vector<Edge *> edges, Vertex *start, Vertex *end);

    virtual string result() override;

    bool hasAugmentingPath(vector<vector<int>> matrix, int start, int end, int previous[]);


    vector<vector<int>> copyMatrix(vector<vector<int>> matrix);

    bool hasAugmentingPath(vector<Edge *> edges, Vertex *start, Vertex *end, map<Vertex *, Vertex *> previous);

    bool hasAugmentingPath(vector<Edge *> edges, Vertex *start, Vertex *end, map<Vertex *, Vertex *> *previous);
};


#endif //BELLMANFORD_FORDFULKERSONALGORITHM_H
