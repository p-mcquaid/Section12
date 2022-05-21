#include <iostream>

using namespace std;

int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int;

    cout << int_ptr << endl;  // Addres new int has been allocated in memory
    cout << *int_ptr << endl; // Nonsense data stored in the address

    *int_ptr = 100; // Allocate 100 in the address pointer is pointing to

    cout << *int_ptr << endl; // 100

    delete int_ptr;

    cout <<"\n---------------" << endl;
    size_t size{0};
    double *temp_ptr{nullptr};

    cout <<"How many temps?: ";
    cin >> size;

//Will cause a memory leak and crash windows, isn't caught by the IDE strangly
  /*   while (true)
    {
        temp_ptr = new double[size];
    } */
    
    temp_ptr = new double[size];
    cout << temp_ptr << endl;

    delete temp_ptr;
    return 0;
}