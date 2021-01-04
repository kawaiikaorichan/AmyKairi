#include "SADXModLoader.h"
#include <stdio.h>

//Macros
#define ReplacePVM(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM");

extern "C"
{
	__declspec(dllexport) __declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		//Disable morphs
		WriteData<3>((void*)0x486400, 0x90u);
		WriteData<3>((void*)0x485F31, 0x90u);
		//Replace textures
		ReplacePVM("amy", "AmyKairi");
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}