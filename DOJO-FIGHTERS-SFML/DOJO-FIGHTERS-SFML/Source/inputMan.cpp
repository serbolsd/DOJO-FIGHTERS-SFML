#include "../include/InputMan.h"

void inputman::onUpdate(int controlID, CJugador & player)
{
	unsigned int buttonCount;
	unsigned int axisCount;

	Movimiento::WatchOponent(player,*player.objetive );
	if (player.IsDashing)
	{
		if (player.Direccion->x<0)
		{
			if (player.Position->x <= player.travel)
			{
				player.IsDashing = false;
				player.timeAction = 0;
			}
			else
			{
				Movimiento::Dash(player);
			}
		}
		else
		{
			if (player.Position->x >= player.travel)
			{
				player.IsDashing = false;
				player.timeAction = 0;
			}
			else
			{
				Movimiento::Dash(player);
			}
		}
		return;
	}
	if (sf::Joystick::isConnected(controlID))
	{
		if (sf::Joystick::isButtonPressed(controlID, 0))
		{
			//boton A
		}
		else if (sf::Joystick::isButtonPressed(controlID, 1))
		{
			//boton B
			if (player.Direccion->x!=0&&player.timeAction>player.character->timeDash)
			{
				player.IsDashing = true;
				player.Collider->Enable = false;
				player.travel =player.Position->x +(player.Direccion->x*player.character->distDash);
				Movimiento::Dash(player);
			}
		}
		else if (sf::Joystick::isButtonPressed(controlID, 2))
		{
			//boton X
		}
		else if (sf::Joystick::isButtonPressed(controlID, 3))
		{
			//boton Y
		}
		float axisX = sf::Joystick::getAxisPosition(controlID, sf::Joystick::X);
		if (axisX >= 10)
		{
			player.Direccion->x = 1;
			Movimiento::Move(player);
			return;
		}
		else if (axisX <= -10)
		{
			player.Direccion->x = -1;
			Movimiento::Move(player);
			return;
		}
		else
			player.Direccion->x = 0;

		float axisPovX = sf::Joystick::getAxisPosition(controlID, sf::Joystick::PovX);
		if (axisPovX >= 10)
		{
			player.Direccion->x = 1;
			Movimiento::Move(player);
			return;
		}
		else if (axisPovX <= -10)
		{
			player.Direccion->x = -1;
			Movimiento::Move(player);
			return;
		}
		else
			player.Direccion->x = 0;

		
	}
}