#include <iostream>

using namespace std;

int main()
{

    int num{0};
    cin >> num;
    char a = '*';

    cout << endl;
    for(int i = 1; i <= num; i++)
    {
        for(int esp = 0; esp < num-i; esp++)
        {
            cout << ' ';
        }
        for(int j = 0; j < i; j++)
        {
            cout << a << ' ';
        }
        cout << endl;
    }

    for(int i = num-1; i > 0; i--)
    {
        for(int esp = 0; esp < num-i; esp++)
        {
            cout << ' ';
        }
        for(int j = 0; j < i; j++)
        {
            cout << a << ' ';
        }
        cout << endl;
    }


    return 0;
}
