#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class HelloWorld{
    
    char* name;
    char* addr;

public:
    HelloWorld(const char* name, const char* addr);
    ~HelloWorld();
    void print() const;
    };

HelloWorld::HelloWorld(const char* name, const char* addr)
{
 this->name = new char[strlen(name)+1];
 strcpy(this->name, name);
 this->addr = new char[strlen(addr)+1];
 strcpy(this->addr, addr);
};

HelloWorld::~HelloWorld()
{
    delete [] name;
    delete [] addr;
}

void HelloWorld::print() const
{
    cout<< name <<" "<< addr << endl;
}

int main()
{
    HelloWorld *h1 = new HelloWorld("Hello", "World!");
    h1->print();
    delete h1; 
}
