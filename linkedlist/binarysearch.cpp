#include <string>
#include <iostream>

using namespace std;

// int mid = 0;
int search(int num, int beg, int len, int *arg)
{
    int mid = (len + beg) / 2;
    if (beg <= len)
    {
        if (arg[mid] == num)
            return 1;
        else if (num < arg[mid])
            return search(num, beg, mid-1, arg);
        return search(num, mid + 1, len, arg);
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        perror("Usage: Enter array elements in sorted order");
    }
    int arr[100];
    int i;
    for (i = 0; i < argc - 1; i++)
    {
        arr[i] = atoi(argv[i + 1]);
        // cout<<arr[i]<<endl;
    }
    int num;
    cout << "Enter a number to search" << endl;
    cin >> num;
    if (search(num, 0, i - 1, arr) == 1)
    {
        cout << "number is found" << endl;
    }
    else
    {
        cout << "number is not found" << endl;
    }
    return 0;
}