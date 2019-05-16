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
    stringS.cgi[8] = '1';
    

    printf("CGi seems to be %s \n", extractro.getString());
    char sign = 'a';
    int size = sizeof(sign);
    printf("%d", sizeof(long));
    printf("Sizeo of complete struct is %d\n", sizeof(StringHolderS));


    printf( "Did you ever knew that %d is same as %s?\n", 3+4, "siedem");
    printf( "Did you ever knew that %d is same as %s?\n", 3+4, "siedem");
    printf("To print a sing you need %cc\n", '%', 'c');


    const char * displyText = "text to display";
    printf("You can display text using %s", displyText);

    cout << "VSCode text display test" << endl;
    cout << "...and another one" << endl;

    cout << "Which is better?" << " " << displyText << endl;
    cout << "===============" << endl;
    cout << "== Its Easy! ==" << endl;
    cout << "===============" << endl;
    cout << "\t But how?" << endl;

    cout << "It's finally over!" << endl;
    return 0;
}