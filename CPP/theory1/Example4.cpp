#include <iostream>
using namespace std;

void greetPeopleinDifferentLanguages();
void autoGreetEnglish();
void autoGreetGerman();
void autoGreetTurkish();

int main(){

greetPeopleinDifferentLanguages();
   return 0; 
}

void greetPeopleinDifferentLanguages()
{
    cout << "Choose a language:" << endl;
    cout << "1) English" << endl;
    cout << "2) Turkish" << endl;
    cout << "3) German" << endl;
    int option;
    cin>>option;

    switch (option)
    {
    case 1:
        autoGreetEnglish();
        break;
    case 2:
        autoGreetTurkish();
        break;
    case 3:
        autoGreetGerman();
        break;
    default:
        cout << "invalid number choose again 1,2 or 3" << endl;
        break;
    }

}

void autoGreetEnglish()
{
    auto greet = []()
    {
        cout << "Hello or Hi";
    };
    greet();
}

void autoGreetTurkish()
{
    auto greet = []()
    {
        cout << "Merhaba";
    };
    greet();
}

void autoGreetGerman()
{
    auto greet = []()
    {
        cout << "Hallo";
    };
    greet();
}