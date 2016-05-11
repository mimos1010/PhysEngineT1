#pragma once

#include "mainprojinc.h"
#include "WinLoop.h"

int main()
{
	//Initialize the render window
	RenderWindow window;
	window.create(VideoMode(DEFAULT_WIN_WIDTH, DEFAULT_WIN_HEIGHT), WIN_NAME);

	//Create a new WinLoop (mainLoop) and run the MainWinLoop function for mainLoop
	WinLoop mainLoop;
	mainLoop.MainWinLoop(window);

	return 0;

}
