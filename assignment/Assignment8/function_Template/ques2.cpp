#include <iostream>
#include <cmath>
using namespace std;

template <typename a>

void minele(a arr[], int size)
{
    a min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min << endl;
}

int main()
{

    int arr[] = {3, 4, 78, 9, -7,34,-789};
    int size = sizeof(arr) / sizeof(arr[0]);

    minele(arr, size);

    char arr2[] = {'m', 'k', 'o', 's', 'h', 'a'};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    minele(arr2, size2);
}