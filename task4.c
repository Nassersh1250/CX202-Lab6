#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int size = 0;
	int *stack=(int*)malloc(size*sizeof(int));
	char y;
	int num;
	int n = 0;


	while (n==0){

		printf("enter a command(p to push, o to pop, d to display current pushed values, e to exit :\n");
		scanf(" %c",&y);

		if (y == 'p'){
			printf("Enter integer to push\n");
			scanf("%d",&num);
			size++;
			stack = (int*)realloc(stack,(size+1)*sizeof(int));
			stack[size] = num;
		}

		else if (y == 'o'){
			printf("popped %d\n",stack[size]);
			size--;
			stack = (int*)realloc(stack,(size+1)*sizeof(int));
		}
		else if (y=='d'){
			printf("current stack : ");
			for (int i = size; i>0; i--){
				printf("%d ",stack[i]);
			}

			printf("\n");
		}
		else if (y == 'e'){
			n++;
		}
		else {
			printf("error\n");
		}
	}

	return 0;
}


