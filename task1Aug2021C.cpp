#include <iostream>
using namespace std;
int main()
{
    int j;
    cout << " enter an integer number...";
    int num;
    cin >> num;
    if(num == 1 || num ==2 )
    {
        cout << "prime number\n";
        exit(1);
    }
for(int i=2; i<num; i++)
{
    if(num%i ==0)
    {
        j=1;
        }
       if(j==1)
       break;
    
}
if(j==1)
cout<< "not prime\n";
else
cout << "prime\n";

return 1;
}