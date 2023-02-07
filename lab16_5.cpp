#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b, int *c, int *d){
	int data[] = {*a,*b,*c,*d};
	*a = data[rand()%4];
	do{
		*b = data[rand()%4];
	}while(*b == *a);
	do{
		*c = data[rand()%4];
	}while(*c == *a || *c == *b);
	do{
		*d = data[rand()%4];
	}while(*d == *a || *d == *b || *d == *c);
}
