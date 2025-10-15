#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Array example
    int arr[] = {10, 20, 30, 40, 50};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Vector Example
    vector<int> list;
    
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    cout << "Vector elements: ";
    for (int i = 0; i < list.size(); i++)
        cout << list[i] << " ";

    return 0;
}
