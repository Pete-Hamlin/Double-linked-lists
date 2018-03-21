//Standard Includes
#include <iostream>
using namespace std;

//Private Includes
#include "node.h"
#include "linked_list.h"

Node::Node() {
    _prev = NULL;
    _next = NULL;
}

void Node::cover() {
    _prev->_next = _next;
    _next->_prev = _prev;
}

void Node::name() {
    cout << "Node: " << _ident << endl;
}
