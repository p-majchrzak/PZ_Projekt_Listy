#include <iostream>
#include "List.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    List list;

    list.addLast(10);
    list.addLast(20);
    list.addLast(30);
    list.addLast(40);

    cout << "Lista:" << endl;
    list.showAll();

    return 0;
}
