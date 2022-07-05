
#include <iostream>
void zamijena(int *n1, int *n2);
using std:: cin;
using std:: cout;
using std:: endl;

int main()
{
    int br1 = 5, br2 = 10;

    zamijena( &br1, &br2);

    cout << br1;
    cout << endl;
    cout << br2;
    return 0;
}

void zamijena(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

