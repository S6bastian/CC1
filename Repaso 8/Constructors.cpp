#include <iostream>
using namespace std;

class Integer{
public:
    int val;
    Integer(int v=0){
        val=v;
        cout<<"Integer default constructor "<<v<<endl;
    }
};
/*
class IntegerWrapper{
public:
    Integer val;
    IntegerWrapper(){
        cout<<"IntegerWrapper default constructor"<<endl;
    }
};
*/
int *getPtrToFive() {
    int *x = new int; *x = 5; 
    cout<<x<<endl;
    return x;
    }
int main(){
    int *p; 
    for (int i = 0; i < 3; ++i) {
        p = getPtrToFive(); 
        cout << *p << endl;     
    } 
    int numItems;
    cout << "how many items?";
    cin >> numItems;
    int arr[numItems]; // not allowed
}
/*
int main(){
    int *p;
    if (true){
        int x=5556;
        p=&x;
    }
    cout<< *p <<endl;

    return 0;
}
*/