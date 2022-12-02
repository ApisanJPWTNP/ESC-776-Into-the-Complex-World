#include <bits/stdc++.h>
using namespace std;

float rand_FloatRange(float a, float b)
{
    return ((b - a) * ((float)rand() / RAND_MAX)) + a;
}

int main(){
	int c=0,loop;
	cout <<"input num of loop:";
	cin >> loop;
	srand((unsigned int)time(NULL));
	for (int i=0;i<loop;i++){
		double a=rand_FloatRange(-1.0,1.0);
		double b=rand_FloatRange(-1.0,1.0);
		if (a*a+b*b<=1){
			c++;
		}
	}
	cout << c*4.0/loop <<endl;
}
