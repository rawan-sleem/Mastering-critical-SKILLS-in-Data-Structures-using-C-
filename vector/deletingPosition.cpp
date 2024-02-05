#include <iostream>
#include <vector>
using namespace std;

int pop(vector<int> &vec, int index)
{
    if (index < 0 || index >= vec.size())
    {
        cout << "Invalid index!" << endl;
        return -1; // Return some invalid value to indicate failure
    }

    int temp = vec[index];

    // Shift the elements to fill the gap
    for (int i = index + 1; i < vec.size(); i++)
    {
        vec[i - 1] = vec[i];
    }

    // Resize the vector to remove the last element
    vec.resize(vec.size() - 1);

    return temp;
}

int main()
{
    int n, index;
    cout << "Enter the number of elements in the array and the index to pop: ";
    cin >> n >> index;

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int poppedValue = pop(arr, index);

    if (poppedValue != -1)
    {
        cout << "Popped value: " << poppedValue << endl;
        cout << "Updated array: ";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}