#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void insert_into_array(int array[], int &initial_size, int index, int value)
{
    if (index < 0 || index > initial_size)
    {
        cout << "Invalid index\n";
        return;
    };
    for (int end = initial_size; end > index; end--)
    {
        array[end] = array[end - 1];
    };

    array[index] = value;
    initial_size++;
};

int main()
{

    int initial_size = 6;
    int array[MAX_SIZE] = {1, 2, 3, 4, 5, 6};
    insert_into_array(array, initial_size, 3, 6);

    for (int i = 0; i < initial_size; i++)
        cout << array[i] << endl;
    return 0;
};