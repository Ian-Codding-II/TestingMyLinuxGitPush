#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>nums;
    char quit;
    int num = 0;

    cout << "Enter some numbers (letter to quit). \n";
    while (1)
    {
        cout << "Your input: ";
        cin >> num;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Are you done? (y/n): ";
            cin.get(quit);

            if (tolower(quit) == 'y')
            {
                break;
            }
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        nums.push_back(num);
    }
    cout << "\n";

    int size = nums.size();
    
    cout << "The numbers belowe are as givin.";
    for (int i = 0; i < size; i++)
    {
        if (i % 5 == 0)
        {
            cout << "\n";
        }
        cout << nums[i] << ", ";
    }
    cout << "\n\n";

    sort(nums.begin(), nums.end());

    cout << "Here are the numbers in order.";
    for (int i = 0; i < size; i++)
    {
        if (i % 5 == 0)
        {
            cout << "\n";
        }
        cout << nums[i] << ", ";
    }
    cout << "\n";
    
    return 0;
}