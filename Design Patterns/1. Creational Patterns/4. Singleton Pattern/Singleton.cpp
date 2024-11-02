#include <iostream>
using namespace std;
class Singleton
{

public:
    static Singleton &getInstance()
    {
        static Singleton instance; // gurantee to be destroyed on completion of utility.
        return instance;
    }

private:
    Singleton()
    {
        cout << "creating object" << endl;
    }
    Singleton(Singleton const &) = delete;
    Singleton *operator=(Singleton const &) = delete;
    // copy constructor call ni hona chahiye aur isse koi bhi equate na kr paaye.
};

int main()
{
    Singleton &instance1 = Singleton::getInstance();
    Singleton &instance2 = Singleton::getInstance();
}