#include <iostream>

using namespace std;

int main() {
    int number_of_elements;
    cout << "Enter nuber of array elements" << endl;
    cin >> number_of_elements;

    cout << "How do you want to fill in the array: 1 - with key board, 2 - by random " << endl;
    int the_way;
    while (true) {
        cin >> the_way ;
        if (the_way == 1) {
            cout << "You will fill in the array " << endl ;
            break;
        } else if (the_way == 2) {
            cout << "The array will be filled in by random " << endl;
            break;
        } else {
            cout << "Choose from 2 ways: 1 or 2";
        }
    }

    double * arr = new double [number_of_elements] ;
    double min =0;

    if (the_way ==1){
        for (int i = 0; i < number_of_elements; i++){
            cout << "Enter an elment of array";
            cin >> arr[i];
        }

        for (int i = 0; i < number_of_elements; i++){
            cout << arr[i] << endl;
        }

    }else {
        srand(time(0));
        for (int i=0; i< number_of_elements ; i++){
            if (i%2 == 0) {
                arr[i]=(rand()%100 / double (rand()%10) +1);
                cout << arr[i] << endl ;
            } else {
                arr [i]= ((rand()%1000 / double (rand()%100) + 1 ) / 2) - (rand()%1000 / double (rand()%100) + 1 );
                cout << arr[i] << endl ;
            }

        }

    }

    int min_el = 0;

    for (int i = 0; i< number_of_elements; ++i){
        if (arr[i] <= arr[min_el] ){
            min = arr[i];
            min_el = i;
        }else{
            continue;
        }
    }
    cout << "The lowest element is number " << min_el << endl;

    int numder_of_1st_negetive = 0 ;
    for (int i = 0; i< number_of_elements; ++i){
        if (arr[i] < 0 ){
            numder_of_1st_negetive = i;
            break;
        }else{
            continue;
        }
    }

    int number_of_last_negative = 0;
    for (int i = (numder_of_1st_negetive + 1); i < number_of_elements; ++i){
        if (arr[i] < 0 ){
            number_of_last_negative = i;
        }else{
            continue;
        }
    }

    double sum = 0 ;
    for (int i = (numder_of_1st_negetive + 1); i < number_of_last_negative ; ++i){
        sum += arr[i];
    }
    cout << sum << endl;

    double constant;
    cout << "Enter X" << endl;
    cin >> constant;

    int a = 0;
    double tmp = 0;

    for (int i = 0; i < number_of_elements; ++i){
        if (abs(arr[i]) < (constant) ){
            tmp = arr [i];
            arr [i] = arr [a];
            arr [a] = tmp ;
            ++a;

        }
    }

    for (int i = 0; i < number_of_elements; ++i){
        cout << arr[i] << endl;
    }


    delete[] arr;
return 0;
}
