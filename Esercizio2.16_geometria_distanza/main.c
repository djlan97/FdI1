
extern double distanza(struct punto *a, struct punto*b);

struct punto{
	double x, y;
};

int main(void){

	struct punto a = { 1.0, 1.0 };
	struct punto b = { 4.0, 7.0 };
	double d = distanza(&a, &b);


	return 0;
}