#include <iostream>
#include <string>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");

    string input;
    char insertChar;

    cout << "������� �����������: ";
    getline(cin, input);
    cout << "������� ������ ��� �������: ";
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
    cout << "���������� �����������: " << result << endl;

    return 0;
}