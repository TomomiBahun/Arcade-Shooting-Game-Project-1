#include "DxLib.h"
#include "SystemMain.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SystemMain system;
	if (system.init()) {
		system.main();
	}
	system.deInit();
}