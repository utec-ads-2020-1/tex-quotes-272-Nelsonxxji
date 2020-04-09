#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    int quoteCounter = 1;

    while (getline(cin, line, '\"'))
    {
        cout << line;
        if (quoteCounter % 2 == 0)
        {
            cout << "\'\'";
        }
        else
        {
            cout << "``";
        }
        quoteCounter++;  
    }
    cout << endl;
    return EXIT_SUCCESS;
}