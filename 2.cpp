// Example program
#include <iostream>
#include <thread>

using namespace std;

class A {
public:
    void operator() (int a , int b){
        cout << a + b;
    }
};

int main() {
    int a, b=0;
    thread f1 { [] () { 
        int a, b;
          cin >> a >> b;
          cout << a + b;
        }
    };    
    f1.join();
    cout << endl;
    cin >> a >> b;
    A object;
    thread f2 (object, a, b);
    f2.join();
    return 0;
}
