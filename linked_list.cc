//Standard Includes
#include <iostream>
using namespace std;

// Functions
void Linked_list::insert() {
    Node *tmp;
    tmp = new Node();
    tmp = _head;
    int i = 0;
    if (tmp != NULL) {
        while (tmp->_next != NULL) {
            tmp = tmp->_next;
            i++;
        }
    }
}
