#include <iostream>
#include <vector>
#include <string>
using namespace std;
void left_rotate(vector<int> &arr)
{
    int temp = arr[0];
    for (int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = temp;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter the number of array elements :";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    left_rotate(arr);
    return 0;
}