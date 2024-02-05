
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void rightRotation(vector<int> &arr)
{
    int temp = arr[arr.size() - 1];
    for (int i = arr.size() - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr;
    int n;
    cout << "enter the number of the array: ";
    cin >> n;
    arr.resize(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rightRotation(arr);
    return 0;
}