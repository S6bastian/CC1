#include <iostream>

using namespace std;

int main(){
    int n=1000,sum=0;

    while(n--){
        if(n%3==0 || n%5==0)
            sum+=n;
    }
    cout<<"Suma: "<<sum<<endl;
}