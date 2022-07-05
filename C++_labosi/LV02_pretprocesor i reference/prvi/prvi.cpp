#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void zamijeniP(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "a: " << *a << " " << "b: " << temp << endl;
}

void zamijeniR(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << " " << "b: " << temp;
}


int main(){
    
    int a = 5;
    int b = 4;
    zamijeniP(&a, &b);
    zamijeniR(a, b);


}