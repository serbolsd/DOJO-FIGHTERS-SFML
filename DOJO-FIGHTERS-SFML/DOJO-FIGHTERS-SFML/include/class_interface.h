#pragma once
#include "../include/Barras.h"

//sf time;
class  interface
{
	protected:
		//Miembros
		float speedo = 0;
		float speedo_dash = 0;

		float damage_lighto = 0;
		float damage_heavy = 0;
		float damage_special_lighto = 0;
		float damage_special_heavy = 0;
		float damage_supreme = 0;

		sf::Time delay_lighto;
		sf::Time delay_heavy;
		sf::Time delay_special_lighto;
		sf::Time delay_special_heavy;
		sf::Time delay_supreme;


		//

		//Metodos
		virtual void on_init();
		virtual void on_update();
		virtual void on_delete();
};