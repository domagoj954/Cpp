#include<iostream>

int *stvoriVarijablu(int varijabla){
    return new int(varijabla);
}

int main(){
 int *p = nullptr;

 p = stvoriVarijablu(5);
 std::cout << *p << std::endl;
 delete p;
 std::cout << *p;

p = stvoriVarijablu(10);
std::cout << *p;
delete p;
}