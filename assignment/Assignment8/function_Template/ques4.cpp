#include <iostream>
#include <vector>
using namespace std;

template <typename s>

void linSearch(vector<s> arr, s target)
{
    bool flag = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (target == arr[i])
        {
            flag = true;
        }
    }
    if (flag)
        cout << "Target found";
    else
    {
        cout << "Target not found";
    }
}
int main()
{

    vector<int> arr = {1, 3, 4, 5};
    linSearch(arr, 9);
}