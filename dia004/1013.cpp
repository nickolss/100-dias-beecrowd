#include <iostream>

int main() {
	int a,b,c;
	
	std::cin >> a >> b >> c;
	
	if(c > b && c > a){
		printf("%d eh o maior\n", c);
	}else if(b > c && b > a){
		printf("%d eh o maior\n", b);
	}else{
		printf("%d eh o maior\n", a);
	}
	

	return 0;
}