#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;


int main() {
    int m,stb;
    cout << "Enter number of str this value will be doubled "<< endl;
    while (true){
        cin  >> m ;
        if (m<=10){
            cout << "Thank you" << endl;
            break;
        }else {
            cout << "Try number lesser than 10" << endl;
        }
    }
    cout << "Enter number of stb "<< endl;
    while (true){
        cin >> stb ;
        if (stb <= 10){
            cout << "Thank you" <<endl ;
            break;
        }else {
            cout << "Try number lesser than 10" << endl;
        }
    }


    vector <vector<int> > a(2*m, vector<int>(stb));

    cout << "How do you want to fill in the array: 1 - with key board, 2 - by random " << endl;
    int TheWay;
    while (true) {
        cin >> TheWay ;
        if (TheWay == 1) {
            cout << "You will fill in the array " << endl ;
            break;
        } else if (TheWay == 2) {
            cout << "The array will be filled in by random " << endl;
            break;
        } else {
            cout << "Choose from 2 ways: 1 or 2";
        }
    }

    if (TheWay == 1){
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < stb; ++j){
                cout << "enter element" << endl;
                cin >> a[i][j];
            }
        }

    }else {
        srand (time(0));
        for (int i = 0; i < m; ++i){
            for (int j = 0; j < stb; ++j){
               a[i][j] = (rand()%1000);
            }
        }

    }


    cout << "start matrix" << endl;
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < stb; ++j){
            cout.width(4);
            cout << a [i][j] << "";
        }
        cout << endl;
    }

    for (int i = m; i < (2*m); ++i ){
        for (int j = 0; j < stb; ++j){
           a[i][j]  = a [i-m][j];
        }
    }

    cout << "new matrix" << endl;
    for (int i = 0; i < (2*m); ++i ){
        for (int j = 0; j < stb; ++j){
            cout.width(4);
            cout << a [i][j] << " ";
        }
        cout << endl;
    }


    int null = 0;
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < stb; ++j){
            if(a[i][j] == 0){
                ++null;
                ++j;
            } else{
                continue;
            }
        }
    }
    cout << "Number of columns with 0 is " << null <<endl;

    int OldProgression = 0;
    int progression = 0;
    int row = 0;
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < stb -1; ++j){
            if(a[i][j] < a [i][j+1]){
                ++progression;
            } else{
                continue;
            }
        }
        if (OldProgression < progression){
            OldProgression = progression;
            progression = 0 ;
            row += i;
        } else{
            progression = 0;
        }
    }
    cout << "String with the longest increasing progression is " << (row + 1) << endl;

    return 0;
}
