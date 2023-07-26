#include <iostream>
#include <limits.h>
using namespace std;
bool divisor(int n)
{
    if(n<0) return 0;
    {cout<<"Number is Negative"<<endl;}
    else
    {
        cout<<"Divisor of "<<n<<" is/are: "<<" ";
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
            {cout<<i<<" ";}
        }
    }
}
int main()
{
    int n=100;
    cout<<divisor(n);
    return 0;
}