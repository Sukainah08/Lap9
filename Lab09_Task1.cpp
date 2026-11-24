#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 1- Marks of 10 students in 3 quizzes
    double marks[10][3] = {
        {5,   3.5, 4},
        {5,   3.5, 4},
        {4,   3,   2},
        {3.5, 2.5, 0},
        {4.5, 2,   1.5},
        {5,   1.5, 3},
        {4,   1,   3},
        {3.5, 2,   4},
        {4,   1,   3},
        {5,   4,   3}
    };
    int i, j;

    // 2- Average of students' marks in Quiz#1 (column 0)
    double sum = 0;
    for (i = 0; i < 10; i++)
        sum += marks[i][0];
    cout << fixed << setprecision(2);
    cout << "2) Average of Quiz#1: " << sum / 10 << endl;

    // 3- Average of student#5 in the three quizzes (row 4)
    double s5 = 0;
    for (j = 0; j < 3; j++)
        s5 += marks[4][j];
    cout << "3) Average of student#5: " << s5 / 3 << endl;

    // 4- Highest mark in Quiz#2 (column 1)
    double highest = marks[0][1];
    for (i = 1; i < 10; i++)
        if (marks[i][1] > highest)
            highest = marks[i][1];
    cout << "4) Highest mark in Quiz#2: " << highest << endl;

    // 5- Average for each student in the three quizzes
    cout << "5) Average for each student:" << endl;
    for (i = 0; i < 10; i++) {
        double total = 0;
        for (j = 0; j < 3; j++)
            total += marks[i][j];
        cout << "   Student#" << i + 1 << ": " << total / 3 << endl;
    }

    return 0;
}
