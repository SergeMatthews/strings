#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string firstName;
    string lastName;
    string salutation;

    cout << "Введите имя: ";
    cin >> firstName;
    cout << "Введите фамилию: ";
    cin >> lastName;

    salutation = "Здравствуйте, " + firstName + ' ' + lastName + "!\n";
    cout << salutation;

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    return 0;
}

