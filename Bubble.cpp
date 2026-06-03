#include <iostream>
using namespace std;

int main()
{
    string names[] = {"Zuck","Shayd","Emely","Amjed",
                      "Esther","Manar","Anne"};

    int n = 7;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(names[j] > names[j + 1])
            {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Names in Ascending Order:\n";

    for(int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}
