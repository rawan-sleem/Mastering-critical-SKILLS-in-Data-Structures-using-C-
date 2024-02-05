#include <iostream>
#include <vector>
using namespace std;

void left_rotate_step(vector<int> &arr, int times)
{
    vector<int> temp(times);

    // Copy the first 'times' elements to a temporary vector
    for (int i = 0; i < times; i++)
    {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left
    for (int i = times; i < arr.size(); i++)
    {
        arr[i - times] = arr[i];
    }

    // Copy back the elements from the temporary vector to the end
    for (int i = arr.size() - times; i < arr.size(); i++)
    {
        arr[i] = temp[i - (arr.size() - times)];
    }

    // Print the updated array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, times;
    cout << "Enter the number of elements and the number of times to rotate: ";
    cin >> n >> times;

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    left_rotate_step(arr, times);

    return 0;
}