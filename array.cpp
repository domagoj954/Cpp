#include<iostream>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void show(int array[], int n){
    for(int i = 0; i < n; i++){
        cout << array[i] << " ";
    }  
    return;
}
int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    show(numbers, 5);
}