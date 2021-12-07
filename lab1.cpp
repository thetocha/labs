#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double  x;
    int k, a =1 ;

    cout << "Enter k " << endl;

    while (true) {
        cin >> k;
        if (k>1) {
            cout << "Thank you " << endl ;
            break;
        } else {
            cout << "k should be more or equal than 1" << endl;
        }

    }

    cout << "Enter x " << endl;

    while (true) {
        cin >> x;
        if (x>=1 || x < -1) {
            cout << "Try x from [-1,1)" << endl ;
        } else {
            cout << "Thank's" << endl;
            break;
        }

    }

    double term = 1, sum = 0;

    double step = pow (10.0,(-k) );
    cout  << "step = " << step << endl;
    double d = 1-x;
    double l = log (d) ;
    double high_border ;

    cout << "Enter high border for new term" << endl;


    while (true) {
        cin >> high_border;
        if (high_border > 0 && high_border < step) {
            cout << "Thank you " << endl ;
            break;
        } else {
            cout << "Try high_border from (0,step)" << endl;
        }

    }

    int decimal_places;
    cout << "Enetr decimal places" << endl;

    while (true) {
        cin >> decimal_places;
        if (decimal_places >= 1) {
            cout << "Thank you " << endl ;
            break;
        } else {
            cout << "decimal places should be bigger than 1 or equal to it " << endl;
        }

    }

    cout <<  setprecision(decimal_places) << "ln(1-x) = "  << l << ' ' << endl;

    double pow_of_x = x;

    while (fabs(term) > high_border)
    {
        term = pow_of_x / a;
        sum -= term;
        ++a;
        pow_of_x *= x;
        high_border = high_border;
    }
    cout << "Teylor series = " << sum <<  endl ;


    return 0;

}
