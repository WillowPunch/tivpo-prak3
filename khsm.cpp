#include <iostream>
#include <string>

using namespace std;
const int q = 2;
string questions[q] {"The use of Russian letters in the latin text is known as what?", "Bloody Mary is a cocktail made of what alcoholic beverage?"};
string answers_a[q] {"Faux Martian", "Vodka"};
string answers_b[q] {"Faux Cyrillic", "Rum"};
string answers_c[q] {"Faux Latin", "Gin"};
string answers_d[q] {"Faux Glagolitic", "Absinthe"};
char correct_answers[q] {'B', 'A'};
int i = 0;
char answer;
int test;
bool game_stop = false;

void test_check();
char testing(int test);
void game();

void test_check()
{
    if(test == 1)
    {
        game();
        if (i == 1 && game_stop)
        {
            cout << "Test complete";
        }
        else {
            cout << "Test went wrong";
        }
    }
    else if(test == 2)
    {
        game();
        if (i == q && !game_stop)
        {
            cout << "Test complete";
        }
        else {
            cout << "Test went wrong";
        }
    }
}

char testing(int test)
{
    switch(test)
    {
        case 1:
        {
            char test_answers1[q] {'B', 'C'};
            return test_answers1[i];
        }
        case 2:
        {
            char test_answers2[q] {'B', 'A'};
            return test_answers2[i];
        }
    }
    
    
}

int main()
{
    cout << "Choose your destiny; 0 - Game; 1 or 2  - Test";
    cin >> test;
    if(!test)
        cout << "not done yet.";
    else
    {
        test_check();
    }
}
