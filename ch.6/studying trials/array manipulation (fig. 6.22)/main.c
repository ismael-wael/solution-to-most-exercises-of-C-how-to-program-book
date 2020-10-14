#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4
int minimum(const int grades[][EXAMS],size_t pupils,size_t tests);
int maximum(const int grades[][EXAMS],size_t pupils,size_t tests);
double average(const int setOfGrades[],size_t tests);
void printArray(const int grades[][EXAMS],size_t pupils,size_t tests);
int main()
{
    int studentGrades[STUDENTS][EXAMS]={{77,68,86,73},
                                        {96,87,89,78},
                                        {70,90,86,81}};
    puts("The array is:");
    printArray(studentGrades,STUDENTS,EXAMS);
    printf("\n\nLowest grade: %d\nHighest grade: %d\n",
           minimum(studentGrades,STUDENTS,EXAMS),
           maximum(studentGrades,STUDENTS,EXAMS));
    size_t student;
    for(student = 0; student < STUDENTS;++student){
        printf("\nThe average grade for student %u is %0.2f\n",
               student,average(studentGrades[student],EXAMS));
    }
    return 0;
}
int minimum(const int grades[][EXAMS],size_t pupils,size_t tests)
{
    int min = grades[0][0];
    size_t i,j;
    for(i=0;i<pupils;++i){
        for(j=0;j<tests;++j){
            if(grades[i][j]< min){
                 min = grades[i][j];
            }
        }
    }
    return min;

}
int maximum(const int grades[][EXAMS],size_t pupils,size_t tests)
{
     int max= grades[0][0];
    size_t i,j;
    for(i=0;i<pupils;++i){
        for(j=0;j<tests;++j){
            if(grades[i][j]> max){
                max = grades[i][j];
            }
        }
    }
    return max;
}
double average(const int setOfGrades[],size_t tests)
{
    int i,total =0;
    for(i=0;i<tests;++i){
        total += setOfGrades[i];
    }
    return (double)total/tests;

}
void printArray(const int grades[][EXAMS],size_t pupils,size_t tests)
{
    size_t i,j;
    for(i=0;i<pupils;++i){
        for(j=0;j<tests;++j){
            printf("%d\t",grades[i][j]);
        }
        puts("");
    }
}
