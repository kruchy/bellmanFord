#ifndef LISTINPUT_H
#define LISTINPUT_H

#include "Input.h"

#include "../model/Vertex.h"
#include "../model/Edge.h"


class ListInput : public Input {
public:
    ~ListInput();

    virtual void getInput();
};

#endif /* LISTINPUT_H */

