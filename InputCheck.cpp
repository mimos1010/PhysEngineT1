#include "InputCheck.h"



InputCheck::InputCheck()
{
}


InputCheck::~InputCheck()
{
}

void InputCheck::CheckInputs(RenderWindow &windowx) {

	Event event;
	while (windowx.pollEvent(event)) // While an event is occurring
	{

		switch (event.type) //Switch on type of event
		{

			case Event::Closed:		//Important type of event that allows us to close the window and end the program
				windowx.close();
				break;
			

			case Event::KeyPressed:	//Keyboard Input event, if any key is pressed it will get triggered

				switch (event.key.code)
				{
				case Keyboard::W:


					cout << "circle size: " << "\n";

					break;
				case Keyboard::S:


					cout << "circle size: " << "\n";

					break;
				}
				break;

			case Event::MouseButtonPressed: //Mouse input event, if any mouse button it will get triggered
			
				switch (event.mouseButton.button)
				{
				case Mouse::Left:

					PShape circle;
					circle.CreateCirceShape(true, 50, Mouse::getPosition().x, Mouse::getPosition().y);

					break;
				}
				break;
		}
	}
}
