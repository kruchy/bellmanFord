
#ifndef INPUT_H
#define INPUT_H

#include "Edge.h"
#include "Vertex.h"

#include <vector>

class Input {
public:
    std::vector<Vertex *> vertices;
    std::vector<Edge *> edges;

    virtual void getInput();

    virtual ~Input();


};

#endif /* INPUT_H */

