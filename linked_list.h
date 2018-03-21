//Include guard
#ifndef __LIST_H_INCLUDED__
#define __LIST_H_INCLUDED__

using namespace std;

class Linked_list {
public:
    Linked_list();
    void insert(int ident);
    void display();
    Node *_head;
};

#endif
