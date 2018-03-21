//Standard Includes
#include <iostream>
#include <string>
using namespace std;

// Local includes
#include "node.h"
#include "linked_list.h"

// Functions
Linked_list::Linked_list() {
    _head = NULL;
}

void Linked_list::insert(int ident) {
    Node *tmp;
    tmp = _head;
    if (tmp != NULL) {
        while (tmp->_next != NULL) {
            tmp = tmp->_next;
        }
    }
    Node *tmp1;
    tmp1 = new Node();
    tmp1->_prev = tmp;
    tmp1->_ident = ident;
}

void Linked_list::display() {
    Node *tmp;
    tmp = _head;
    tmp->name();
    while (tmp->_next != NULL) {
        tmp = tmp->_next;
        tmp->name();
    }
}
