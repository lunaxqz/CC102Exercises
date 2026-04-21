#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    fstream original, sorted;
    vector<string> words;

    original.open("original.txt", ios::out);
    if(original.is_open())
    {
        cout << "File opened successfully.\n";
        cout << "Writing...\n";

        original << "One\n";
        original << "Two\n";
        original << "Three\n";
        original << "Four\n";
        original << "Five\n";
        original << "Six\n";

        original.close();
        cout << "Write successful.\n\n";
    }
    else
    {
        cout << "Failed to open/create file.";
    }

    original.open("original.txt", ios::in);
    if(original.is_open())
    {
        cout << "File opened successfully.\n";
        cout << "Transferring to array...\n";

        string line;
        while (getline(original, line))
        {
            words.push_back(line);
        }

        original.close();
        cout << "Transfer successful.\n\n";
    }
    else
    {
        cout << "Failed to read original.txt";
    }

    sort(words.begin(), words.end());
    cout << "Sorted successfully.\n\n";

    sorted.open("sorted.txt", ios::out);

    if(sorted.is_open())
    {
        cout << "File opened successfully.\n";
        cout << "copying...\n";

        for (int i = 0; i < words.size(); i++)
        {
            sorted << words[i] << "\n";
        }

        sorted.close();
        cout << "Pasted into new file successfully.\n\n";
    }
    else
    {
        cout << "Failed to create sorted.txt";
    }

    return 0;
}
