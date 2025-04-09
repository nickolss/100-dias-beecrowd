#include <stdio.h>

int main() {
	float a,b,c, media;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	media = ((2 * a) + (3 * b) + (5 * c)) / 10;
	printf("MEDIA = %.1f\n", media);
	return 0;
}