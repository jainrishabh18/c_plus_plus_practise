#include <iostream>
using namespace std;

void sayDigit(int n , string arr[])
{
    if(n==0)
    {
        return;
    }
    int digit =  n%10;
    n =  n/10;
    // cout<< arr[digit] <<" ";
    
    sayDigit(n, arr);

    cout<< arr[digit] <<" ";

}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five","six"
                        "seven", "eight", "nine", "ten"};
    int n;
    cin>> n ;

    sayDigit(n, arr);

    return 0;

    // sayDigit(n,arr);
}