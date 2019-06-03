#include <iostream>
using namespace std;
int mi(int x,int y)
{
    int v=1;
    while(y--)
    {
        v*=x;
    }
    return v;
}
int min()
{
    int x,y;
    cin>>x>>y;
    cout<<mi(x,y);
    return 0;
}