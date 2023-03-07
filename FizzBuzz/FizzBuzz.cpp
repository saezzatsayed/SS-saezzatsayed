#include <iostream>
#include <cstring>
#include <string>
#include <cassert>
using namespace std;

void testModx();
void testMody();


int main (){
    int x,y,n;
    cin >> x >> y >> n;
    int z = n + 1;
    for (int i = 1; i < z ; i++){
        if (i % x == 0 && i % y == 0){
            cout << "FizzBuzz" << endl;
        }
        else if (i % x == 0){
            testModx(x,i);
            cout << "Fizz" << endl;
        }
        else if (i % y == 0){
            testMody(y,i);
            cout << "Buzz" << endl;
        }
        else{
            cout << i << endl;
        }
    }
    
    return 0;
}

void testModx(int x, int i) {
    assert(i % x == 0);
    cerr << "Test mod x passed";
}

void testMody(int y, int i) {
        assert(i % y == 0)
        cerr << "Test mod y passed";
}