#include<iostream>
using std:: cin;
using std:: cout;
using std:: endl;

void prikazi(int n, int polje[]){
  int i;
  for(i = 1; i < n; i++){
    cout << polje[i];
    cout << ","; 
 
  
  }
}
int main(void){
int n = 5;
int i; 
int polje[100] = {}; 

 for(i = 1; i < n; i++){
   cout << "Unesite "<< i << ". element polja: ";
   cin >> polje[i];
 }
   prikazi(n, polje);
  
return 0;
}