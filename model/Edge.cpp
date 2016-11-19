#include "Edge.h"

Edge::Edge(Vertex *a, Vertex *b, int weight) {
    start = a;
    end = b;
    this->weight = weight;
}

Edge::~Edge() {};

