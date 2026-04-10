#include <iostream>
#include "process.h"
using namespace std;

void Process::planProcess() {
    cout << "Plan process..." << endl;
    my_map.mapInfo();
    cout << "Plan process done." << endl;
}
