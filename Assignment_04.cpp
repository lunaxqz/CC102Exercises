#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;

    file.open("color.txt", ios::out);
    if(file.is_open())
    {
        cout << "File opened successfully.\n";
        cout << "Writing...\n\n";

        file << "red\n";
        file << "orange\n";
        file << "yellow\n";
        file << "green\n";
        file << "blue\n";

        file.close();
        cout << "Write successful.\n\n";
    }
    else
    {
        cout << "Failed to open/create file.";
    }

    file.open("color.txt", ios::in);
    if(file.is_open())
    {
        cout << "File opened successfully.\n";
        cout << "Reading...\n\n";

        string line;
        while(getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
        cout << "\nFile read successfully\n\n";
    }
    else
    {
        cout << "Failed to open file.";
    }

    fstream color, color_copy;

    color.open("color.txt", ios::in);
    color_copy.open("color_copy.txt", ios::out);

    if(color.is_open() && color_copy.is_open())
    {
        cout << "File opened successfully.\n";
        cout << "Copying...\n\n";

        string line;
        while(getline(color, line))
        {
            color_copy << line << endl;
        }

        color.close();
        color_copy.close();
        cout << "File copied successfully\n";
    }
    else
    {
        cout << "Failed to open/create file.";
    }

    return 0;
}
