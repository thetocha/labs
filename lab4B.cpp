#include <iostream>

using namespace std;



int main() {
    char* str = new char [300];
    cout << "Enter the string" << endl;
    cin.getline(str,300);
    cout << str << endl;

    int progression = 1;
    int a = 0;
    int b;
    int flag = 0;
    int length = strlen(str);

    for ( int i = 0; i <= length; ++i){
        if (str[i] == 32 || i == length){
            b = i;
            char* word = new char [b-a];
            for ( int j = a; j < b; ++j ){
                word[j-a] = str[j];
            }
            word [b-a] = '\0';
            for (int j = 0; j < b-a ; ++j) {
                if (word[j] < word[j+1]) {
                    ++progression;
                    if (progression == b-a){
                        cout << word << endl;
                        ++flag;
                    } else{
                        continue;
                    }
                }else{
                    continue;
                }
            }
            a = b+1;
            progression = 1;
        }else if(flag == 1 ) {
            break;
        }
    }


    delete[] str;


    return 0;
}
