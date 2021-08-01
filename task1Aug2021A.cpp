#include <iostream>
using namespace std;
int main()
{
//loop / sum of the digits using loop
int c =0;
int x;
cout << "enter -1 to exit\n";

while(x !=-1)
{
cin >> x;
c +=x;
}
cout << c+1 << endl;

return 1;
}