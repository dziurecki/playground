#include <iostream>
#include <cstdio>
using namespace std;

class Car{
int wheel;

virtual string to_string();
};


int main (){

    char ciag;
    ciag = 'a';
    cout << "Hello World" << endl;
    cin >> ciag;
    //cout << *ciag << endl;

    printf("Ciąg jest pod adresem %x \n", &ciag);
    return 0;
}