#include <iostream>
#include "process.h"
#include "show_result.h"

using namespace std;

int main() {
    cout << "planning start" << endl;
    Process process;
    process.planProcess();
    cout << "planning done" << endl;
    
    cout << "show result start" << endl;
    ShowResult showResult;
    showResult.drawResult();

    return 0;
}
