#include <iostream>

int main()
{
	const int maxLimit = 20000;
	size_t size;
	int* mass1, *mass2;
    int ssize;
	scanf("%lu",&size);
    ssize=size;
	if (ssize < 1 || ssize > maxLimit)
		return 1;
	else
	{
		mass1 = (int*)calloc(size , sizeof(int));
		mass2 = (int*)calloc(size , sizeof(int));
//		mass1 = new int[size];
//		mass2 = new int [size+2];

		for (size_t i = 0; i < size; i++)
			scanf("%d",mass1[i]);

		//initialization
		for(size_t i=0;i<size;i++)
			mass2[i]=0;

		for (size_t i = 1; i <= size && mass1[i] <= ssize && mass1[i]>0; i++)
			mass2[mass1[i]] = i;
        
		for (size_t i = 1; i <= size; i++)
			printf("%d ",mass2[i] + 1);

	}
	return 0;
}
