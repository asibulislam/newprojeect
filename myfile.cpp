#include <iostream>
using namespace std;

void myfunc(string arr){
    cout << "Hello " << arr;
}

int main(){
    string name = "Alif";
    myfunc(name);
    return 0;
}