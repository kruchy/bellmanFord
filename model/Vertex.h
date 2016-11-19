
#ifndef VERTEX_H
#define VERTEX_H

#include <utility>
#include <limits.h>

#include <stdio.h>

class Vertex {
public:
    Vertex();

    ~Vertex();

    int number;
    Vertex *predecessor = NULL;
    int distance;

    Vertex(int number);


};

#endif /* VERTEX_H */

