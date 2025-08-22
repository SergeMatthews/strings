#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string secretWord = "малина";
    string userWord;
    
    do {
        cout << "Угадайте слово: ";
        cin >> userWord;
        if (userWord != secretWord)
            cout << "Неправильно" << endl;
    } while (userWord != secretWord);
    cout << "Правильно! Вы победили! Загаданное слово - " << secretWord << endl;
    
    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    return 0;
}
