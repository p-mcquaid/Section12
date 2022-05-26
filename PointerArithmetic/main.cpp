#include <iostream>

using namespace std;

int main()
{
    /* int scores[]{100, 95, 89, 65, -2};
    int *score_ptr{scores};

    while (*score_ptr != -2)
    {
        cout << *score_ptr << "/" << score_ptr << endl;

        score_ptr++;
    }

    cout << "-----OR-----" << endl;
    score_ptr = scores;
    while (*score_ptr != -2)
        cout << *score_ptr << "/" << score_ptr++ << endl; */
    
       /* Works due to the order of precedence, either dereferences the point or display it first then increments it
        same as the code above except in one line, commonly used in c++*/
    
    /* cout << "-------------" << endl;
    string s1{"Paul"}, s2{"Paul"}, s3{"Fearg"};
    string *p1{&s1},*p2{&s2},*p3{&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ":" << (p1 == p2) << endl; //False
    cout << *p1 << "==" << *p2 << ":" << (*p1 == *p2) << endl; //True
    cout << endl;
    cout << p1 << "==" << p3 << ":" << (p1 == p3) << endl; //True
    cout << *p1 << "==" << *p3 << ":" << (*p1 == *p3) << endl; //True

    p3 = &s3; // Point to james
    cout << endl << *p1 << "==" << *p3 << ":" << (*p1 == *p3); //False */

    cout << "---------" << endl;
    char name[]{"Paul"};
    char *char_ptr1{nullptr}, *char_ptr2{nullptr};

    char_ptr1 = &name[0];// P
    char_ptr2 = &name[3];// l

    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2-char_ptr1) << " characters away from " << *char_ptr1 << endl;

    cout << char_ptr2 << "-" << char_ptr1 << " = " << (char_ptr2-char_ptr1) << endl;
    cout << *char_ptr2 << "-" << *char_ptr1 << " = " << (char_ptr2-char_ptr1) << endl;
    cout << &char_ptr2 << "-" << &char_ptr1 << " = " << (char_ptr2-char_ptr1) << endl;
    cout << endl;

    return 0;
}
