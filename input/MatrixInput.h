#include "Input.h"
#include "../model/Edge.h"
#include "../model/Vertex.h"

#ifndef MATRIXINPUT_H
#define MATRIXINPUT_H

class MatrixInput : public Input {
public:
    ~MatrixInput();

    virtual void getInput();

};

#endif /* MATRIXINPUT_H */

