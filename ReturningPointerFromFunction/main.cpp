#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0)
{
    int *new_storage{nullptr};   // Create a null pointer
    new_storage = new int[size]; // Creates an array of rubbish data and points to it
    for (size_t i{0}; i < size; i++)
    {
        *(new_storage + i) = init_value;
    }
    return new_storage;
    /*
        loops through the array and assigns the initial value to each element.
        Pointer will be point to element [0] of the array
        and increaments one int's worth of bytes to the next element
    */
}

void display(const int *const array, size_t size)
{
    for (size_t i{0}; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
    cout << endl;
}

int main()
{
    int *my_array{nullptr};
    size_t size;
    int init_value{};

    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "\nWhat value would you them initalised to? ";
    cin >> init_value;

    //My array is now assigned to where new storage was pointing,
    //enabling it to access the array we created earlier
    my_array = create_array(size, init_value);
    cout << "\n--------------------" << endl;

    display(my_array, size);
    delete my_array;

    return 0;
}