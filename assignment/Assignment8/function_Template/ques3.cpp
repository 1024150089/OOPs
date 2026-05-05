#include <iostream>
#include <vector>
using namespace std;

template <typename m>
void bubbleSort(vector<m> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }

        if (!flag)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1, 0, -3, -6};
    bubbleSort(arr);

    return 0;
}