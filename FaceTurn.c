#include <stdio.h>
int A[54];

void func0(){
	printf("entered func0");
	int a,b,c;
	a=A[15];
	b=A[14];
	c=A[13];
	A[15]=A[42];
	A[14]=A[41];
	A[13]=A[40];
	A[42]=A[33];
	A[41]=A[32];
	A[40]=A[31];
	A[33]=A[24];
	A[32]=A[23];
	A[31]=A[22];
	A[24]=a;
	A[23]=b;
	A[22]=c;
	return;
}

void func1(){
	printf("entered func1");
	int a,b,c;
	a=A[47];
	b=A[46];
	c=A[45];
	A[47]=A[40];
	A[46]=A[39];
	A[45]=A[38];
	A[40]=A[2];
	A[39]=A[1];
	A[38]=A[0];
	A[2]=A[18];
	A[1]=A[25];
	A[0]=A[24];
	A[18]=a;
	A[25]=b;
	A[24]=c;
	return;
}

void func2(){
	printf("entered func2");
	int a,b,c;
	a=A[45];
	b=A[52];
	c=A[51];
	A[15]=A[13];
	A[14]=A[12];
	A[13]=A[11];
	A[42]=A[4];
	A[41]=A[3];
	A[40]=A[2];
	A[33]=A[27];
	A[32]=A[34];
	A[31]=A[33];
	A[24]=a;
	A[23]=b;
	A[22]=c;
	return;
}

void func3(){
	printf("entered func3");
	int a,b,c;
	a=A[51];
	b=A[50];
	c=A[49];
	A[15]=A[22];
	A[14]=A[21];
	A[13]=A[20];
	A[42]=A[6];
	A[41]=A[5];
	A[40]=A[4];
	A[33]=A[36];
	A[32]=A[43];
	A[31]=A[42];
	A[24]=a;
	A[23]=b;
	A[22]=c;
	return;
}

void func4(){
	printf("entered func4");
	int a,b,c;
	a=A[49];
	b=A[48];
	c=A[47];
	A[15]=A[31];
	A[14]=A[30];
	A[13]=A[29];
	A[42]=A[0];
	A[41]=A[7];
	A[40]=A[6];
	A[33]=A[9];
	A[32]=A[16];
	A[31]=A[15];
	A[24]=a;
	A[23]=b;
	A[22]=c;
	return;
}

void func5(){
	printf("entered func5");
	int a,b,c;
	a=A[11];
	b=A[10];
	c=A[9];
	A[15]=A[20];
	A[14]=A[19];
	A[13]=A[18];
	A[42]=A[29];
	A[41]=A[28];
	A[40]=A[27];
	A[33]=A[38];
	A[32]=A[37];
	A[31]=A[36];
	A[24]=a;
	A[23]=b;
	A[22]=c;
	return;
}

void square(int x){
	printf("entered square with x = %d",x);
	int a,b,c;
	a=A[9*x+7];
	b=A[9*x+6];
	for(c=7;c>1;c--){
		A[9*x+c]=A[9*x+c-2];
	}
	A[9*x+1]=a;
	A[9*x]=b;
	return;
}

void face(int x){
	printf("entered face with x = %d",x);
	switch(x){
		case 0 :
			func0();
			break;
	
		case 1 :
			func1();
			break;
	
		case 2 :
			func2();
			break;
	
		case 3 :
			func3();
			break;
	
		case 4 :
			func4();
			break;
	
		case 5 :
			func5();
			break;
	
		default :
			printf("Invalid face");return;
	}
	square(x);
	return;
}

int main(){
	printf("entered main");
	int i,x=0,count1=1,B[27],count2=0,p=0;
	for(i=0;i<54;i++){
		A[i]=i;
	}
	face(2);face(1);face(1);face(1);
	for(i=0;i<54;i++){
		if(A[i]!=i){
			x=A[i];
			A[i]=i;
			while(x!=i){
				p=A[x];
				A[x]=x;
				x=p;
				count1++;
			}
			B[count2]=count1;
			count2++;
			count1=1;
		}
	}
	B[count2]=0;
	for(i=0;B[i]!=0;i++){
		printf("%d\n",B[i]);
	}
	return 0;
}
