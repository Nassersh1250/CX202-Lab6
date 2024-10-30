#include <stdio.h>
#include <stdlib.h>

int vectadd(int size,int a,int b,int vect1[],int vect2[]){
	int vect3[size];
	for (int i = 0; i<size; i++){
		vect3[i] = a*vect1[i]+b*vect2[i];
	}

	for (int i = 0; i<size; i++){

		printf("%d ",vect3[i]);
	}

}


int main(){

	int size;
	int a;
	int b;

	printf("enter the size of the vector\n");
	scanf("%d",&size);

	int *arr1 = (int*)malloc(size*sizeof(int));
	int *arr2 = (int*)malloc(size*sizeof(int));
	int *arr3 = (int*)malloc(size*sizeof(int));

	printf("enter scalar value a:\n");
	scanf("%d",&a);

	printf("enter scalar value b:\n");
        scanf("%d",&b);
	
	for (int i = 0; i<size; i++){
		printf("input value of x(%d):\n",i);
		scanf("%d",&arr1[i]);
	}

	printf("x = \n");

	for (int j = 0; j<size; j++){
		printf("%d ",arr1[j]);
	}

	printf("\n");

	for (int m = 0; m<size; m++){
		printf("input value of y(%d):\n",m);
		scanf("%d",&arr2[m]);
	}
	
	printf("y = \n");

	for (int j = 0; j<size; j++){
                printf("%d ",arr2[j]);
        }
	
	printf("\n");

	printf("z = aX + bY = \n");
	
	vectadd(size,a,b,arr1,arr2);

	printf("\n");

	return 0;


}
