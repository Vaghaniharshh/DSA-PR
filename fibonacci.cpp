#include <iostream>
#include <vector>
using namespace std;

void printFibonacci(int count)
{

    if (count <= 0)
    {
        cout << "Fibonacci series: []" << endl;
        return;
    }

    vector<int> fiboSeries;

    fiboSeries.push_back(0);
    if (count > 1)
        fiboSeries.push_back(1);

    for (int i = 2; i < count; ++i)
    {
        int nextTerm = fiboSeries[i - 1] + fiboSeries[i - 2];
        fiboSeries.push_back(nextTerm);
    }

    cout << "Fibonacci series: [";
    for (int i = 0; i < fiboSeries.size(); ++i)
    {
        cout << fiboSeries[i];
        if (i != fiboSeries.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main()
{

    int count;
    cin >> count;

    printFibonacci(count);

    return 0;
}
