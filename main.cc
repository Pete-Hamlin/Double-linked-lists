//Standard Includes
#include <iostream>
#include <string>
using namespace std;

//Private Includes
#include "node.h"
#include "linked_list.h"

// Functions


int main() {
    int size = 6;
    Linked_list list;
    for (int i=0; i<=size; i++) {
        list.insert(i);
    }
    list.display();
    return 0;
}
