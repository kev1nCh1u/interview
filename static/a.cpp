#include <iostream>
using namespace std;
bool debug = true;
void show_debug_in_a() {
    cout << debug << endl;
    debug=0;
}