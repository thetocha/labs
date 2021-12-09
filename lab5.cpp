#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int DefenitionOfProgerssion(string string1){
    int progerssion = 0;
    if(string1 == "")
        return 0;
    else{
        for (int j = 0; j < string1.size()-1; ++j){
            if(string1[j] < string1[j+1])
                ++progerssion;
            else if (string1[j] > string1[j+1])
                --progerssion;
            else
                continue;
        }
    }
    if(progerssion == string1.size() - 1)
        return 1;
    else if(progerssion == -(string1.size() - 1))
        return -1;
    else
        return 0;
}

int main() {
    ofstream fout;
    fout.open("Newfile.txt");
    if (!fout.is_open()){
        cout << "The file isn't open";
    } else{
        fout << "abcd" << endl;
        fout << "aoyz" << endl;
        fout << "dcba" << endl;
        fout << "dacb" << endl; // ?
    }
    fout.close();


    ifstream fin;
    fin.open("Newfile.txt");
    string str;
    if (!fin.is_open()){
        cout << "The file isn't open";
    } else{
        while(!fin.eof()) {
            getline(fin, str);
            int a = DefenitionOfProgerssion(str);
            if (a == 1){
                ofstream fout;
                fout.open("Increase_strings.txt", ios::app);
                if (!fout.is_open()){
                    cout << "The file isn't open" << endl;
                }else{
                    fout << str << endl;
                }
            }else if (a == -1){
                ofstream fout;
                fout.open("Decrease_strings.txt", ios::app);
                if (!fout.is_open()){
                    cout << "The file isn't open" << endl;
                }else{
                    fout << str << endl;
                }
            }else
                continue;
        }
    }
    fin.close();

    ifstream IncreaseReading("Increase_strings.txt");
    if(!IncreaseReading.is_open()){
        cout << "File of increase strings is not open " << endl;
    }else{
        while(!IncreaseReading.eof()){
            string string1;
            getline(IncreaseReading,string1);
            cout << string1 << endl;
        }
    }
    IncreaseReading.close();

    ifstream DecreaseReading;
    DecreaseReading.open("Decrease_strings.txt");
    if(!DecreaseReading.is_open()){
        cout << "File of decrease strings is not open" << endl;
    }else{
        while(!DecreaseReading.eof()){
            string string1;
            getline(DecreaseReading, string1);
            cout << string1 << endl;
        }
    }
    IncreaseReading.close();

    return 0;
}
