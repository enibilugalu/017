#include <iostream>
#include <string>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");

    string input;
    char insertChar;

    cout << "Введите предложение: ";
    getline(cin, input);
    cout << "Введите символ для вставки: ";
    cin >> insertChar;
    string result;
    for (size_t i = 0; i < input.size(); i++) 
    {
        result += input[i];
        if ((i + 1) % 2 == 0) 
        {
            result += insertChar;
        }
    }
    cout << "Измененное предложение: " << result << endl;

    return 0;
}