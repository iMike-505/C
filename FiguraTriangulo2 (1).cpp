#include <iostream>

using namespace std;

int main()
{
    int altura;

    cout << "\nAltura: "; cin >> altura;

    cout << endl;
    for (int i = 1; i <= altura; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    cout << endl;
    for (int i = 1; i <= altura; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
    for (int i = altura - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return EXIT_SUCCESS;
}