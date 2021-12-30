#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i=1;
    int n=8;
    int factorial=1;
    while(i<n)
    {
        i++;
        factorial*=i;
    }
    cout<<"8 factorial: "<<factorial<<endl;
    
    return 0;
}


OUTPUT - 
8 factorial: 40320
