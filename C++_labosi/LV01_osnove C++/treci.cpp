#include<iostream>
using std:: cin;
using std:: cout;
using std:: endl;

void brojevi(int n){
int i;
int j;

if (n < 10 && n % 1 == 0){
    for (i = 1; i <= n; i++){
      cout <<"*";
    }
    cout << endl;
    for (i = 1; i <= n; i++){
           for (j = 1 ; j <= n; j++){
           if(j <= i){
            cout << j;
        }
            else{
              cout <<"*";            
              }
            
        }
            cout << endl; 
    }
  }
}

int main(void){
  int i, j, n;
  cout << "Unesite n: ";
  cin >> n;
  brojevi(n);
}