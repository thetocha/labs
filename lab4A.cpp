#include <iostream>

using namespace std;

char MyCpy(char* Destination, const char* Source){
    int length = strlen(Source);
    for (int i = 0; i < length; ++i){
        Destination[i] = Source[i];
    }
    Destination [length] = '\0';

    return char (Destination);
}

int main() {
    char*  firstString = new char [40];
    MyCpy(firstString,"hello");
    cout << firstString << endl;
    return 0;
}
