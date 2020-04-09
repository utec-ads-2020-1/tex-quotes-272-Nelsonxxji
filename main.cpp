#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    int quoteCounter = 1;

    while (getline(cin, line))
    {
        for (auto it = line.begin(); it < line.end(); it++)
        {
            if (*it == '\"')
            {
                if (quoteCounter % 2 == 0)
                {
                    *it = '\'';
                    line.insert(it, '\'');
                }
                else
                {
                    *it = '`';
                    line.insert(it, '`');
                }
                quoteCounter++;
            }
        }
        cout << line << endl;
    }
    return EXIT_SUCCESS;
}