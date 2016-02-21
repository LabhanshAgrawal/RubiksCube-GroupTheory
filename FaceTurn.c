#include <stdio.h>
int A[54];

void face(int x){
	printf("entered square with x = %d\n",x);
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

int main(){
	printf("entered main\n");
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
