#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout;
    fout.open("Newfile.txt");
    if (!fout.is_open()){
        cout << "The file isn't open";
    } else{
        fout << "abcd" << endl;
        fout << "dcba" << endl;
        fout << "dacb" << endl;
    }
    fout.close();


    ifstream fin;
    fin.open("Newfile.txt");
    string str;
    if (!fin.is_open()){
        cout << "The file isn't open";
    } else{
        for (int i = 0; i < 3; ++i) {
            getline(fin, str);
            cout << str << endl;
            for (int j = 0; j < str.size()-1; ++j) {
                if(str[j] < str[j+1]){
                    ofstream increase;
                    increase.open("Increase_strings.txt");
                    if (!increase.is_open()){
                        cout << "The file isn't open";
                    } else{
                        increase << str;
                    }
                    increase.close();
                }else if (str[j] > str[j+1]){
                    ofstream decrease;
                    decrease.open("Decrease_strings.txt");
                    if (!decrease.is_open()){
                        cout << "The file isn't open";
                    } else{
                        decrease << str;
                    }
                    decrease.close();
                }else{
                    continue;
                }

            }
        }
    }
    fin.close();

    ifstream IncreaseReading("Increase_strings.txt");
    if(!IncreaseReading.is_open()){
        cout << "File of increase strings is not open 33" << endl;
    }else{
        string string1;
        getline(IncreaseReading,string1);
        cout << string1 << endl;
    }
    IncreaseReading.close();

    ifstream DeccreaseReading;
    DeccreaseReading.open("Decrease_strings.txt");
    if(!DeccreaseReading.is_open()){
        cout << "File of decrease strings is not open" << endl;
    }else{
        string string1;
        getline(DeccreaseReading, string1);
        cout << string1 << endl;
    }
    IncreaseReading.close();

    return 0;
}
