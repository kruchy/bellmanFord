
#ifndef INPUT_H
#define INPUT_H

#include "../model/Edge.h"
#include "../model/Vertex.h"

using namespace std;
#include <vector>

class Input {
public:
    std::vector<Vertex *> vertices;
    std::vector<Edge *> edges;
    int start;
    int end;
    Vertex *VertStart;
    Vertex *VertEnd;

    vector<vector<int> > matrix;
    virtual void getInput();

    virtual ~Input();


};

#endif /* INPUT_H */

