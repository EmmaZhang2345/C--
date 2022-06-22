#include <iostream>
using namespace std;

int main()
{
    cout<<"Do you want to proceed (y or n)?\n";
    char answer = 0;
    cin>>answer;

    if(answer=='y')
        cout<<"you choose yes\n";
}

//To make vistual studio code allow user input, in the settings.json
//add "code-runner.runInTerminal": true,