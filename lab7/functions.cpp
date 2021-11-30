#include "functions.h"
double AverageScoreForGroup(int group, const std::vector<Student*> &students){
    double sum = 0;
    double average = 0;
    int member_counter = 0;
    for(int i=0; i < students.size(); ++i){
        if (students[i]->GetStudentsGroup() == group){
            sum += students[i]->AverengeScore();
            ++member_counter;
        }
    }
    if (member_counter == 0)
        throw std::exception("No one is in the array");
    else
         average = sum/ member_counter;
         return average;
}


double TotalAverageScore(const std::vector<Student*> &students){
    double sum = 0;
    double average = 0;
    for(int i=0; i < students.size(); ++i){
            sum += students[i]->AverengeScore();

}
    average = sum/ students.size();
    return average;
}