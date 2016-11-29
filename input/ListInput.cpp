#include "ListInput.h"

ListInput::~ListInput() {
}

void ListInput::getInput() {
    Vertex *v1 = new Vertex(1);
    v1->distance = 0;
    Vertex *v2 = new Vertex(2);
    Vertex *v3 = new Vertex(3);
    Vertex *v4 = new Vertex(4);
    Vertex *v5 = new Vertex(5);
    Vertex *v6 = new Vertex(6);
    Vertex *v7 = new Vertex(7);
    this->VertStart = v1;
    this->VertEnd = v7;

    vertices.push_back(v1);
    vertices.push_back(v2);
    vertices.push_back(v3);
    vertices.push_back(v4);
    vertices.push_back(v5);
    vertices.push_back(v6);
    vertices.push_back(v7);
    edges.push_back(new Edge(v1, v2, 9));
    edges.push_back(new Edge(v1, v5, 9));
    edges.push_back(new Edge(v2, v3, 7));
    edges.push_back(new Edge(v2, v4, 3));
    edges.push_back(new Edge(v3, v4, 4));
    edges.push_back(new Edge(v3, v7, 6));
    edges.push_back(new Edge(v4, v7, 9));
    edges.push_back(new Edge(v4, v6, 2));
    edges.push_back(new Edge(v5, v4, 3));
    edges.push_back(new Edge(v5, v6, 6));
    edges.push_back(new Edge(v6, v7, 8));
//    edges.push_back(new Edge(v0, v1, 1));
//    edges.push_back(new Edge(v0, v2, 4));
//    edges.push_back(new Edge(v1, v2, 3));
//    edges.push_back(new Edge(v1, v3, 2));
//    edges.push_back(new Edge(v1, v4, 2));
//    edges.push_back(new Edge(v3, v2, 5));
//    edges.push_back(new Edge(v3, v1, 1));
//    edges.push_back(new Edge(v4, v3, 3));
}

