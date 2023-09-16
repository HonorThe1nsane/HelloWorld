#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "World", "from", "VS Code in C++", "for my CSE 310 course!",};

    for (const string& word : msg)
    {
        cout << word << " ";
    }

    cout << endl;
}