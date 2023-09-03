#include <stdio.h>

int gcd(int a, int b){

	int flag = 0;

	if (a > b){
jump:
		int r;
		r = a%b;
		for(;r != 0;){

			int tmp;
			tmp = b%r;
			b = r;
			r = tmp;

		}
		if (flag == 1)
			goto bfrEnd;
	}
	else if (a < b){

		int t = a;
		a = b;
		b = t;
		flag = 1;
		goto jump;
		
	}
bfrEnd:
	return b;
}

int main(){

	int a, b;
	printf("Enter number: \n");
	scanf("%d", &a);
	printf(" / \n");
	scanf("%d", &b);

	int d = gcd( a, b);
	printf("Reduced form: \n%d/%d", a/d, b/d);
	return 0;

}
