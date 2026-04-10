#include <iostream>
#include "process.h"

using namespace std;

int main() {
    cout << "planning start" << endl;
    Process process;
    process.planProcess();
    cout << "planning done" << endl;
    return 0;
}
