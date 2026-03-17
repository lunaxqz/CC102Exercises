#include <iostream>
using namespace std;

void analyze(int *grades, int students, int subjects) {

    cout << "\nGrade Matrix:\n";

    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            cout << *(grades + i * 50 + j) << "\t";
        }
        cout << endl;
    }

    cout << "\nAverage per Student:\n";
    for (int i = 0; i < students; i++) {
        int sum = 0;

        for (int j = 0; j < subjects; j++) {
            sum += *(grades + i * 50 + j);
        }

        cout << "Student " << i + 1 << ": " << (float)sum / subjects << endl;
    }

    int highest = *grades;

    for (int i = 0; i < students; i++) {
        for (int j = 0; j < subjects; j++) {
            if (*(grades + i * 50 + j) > highest) {
                highest = *(grades + i * 50 + j);
            }
        }
    }

    cout << "\nHighest Grade: " << highest << endl;
}

int main() {
    int students, subjects;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    int grades[50][50];

    for (int i = 0; i < students; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        for (int j = 0; j < subjects; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    analyze(&grades[0][0], students, subjects);

    return 0;
}
