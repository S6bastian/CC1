#include <iostream>
#include "Point.h"
#include "DynamicPointArray.h"

using namespace std;

int main() {
    Point p1;
    Point p2{4, 5};
    Point p3{5, 6};

    DynamicPointArray pa(3);
    pa.setData(0, p1);
    pa.setData(1, p2);
    pa.setData(2, p3);
    
    pa.print();

    //pa.insert(2,p1);
    //pa.remove(0);
    pa.clear();

    pa.print();
    cout << endl;

    return 0;
}
