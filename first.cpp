include <iostream>
using namespace std;

// Однострочные комментарии

// 8 bit - 1 byte - 2^8 - 256 (0-255)
// 1000  0001 -128   +127
// short - 2 bytes 2^16
// - 2^15  + (2^15-1)


/** Multiline
*  Comment 
*  Sample
**/
int main(int argc, char *argv[]) { // Функция main
    cout << "Hello world!" << endl;
    cout << "Hello Informatics" << endl;

    int age = 25;
    cout << "Age = " << age <<" , size = " << sizeof(age) <<endl;
    age = 27;
    char sample = 'a';
    cout << "Age=" << age << endl;

    int code = 'g';
    char letter = 103;
    cout << letter << " in ASCII is " << code << endl;

    unsigned char source = (unsigned char)298;
    int target = source;
    cout <<"Source=" << sizeof(source) << ", Target=" << target << endl;

    int unsafe_source = 257;
    unsigned char unsafe_target = unsafe_source;
    int display = unsafe_target;
    cout <<"Source=" << unsafe_source << ", Target=" << display << endl;


    return 0;
}