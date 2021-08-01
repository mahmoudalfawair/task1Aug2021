#include <iostream>
using namespace std;
int main()
{
cout << "enter the length...";
int n;
cin >> n;
cout << "enter the width...";
int z;
cin >> z;
for(int i =0; i<n; i++ )
{
    for(int i =0; i<z; i++)
    {
cout << "*";

    }
    cout << endl;
}



return 1;
}