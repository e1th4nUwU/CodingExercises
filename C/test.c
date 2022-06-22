#include<stdio.h>

int main(){
	int c[2][3][4];
	int d=8;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<4; k++){
				c[i][j][k]=d;
				d+=2;
			}
		}
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			for(int k=0; k<4; k++){
				printf("%d ", c[i][j][k]);
			}
		}
	}

	printf("\n%d", c[1][2][2]);

	return 0;
}
