#include <iostream>
#include <vector>
using namespace std;

int find_transposition(int value, vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == value)
        {
            if (i == 0)
                return 0; // Already at the beginning, no transposition needed

            // Swap the current element with the one before it
            swap(arr[i], arr[i - 1]);

            return i - 1; // Return the new index after transposition
        }
    }

    return -1; // If the value is not found
}

int main()
{
    int value, n;
    cout << "enter value and the size of the array";
    cin >> value >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int transpositionIndex = find_transposition(value, arr);

    if (transpositionIndex != -1)
    {
        cout << "Transposition at index: " << transpositionIndex << endl;
        cout << "Updated array: ";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Value not found in the array." << endl;
    }

    return 0;
}