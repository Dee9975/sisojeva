#include <iostream>
#include <string>

class Hello {
    public:
        char name[20];
        void sayHello() {
            std::cout << "\nHello" << std::endl;
        }
};

int main() {
    Hello howdy;
    howdy.sayHello();
}