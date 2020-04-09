#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line, output;
    int quoteCounter = 1;

    while (getline(cin, line, '\"'))
    {
        output.append(line);
        if (quoteCounter % 2 == 0)
        {
            output.append("\'\'");
        }
        else
        {
            output.append("``");
        }
        quoteCounter++;
    }
    if(*output.end() != '\"'){
        output.pop_back();
        output.pop_back();
    }
    cout << output;
    return EXIT_SUCCESS;
}