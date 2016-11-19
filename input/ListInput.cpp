#include "ListInput.h"

ListInput::~ListInput() {
}

void ListInput::getInput() {
    Vertex *v1 = new Vertex(1);
    v1->distance = 0;
    Vertex *v2 = new Vertex(2);
    Vertex *v3 = new Vertex(3);
    Vertex *v4 = new Vertex(4);
    vertices.push_back(v1);
    vertices.push_back(v2);
    vertices.push_back(v3);
    vertices.push_back(v4);
    edges.push_back(new Edge(v1, v2, 1));
    edges.push_back(new Edge(v1, v3, 5));
    edges.push_back(new Edge(v3, v4, 5));
    edges.push_back(new Edge(v2, v4, 2));
}

