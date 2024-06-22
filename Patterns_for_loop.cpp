#include <iostream>

using namespace std;

int main()
{
    int shape;

    cout << "Which Shape would you like to print" << endl;
    cout<<"________________________________________"<<endl;
    cout<<"1)Left Triangle "<<endl;
    cout<<"2)Left Triangle Inverted "<<endl;
    cout<<"3)Right Triangle "<<endl;
    cout<<"4)Right Triangle Inverted "<<endl;
    cout<<"5)Pyramid "<<endl;
    cout<<"6)Inverted Pyramid "<<endl;
    cout<<"7)Diamond "<<endl;
    cout<<"________________________________________"<<endl;
    cin >> shape;


    if (shape == 1)
    {
        int r1;

        cout << "Enter rows" << endl;
        cin >> r1;

        for (int i = 1; i <= r1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    else if (shape == 2)
    {
        int r2;

        cout << "Enter rows" << endl;
        cin >> r2;

        for (int i = r2; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    else if (shape == 3)
    {
        int r3;

        cout << "Enter rows" << endl;
        cin >> r3;

        for (int i = 1; i <= r3; i++)
        {
            for (int s = 1; s <= r3 - i; s++)
            {
                cout << " ";
            }

            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    else if (shape == 4)
    {
        int r4;

        cout << "Enter rows" << endl;
        cin >> r4;

        for (int i = r4; i >= 1; i--)
        {
            for (int s = 1; s <= r4 - i; s++)
            {
                cout << " ";
            }

            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    else if (shape == 5)
    {
        int r5;

        cout << "Enter rows" << endl;
        cin >> r5;

        for (int i = 1; i <= r5; i++)
        {
            for (int s = 1; s <= r5 - i; s++)
            {
                cout << " ";
            }

            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    else if (shape == 6)
    {
        int r6;

        cout << "Enter rows" << endl;
        cin >> r6;

        for (int i = r6; i >= 1; i--)
        {
            for (int s = 1; s <= r6 - i; s++)
            {
                cout << " ";
            }

            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    else if (shape == 7)
    {
        int m;
        int c;

        cout << "Enter max length of Diamond" << endl;
        cin >> m;

        c = m + 1;

        for (int i = 1; i <= c; i++)
        {
            for (int s = 1; s <= c - i; s++)
            {
                cout << " ";
            }

            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }

        for (int i = m; i >= 1; i--)
        {
            for (int s = 1; s <= c - i; s++)
            {
                cout << " ";
            }

            for (int j = 1; j <= 2 * i - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    else
    {
        cout<<"Wrong Input"<<endl;
    }

    return 0;
}