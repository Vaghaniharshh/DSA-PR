#include <iostream>
#include <unordered_map>
using namespace std;

void printCharFrequencies(const string &str)
{
    unordered_map<char, int> freqMap;

    for (char ch : str)
    {
        freqMap[ch]++;
    }

    cout << "Character frequencies: { ";
    for (const auto &entry : freqMap)
    {
        cout << "'" << entry.first << "': " << entry.second << ", ";
    }
    cout << "\b\b }" << endl;
}

int main()
{

    string str = "hello world";

    printCharFrequencies(str);

    return 0;
}
