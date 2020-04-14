#include<iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    bool flag = 0;
    int arr[12]={4,7,44,47,74,77,444,447,477,744,747,777};
    for (int i=0; i<12;i++)
    {
        if (n%arr[i] == 0)
        {
            flag = 1;
        }       
    }

    if (flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}