#include<iostream>
using namespace std;
int main()
{
    int factorial=1;
    for(int i=8; i>=1; i--)
    {
        factorial*=i;
    }
    cout<<"8 factorial: "<<factorial<<endl;
    return 0;
}

OUTPUT -
8 factorial: 40320
