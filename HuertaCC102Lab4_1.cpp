#include <iostream>
using namespace std;

int main()
{
    char opt;

    do
    {
        int n, quiz;

        cout << "Enter number of students: ";
        cin >> n;

        cout << "Enter number of quizzes: ";
        cin >> quiz;

        float arr[50][50];
        float avg[50];

        for(int i = 0; i < n; i++)
        {
            float total = 0;

            cout << "\nStudent " << i + 1 << " scores:\n";

            for(int j = 0; j < quiz; j++)
            {
                cin >> arr[i][j];
                total += arr[i][j];
            }

            avg[i] = total / quiz;
        }

        cout << "\nStudent ";

        for(int j = 0; j < quiz; j++)
        {
            cout << "Q" << j + 1 << " ";
        }

        cout << "Average\n";

        for(int i = 0; i < n; i++)
        {
            cout << i + 1 << "      ";

            for(int j = 0; j < quiz; j++)
            {
                cout << arr[i][j] << " ";
            }

            cout << avg[i] << endl;
        }

        cout << "\nRepeat the program? (y/n): ";
        cin >> opt;

    } while(opt == 'y' || opt == 'Y');

    return 0;
}
