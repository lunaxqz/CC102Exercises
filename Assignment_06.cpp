#include <iostream>
#include <fstream>
using namespace std;

//Checker if the current number is a prime number
bool isPrime(int number)
{
    if(number <=1)
    {
        return false;
    }

    for(int i = 2; i * i <= number; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}

//The function for counting the amount of primes in a file
int primeCounter()
{
    fstream file;
    int primeCount = 0;

    file.open("NUMS.txt", ios::in);
    if(file.is_open())
    {
        cout << "File opened successfully.\n";
        cout << "Scanning...\n";

        int number;
        while(file >> number)
        {
            if(isPrime(number))
            {
                primeCount++;
            }
        }

        cout << "Scan successful.\n\n";
        file.close();
    }
    else
    {
        cout << "Failed to open file.\n\n";
    }

    return primeCount;
}

int main()
{
    fstream file;
    int n;

    file.open("NUMS.txt", ios::out);
    if(file.is_open())
    {
        cout << "File opened successfully.\n";
        cout << "Writing...\n";

        file << "7\n";
        file << "12\n";
        file << "19\n";
        file << "25\n";
        file << "31\n";
        file << "44\n";
        file << "58\n";
        file << "63\n";
        file << "72\n";
        file << "89\n";

        cout << "Write successful.\n\n";
        file.close();
    }
    else
    {
        cout << "Failed to open file.\n\n";
    }

    n = primeCounter();

    cout << "Amount of prime numbers in the file: " << n << "\n\n";

    return 0;
}
