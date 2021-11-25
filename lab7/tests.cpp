#include "gtest/gtest.h"
#include "2ndTerm.h"


TEST(Getgroup,3){
    int grades[4] = {10,8,9,6};
    int grades1[5] = {7,8,9,6,10};
    StudentAfter2ndTerm studentAfter2NdTerm("Anton",2,3,34,grades,grades1);
    ASSERT_EQ (studentAfter2NdTerm.GetStudentsGroup(), 3);
}

TEST(Getyear,2){
    int grades[4] = {10,8,9,6};
    int grades1[5] = {7,8,9,6,10};
    StudentAfter2ndTerm studentAfter2NdTerm("Anton",2,3,34,grades,grades1);
    ASSERT_EQ (studentAfter2NdTerm.GetStudentsYear(), 2);
}

TEST(Getrecor_book,34){
    int grades[4] = {10,8,9,6};
    int grades1[5] = {7,8,9,6,10};
    StudentAfter2ndTerm studentAfter2NdTerm("Anton",2,3,34,grades,grades1);
    ASSERT_EQ (studentAfter2NdTerm.GetSudentsRecordBook(), 34);
}

TEST(GetGrade,6){
    int grades[4] = {10,8,9,6};
    int grades1[5] = {7,8,9,6,10};
    StudentAfter2ndTerm studentAfter2NdTerm("Anton",2,3,34,grades,grades1);
    ASSERT_EQ (studentAfter2NdTerm.GetStudentsGrade(3), 6);
}

TEST(AverengeScore_from_10_8_9_6_7_8_9_8_10_FOR_2ndTerm,8_11){
    int grades[4]={10, 8, 9, 6};
    int grades1[5]={7, 8, 9, 6, 10};
    StudentAfter2ndTerm studentAfter2NdTerm("Anton", 2, 3, 34, grades, grades1);
    ASSERT_NEAR(studentAfter2NdTerm.AverengeScore(),8.11,0.01);
}


TEST(AverageScore_For_1stTerm_grades_10_8_9_6, result_8_25){
    int grades[4]={10, 8, 9, 6};
    StudentAfter1stTerm stTerm("Anton", 2, 3, 34, grades);
    ASSERT_DOUBLE_EQ(stTerm.AverengeScore(),8.25);
}

TEST(AverageScore_for_Student,result_0){
    Student student("Anton", 2, 3, 34);
    ASSERT_EQ(student.AverengeScore(),0);
}