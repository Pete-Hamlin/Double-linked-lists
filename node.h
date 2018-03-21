//Include guard
#ifndef _NODE_H_INCLUDED__
#define __NODE_H_INCLUDED__

using namespace std;

class Node {
public:
    Node();
    void cover();
    void name();
    Node *_prev;
    Node *_next;

    int _ident;
};

#endif
