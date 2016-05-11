#pragma once
#include "mainprojinc.h"


class PShape
{
public:
	PShape();
	~PShape();

	Vector2f position;

	//Circle declarations --------
	
	void CreateCirceShape(bool solid, int size,int posx, int posy); //Takes in the solidity, shape size, x position, and y position
	void UpdateCircleShape(RenderWindow &window); //draws and updates circle 


private:

	//Circle properties and variables
	struct CircleProps{
		bool is_solid;
		int _size;
		int _posx;
		int _posy;
	};

	CircleShape circle_template = CircleShape();
	vector <CircleProps> circle_properties;
	vector <CircleShape> circles;

};

