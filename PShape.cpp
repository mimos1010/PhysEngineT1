#include "PShape.h"



PShape::PShape()
{
}


PShape::~PShape()
{
}

void PShape::CreateCirceShape(bool solid, int size, int posx, int posy) {
	circle_template.setRadius(size);
	circles.push_back(circle_template);
	circle_properties.push_back({ solid, size, posx, posy });
}

void PShape::UpdateCircleShape(RenderWindow &window)
{
	for (int i = 0; i < circles.size(); i++)
	{
		circles[i].setPosition(circle_properties[i]._posx, circle_properties[i]._posy);
		window.draw(circles[i]);
	}
}
