#include<iostream>
using std::cin;
using std::cout;
using std::endl;
#define N 5

int brojevi(int n = 5){

    if (n < 10) {
        for (int i = 1; i <= n; i++) {
            cout << "*";
        }
        cout << endl;
        for (int i = 1; i <= n; i++) { //redak
            for (int j = 1; j <= n; j++) { //stupac
                if (j <= i) {
                    cout << j;
                }
                else {
                    cout << "*";
                }

            }
            cout << endl;
        }
    }
    return 0;
}

int main(void){
    brojevi(7);

}