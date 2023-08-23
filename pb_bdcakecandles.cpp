//problem solving :Birthday Cake Candles problem.
#include<bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int n, int candles[])//function
{
    int maxHeight = INT_MIN;
    //INT_MIN is a constant defined in the <climits> header in C++
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (candles[i] > maxHeight)
        {
            maxHeight = candles[i];
            count = 1;
        }
        else if (candles[i] == maxHeight)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    //cout<<"enter n value:";
    cin >> n;
    int candles[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"enter the candles:";
        cin >> candles[i];
    }

    int result = birthdayCakeCandles(n, candles);//function call
    cout << result << endl;

    return 0;
}

