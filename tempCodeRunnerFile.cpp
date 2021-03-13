#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void show(){
   vector<int> v = {1, 2, 3, 4, 5};
   for(auto it = v.begin(); it !=v.end(); it++){
       cout << *it << " ";
   }
      return;
   }

int main(){
    show();
}