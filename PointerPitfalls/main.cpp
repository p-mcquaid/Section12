#include <iostream>

using namespace std;

int main(){

    #pragma region Uninitialised Pointers
    //Pointer is assigned a random address when not given a one specifically, could lead to the deletion of an important
    //part of memory if it is initalised later, always best to initalise with {nullptr}

    /* int *int_ptr;

    *int_ptr = 100; */
   #pragma endregion

    #pragma region Dangling Pointers
    //Happens when the data a pointer is pointing to is deleted or rendered untouchable
    //i.e. 2 pointers pointing to the same address and one pointer releases the data,
    //now the pointer is pointing to something unrelated
    #pragma endregion

    #pragma region Not checking if new failed
    //if new fails an exception is thrown
    //for example dereferencing a null pointer causes a crash because new failed
    #pragma endregion

    #pragma region Leaking Memory
    //If memory isn't released and reference to it is lost, that results in a memory leak
    //as it sits there and cannot be accessed again
    //Most common problem when using pointers
    #pragma endregion
    return 0;
}