#include <iostream>
#include <string>
using namespace std;

void replaceSymbols(string& text) 
{
    for (char& x : text) 
    {
        if (x == ' ')
        {
            x = ':';
        }
        if (x == ',')
        {
            x = '/';
        }
    }
}
int mai() 
{
    setlocale(LC_ALL, "Russian");
    string sentence;

    cout << "Введите предложение: ";
    getline(cin, sentence);

    replaceSymbols(sentence);

    cout << "Результат: " << sentence << endl;

    return 0;
}