#include "pch.h"
#include <iostream>
#include <math.h>
#include "darts.h"

int main()
{
	int darts(int x, int y) {
		double r;
		int points;
		points = sqrt(x*x + y * y);
		if (points >= 0 && r < 1) {
			points = 5;
		}
		else if (r >= 1 && r < 2) {
			points = 4;
		}
		else if (r >= 1 && r < 2) {
			points = 3;
		}
		else if (r >= 2 && r < 3) {
			points = 2;
		}
		else if (r >= 3 && r < 4) {
			points = 1;
		}
		else if (r >= 4 && r < 5) {
			points = 0;
		}
		return points;
	}
}

