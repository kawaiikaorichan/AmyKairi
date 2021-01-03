#include "SADXModLoader.h"
#include <stdio.h>

//Macros
#define ReplacePVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM");

extern "C"
{
	__declspec(dllexport) __declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		ReplacePVM("amy", "AmyKairi");
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}