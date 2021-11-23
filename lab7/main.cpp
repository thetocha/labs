#include <iostream>
#include <vector>
#include "2ndTerm.h"
#include "functions.h"


using namespace std;

int main(){
    int grades [4] = {9,10,7,8};
    int grades1 [5] = {3,4,5,2,6};


    StudentAfter1stTerm student("Anton",3,4,33, grades);
    StudentAfter2ndTerm studentAfter2NdTerm("Nata",2,4,23,grades,grades1);
    StudentAfter2ndTerm Stud (studentAfter2NdTerm);
    Student student1("dceki", 2 ,3 ,3 );

    cout << student1 << endl;

    vector<Student*> st;
    st.push_back(&student);
    st.push_back(&studentAfter2NdTerm);
    st.push_back(&student1);
    st.push_back(&Stud);

    cout << AverageScoreForGroup(4,st) << endl;
    cout << TotalAverageScore (st) << endl;

    return 0;
}
