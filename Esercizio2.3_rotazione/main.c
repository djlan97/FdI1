#define _USE_MATH_DEFINES
#include <math.h>
struct punto{
	double x, y;
};

void rotazione(struct punto *p, double alfa){
	struct punto tmp;
	tmp.x = ((p->x)*cos(alfa)) - (p->y*sin(alfa));
	tmp.y = ((p->x)*sin(alfa)) + (p->y*cos(alfa));
	*p = tmp;
}

int main(void){
	struct punto p={1.0, 0.0};
	struct punto p1;
	double gradi;

	for (gradi = 0.0; gradi < 360.0; gradi += 45.0){
		double alfa = gradi / 180.0*M_PI;
		p1 = p;
		rotazione(&p1, alfa);
	}
	return 0;
}