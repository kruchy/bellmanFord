#include "Input.h"
#include "Edge.h"
#include "Vertex.h"

#ifndef MATRIXINPUT_H
#define MATRIXINPUT_H

class MatrixInput : public Input {
public:
    ~MatrixInput();

    virtual void getInput();

};

#endif /* MATRIXINPUT_H */

