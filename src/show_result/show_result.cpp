// // 必须先引入头文件，解决 FILE 未定义问题
// #include <stdio.h>

// // 修复 MinGW 15.2.0 + EasyX 兼容报错：__imp___iob_func
// #ifdef __MINGW64__
// extern "C" {
//     FILE* __cdecl __imp___iob_func() {
//         return __acrt_iob_func(0);
//     }
//     FILE* __cdecl __iob_func() {
//         return __acrt_iob_func(0);
//     }
// }
// #endif

// 直接去easyx.h里面添加一行
// void *__imp___iob_func = 0;
// 这样也能解决MinGW和EasyX的兼容性问题了

#include "show_result.h"
#include <iostream>
#include <graphics.h>
using namespace std;

void ShowResult::drawResult(){
    initgraph(1000, 1000);
    setbkcolor(WHITE);
    cleardevice();

    cout << "Draw circle" << endl;
    setlinecolor(BLACK);
    setlinestyle(PS_SOLID, 4);
    circle(500, 500, 200);
    circle(500, 500, 400);

    system("pause");
    closegraph();
}
