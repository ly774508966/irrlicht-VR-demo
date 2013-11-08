// This is a Demo of the Irrlicht Engine (c) 2005 by N.Gebhardt.
// This file is not documentated.

#include <irrlicht.h>
#ifdef _IRR_WINDOWS_
#include <windows.h>
#endif

#include <stdio.h>

#include "CMainMenu.h"
#include "CDemo.h"
//#include  <EMADevice.h>





using namespace irr;

#ifdef _WIN32

#pragma comment(lib, "Irrlicht.lib")
INT WINAPI WinMain( HINSTANCE hInst, HINSTANCE, LPSTR strCmdLine, INT )
#else
int main(int argc, char* argv[])
#endif
{
	bool fullscreen = false;
	bool music = true;
	bool shadows = false;
	bool additive = false;
	bool vsync = false;

//	EMADevice * z800 = NULL;
//	z800 = new EMADevice();

	video::E_DRIVER_TYPE driverType = video::EDT_OPENGL;



	struct p5glove_data info;
	int sample;




	CMainMenu menu;

//#ifndef _DEBUG
	if (menu.run(fullscreen, music, shadows, additive, vsync, driverType))
//#endif
	{
		CDemo demo(fullscreen, music, shadows, additive, vsync, driverType);
		demo.run();
	}

	return 0;
}

