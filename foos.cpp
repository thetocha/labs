#include "foos.h"
#include "iostream"

using namespace std;
double*  CreatingArray(int way_of_array_filling_, int number_of_elements){
    double * arr = new double [number_of_elements] ;

    if (way_of_array_filling_ == 1){
        for (int i = 0; i < number_of_elements; ++i){
            cout << "Enter an elment of array";
            cin >> arr[i];
        }

        for (int i = 0; i < number_of_elements; ++i){
            cout << arr[i] << endl;
        }

    }else {
        srand(time(0));
        for (int i=0; i< number_of_elements ; ++i){
            if (i%2 == 0) {
                arr[i]=(rand()%100 / double (rand()%10) +1);
                cout << arr[i] << endl ;
            } else {
                arr [i]= ((rand()%1000 / double (rand()%100) + 1 ) / 2) - (rand()%1000 / double (rand()%100) + 1 );
                cout << arr[i] << endl ;
            }

        }

    }
    return arr;
}

double MinimalElement (double* array, int array_size){
    int min_el = 0;
    double min = array[0];

    for (int i = 0; i <= array_size-1; ++i){
        if (array[i] <= min ){
            min = array[i];
            min_el = i;
        }
    }
    cout << "The lowest element is number " << min_el << endl;
    return min_el;
}

double SumBetweenNegative (double* array, int array_size){
    int numder_of_1st_negetive = 0 ;
    for (int i = 0; i< array_size; ++i){
        if (array[i] < 0 ){
            numder_of_1st_negetive = i;
            break;
        }else{
            continue;
        }
    }

    int number_of_last_negative = 0;
    int i =numder_of_1st_negetive+1;
    while(i < array_size){
        if (array[i] < 0 ){
            number_of_last_negative = i;
        }
        ++i;
    }

    if(number_of_last_negative == 0)
       throw exception("Not enough negative elements");

    double sum = 0 ;
    for (int i = (numder_of_1st_negetive + 1); i < number_of_last_negative ; ++i){
        sum += array[i];
    }
    cout << "Sum of elements between 1st & last negative is " << sum << endl;
    return sum;
}

double* Sorting(double* array, int array_size, int constanta){
    double constant = constanta;

    int a = 0;
    double tmp1 = 0;
    double tmp2 = 0;

    for (int i = 0; i < array_size; ++i){
        if (abs(array[i]) < (constant) ){
            tmp1 = array [i];
            tmp2 = array [a];
            array [a] = tmp1;
            tmp1 = 0;
            for(int j=a+1; j <= i; ++j){
                tmp1 = array[j];
                array[j] = tmp2;
                tmp2 = tmp1;
            }
            ++a;
        }
    }

    for (int i = 0; i < array_size; ++i){
        cout << array[i] << endl;
    }
    return array;
}
