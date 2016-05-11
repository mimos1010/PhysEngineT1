#include "WinLoop.h"
#include "PShape.h"


WinLoop::WinLoop()
{
}


WinLoop::~WinLoop()
{
}

void WinLoop::MainWinLoop(RenderWindow &window)
{

	while (window.isOpen())
	{
		InputCheck inputLoop;

		inputLoop.CheckInputs(window);

		window.clear();

		window.display();
	}
}
