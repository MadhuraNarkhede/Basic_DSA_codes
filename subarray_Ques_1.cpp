//Write the code to find the smallest window in the array that will give the sum as s.

#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = 0, st = -1, en = -1, sum = 0;

    // Expand the window to find the first valid subarray
    while (j < n && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }

    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }

    // Shrink and expand the window to find the subarray
    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            st = i;
            en = j;
            break;
        }
        j++;
    }

    if (st == -1) // If no subarray was found
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << st + 1 << " " << en + 1 << endl; // Convert to 1-based index
    }

    return 0;
}
