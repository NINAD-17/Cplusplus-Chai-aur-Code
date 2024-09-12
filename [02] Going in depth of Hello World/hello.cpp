#include <iostream>
// using namespace std;

using std::cout;
using std::endl;

// Custom namespace
namespace myName {
    void display() {
        // comment
    }
}

int main() {
    myName::display();
    // std::cout << "Hello World!" << std::endl;

    cout << "Hello World!" << endl;
}