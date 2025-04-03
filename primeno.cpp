#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{

   vector<vector<int>>arr = {
        {2, 4, 6},
        {3, 5, 8},
        {9, 11, 12}};

   vector<int> primes;

    for (const auto &row : arr)
    {
        for (int num : row)
        {
            if (isPrime(num))
            {
                primes.push_back(num);
            }
        }
    }

   cout << "Prime numbers in the array: [";
    for (size_t i = 0; i < primes.size(); ++i)
    {
       cout << primes[i];
        if (i != primes.size() - 1)
        {
           cout << ", ";
        }
    }
   cout << "]" <<endl;

    return 0;
}
