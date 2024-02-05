#include <iostream>
#include <vector>
using namespace std;

void rightRotateStep(vector<int> &arr, int times)
{
    vector<int> temp(times);
    int start = arr.size() - times;
    // TO get the last element
    for (int i = start, j = 0; i < arr.size(); i++, j++)
    {
        temp[j] = arr[i];
    }
    // TO put the items in the end
    for (int i = arr.size() - 1; i >= times; i--)
    {
        arr[i] = arr[i - times];
    }
    //
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, times;
    cout << "Enter the number of elements in the array and the number of times: ";
    cin >> n >> times;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number for array element " << i + 1 << ": ";
        cin >> arr[i];
    }

    rightRotateStep(arr, times);

    return 0;
}