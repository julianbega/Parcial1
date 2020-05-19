#pragma once

#include "ejer1.h"

namespace parcial
{
	void mostrarCreditos()
	{
		cout << "Bega Julian, visual studio 2017";
	}


	float diferencia(float num1, float num2)
	{
		float dif = 0;
		if (num1 >= num2) dif = num1 - num2;
		else dif = num2 - num1;

		return dif;
	}
}