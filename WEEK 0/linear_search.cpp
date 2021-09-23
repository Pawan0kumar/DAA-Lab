#include <iostream>
using namespace std;

int linear_search(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int key;
        cin >> key;

        int flag = linear_search(arr, n, key);

        if (flag == -1)
            cout << "not found!!";
        else
            cout << "found at index "<<flag;
    }

    return 0;
}