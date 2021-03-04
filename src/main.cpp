#include <iostream>

using namespace std;

static const char USELESS_SYMBOL = ' ';

int main()
{
    char symbol;
    bool was_letter = false, first_try = true;
    while(scanf("%c", &symbol) != EOF)
        if(symbol != USELESS_SYMBOL)
        {
            if(!was_letter)
            {
                if(!first_try) cout << USELESS_SYMBOL;
                else first_try = false;
            }
            was_letter = true;
            cout << symbol;
        }
        else was_letter = false;
    return 0;
}
