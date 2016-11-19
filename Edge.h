#include "Vertex.h"

#ifndef EDGE_H
#define EDGE_H

class Edge {
public:
    int weight;
    Vertex *start = NULL;
    Vertex *end = NULL;

    Edge(Vertex *a, Vertex *b, int weight);

    ~Edge();

};

#endif /* EDGE_H */

