#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void delete_from_array(int array[], int &initial_size, int index)
{
    if (index >= initial_size || index < 0)
    {
        cout << "Invalid index\n";
        return;
    };
    for (int start = index; start < initial_size - 1; start++)
    {
        array[start] = array[start + 1];
    };
    initial_size--;
};

int main()
{

    int initial_size = 5;
    int array[MAX_SIZE] = {1, 2, 3, 4, 5};
    delete_from_array(array, initial_size, 4);
    for (int start = 0; start < initial_size; start++)
        cout << array[start] << endl;
    return 0;
};