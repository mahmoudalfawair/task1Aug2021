#include <iostream>
using namespace std;
int main()
{
//loop / sum of the digits using loop
int c =0;

cout << "enter -1 to exit\n";

for(int x; x!=-1;)
{
cin >> x;
c +=x;
}
cout << c+1 << endl;

return 1;
}
