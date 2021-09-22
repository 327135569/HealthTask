#include <Windows.h>

#pragma comment(linker, "\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

int fakemain() {
    MessageBoxW(nullptr, L"请立刻活动颈椎以防止颈椎病!", L"健康提示", MB_OK);
    return 0;
}