#include <iostream>
using namespace std;

int main()
{
    char opt;

    do
    {
        const int products = 5;
        const int sellers = 4;

        double sales[products][sellers] = {0};

        int sp, pr;
        double amt;
        char more;

        do
        {
            cout << "\nSalesperson (1-4): ";
            cin >> sp;

            cout << "Product (1-5): ";
            cin >> pr;

            cout << "Amount: ";
            cin >> amt;

            sales[pr - 1][sp - 1] += amt;

            cout << "Add another? (y/n): ";
            cin >> more;

        } while(more == 'y' || more == 'Y');

        cout << "\nProduct  ";

        for(int i = 0; i < sellers; i++)
        {
            cout << "S" << i + 1 << "  ";
        }

        cout << "Total\n";

        double total = 0;

        for(int i = 0; i < products; i++)
        {
            double rowTotal = 0;

            cout << i + 1 << "        ";

            for(int j = 0; j < sellers; j++)
            {
                cout << sales[i][j] << "   ";
                rowTotal += sales[i][j];
            }

            cout << rowTotal << endl;
            total += rowTotal;
        }

        cout << "Total    ";

        for(int j = 0; j < sellers; j++)
        {
            double colTotal = 0;

            for(int i = 0; i < products; i++)
            {
                colTotal += sales[i][j];
            }

            cout << colTotal << "   ";
        }

        cout << total << endl;

        cout << "\nRun again? (y/n): ";
        cin >> opt;

    } while(opt == 'y' || opt == 'Y');

    return 0;
}
