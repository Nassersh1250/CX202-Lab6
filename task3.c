#include <stdio.h>
#include <stdlib.h>
#include <fenv.h>


int main(){

	
	int *arr1 = (int*)malloc(sizeof(int));
	int i=0;
	int n = 0;
	int num = 0;
	char y;
	while (n==0){

		printf("Enter sample integer value\n");
		scanf("%d",&num);

		arr1[i] = num;

		printf("Do you want to enter more values? y/n\n");
		scanf(" %c",&y);

		if (y == 'y'){

			i++;
			arr1 = (int*)realloc(arr1,(i+1)*sizeof(int));

		}
		else {
			n++;
		}

	}
	int sum = 0;
	for (int j = 0; j<=i; j++){
		sum+=arr1[j];
	}

	printf("your entered values are : ");

	for (int j = 0; j<=i; j++){
		printf("%d ",arr1[j]);
	}

	int avg = sum/(i+1);

	printf("\nDC average is : %d\n",avg);
	
	printf("Final adjusted samples after DC shift = ");

	for (int j = 0; j<=i; j++){
		arr1[j] = arr1[j] - avg;
		printf("%d ", arr1[j]);
	}
	
	printf("\n");

	return 0;
}


