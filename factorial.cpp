#include <bits/stdc++.h>
using namespace std;
long long FactIterative(long long number)
{
    long long f = 1;
    for (long long i = 2; i <= number; i++)
        f *= i;
    return f;
}
long long FactRecursive(long long number)
{
    if (number== 1)
    return 1;
        return number * FactRecursive(number - 1);
}
int main()
{
    long long number;
    cin >> number;
    clock_t start, end;
    start = clock();
    cout<<FactIterative(number)<<endl; // or cout<<FactRecursive(number)<<endl;
    end = clock();
    double time_taken = ((double)end - start) / (double)CLOCKS_PER_SEC;
    time_taken *= 1000000;
    cout << time_taken << " msec"<<endl;
}