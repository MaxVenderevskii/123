#include "first_root.h"
#include "det.h"
#include <cmath>

double first_root(double a, double b, double c) {
	return (-b - sqrt(det(a, b, c))) / 2 / a;
}