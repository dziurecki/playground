#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct StringHolderS{
    char cgi[9];
};

class StructStringExtractro{
    StringHolderS * strHolderPtr;

    public:
    void setStrPtr(StringHolderS * const newStrHolder){
        strHolderPtr = newStrHolder;
    }

    char * getString(){

    return strHolderPtr->cgi;    
    }

};


int main (){

    char ciag;
    ciag = 'a';
    cout << "Hello World" << endl;
    //cin >> ciag;
    //cout << *ciag << endl;

    printf("series is located under the address %s \n", "stolik");

    StringHolderS stringS;

    StructStringExtractro extractro;
    extractro.setStrPtr(&stringS);

    stringS.cgi[0] = '0';
    stringS.cgi[1] = '2';
    stringS.cgi[2] = '\0';

    strncpy(stringS.cgi, "It Works!", 9);
    stringS.cgi[9] = '\0';


    printf("CGi seems to be %s \n", extractro.getString());
    char sign = 'a';
    int size = sizeof(sign);
    printf("%d", sizeof(long));

    return 0;
}