#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct{
	char name[64];
	char surname[64];
	int score[5];
	float total;
}std;


void readStdData(std *);
void findTotal(std *pt);
float findAvg(std *pt);


void findMax(std stdarr[], int *max, int size, int in);
void printMax(std stdarr[], int max, int size, int in);

void findMin(std stdarr[],int *min, int size, int in);
void printMin(std stdarr[],int min, int size, int in);

void theBest3(std *);

void findAvgMax(std stdarr[], float *maxavg, int size);
void printAvgMax(std stdarr[],float maxavg, int size);

void findAvgMin(std stdarr[], float *minavg, int size);
void printAvgMin(std stdarr[], float minavg, int size);

int compare(const void*x_co, const void*y_co){
	int x = *(int *)x_co;
	int y = *(int *)y_co;
	return y-x;
}


int main()
{
	int size,i,max,min;
	float maxAvg,minAvg;
	int ins,index[MAX];
	scanf("%d",&size);
	std std1[size];
	
	for(i=0;i<size;i++)
	{
		readStdData(&std1[i]);
		findTotal(&std1[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("%.2f\n",findAvg(&std1[i]));
	}
	
	printf("Enter size index: ");
	scanf("%d",&ins);
	for(i=0;i<ins;i++)
	{
		scanf("%d",&index[i]);
	}
	
	for(i=0;i<ins;i++)
	{
		findMax(std1,&max,size,index[i]-1);
		printMax(std1,max,size,index[i]-1);	
	}
	
	for(i=0;i<ins;i++)
	{
		findMin(std1,&min,size,index[i]-1);
		printMin(std1,min,size,index[i]-1);
	}
	printf("\n\n");
	
	findAvgMax(std1,&maxAvg,size);
	printAvgMax(std1,maxAvg,size);
	printf("\n\n");
	
	findAvgMin(std1,&minAvg,size);
	printAvgMin(std1,minAvg,size);
	
}


void readStdData(std *pt)
{
	scanf("%s",&pt->name);
	scanf("%s",&pt->surname);
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&pt->score[i]);
	}
}


void findMax(std stdarr[], int *max, int size, int in)
{
	int i,maxln=0;
	
	for(i=0;i<size;i++)
	{
		if(stdarr[i].score[in] > stdarr[maxln].score[in])
		{
			maxln = i;
		}
	}
	*max = stdarr[maxln].score[in];	
}

void printMax(std stdarr[], int max, int size, int in)
{
	int i;
	
	for(i=0;i<size;i++)
	{
		if(stdarr[i].score[in] == max)
		{
			printf("%s %d\n",stdarr[i].name,stdarr[i].score[in]);
		}		
	}
}

void findMin(std stdarr[],int *min, int size, int in)
{
	int i,minld=0;
	for(i=0;i<size;i++)
	{
		if(stdarr[i].score[in] < stdarr[minld].score[in])
		{
			minld = i;
		}
	}
	*min = stdarr[minld].score[in];
}



void printMin(std stdarr[],int min, int size, int in)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(stdarr[i].score[in] == min)
		{
			printf("%s %d\n",stdarr[i].name,stdarr[i].score[in]);
		}
	}
}


float findAvg(std *pt)
{
	return pt->total/5;
}

void findTotal(std *pt)
{
	int i;
	pt->total = 0.0;
	for(i=0;i<5;i++)
	{
		pt->total += pt->score[i];
	}
}


void theBest3(std *pt)
{
	int i;
	qsort(pt->score,5,sizeof(int),compare);
	
	printf("%s ",pt->name);
	for(i=0;i<3;i++)
	{
		printf("%d ",pt->score[i]);
	}
	printf("\n");
}


void findAvgMax(std stdarr[],float *maxavg, int size)
{
	int i;
	int maxin=0;
	for(i=0;i<size;i++)
	{
		if(findAvg(&stdarr[i]) > findAvg(&stdarr[maxin]))
		{
			maxin = i;
		}
	}
	*maxavg = findAvg(&stdarr[maxin]);
}


void printAvgMax(std stdarr[],float maxavg, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(findAvg(&stdarr[i]) == maxavg)
		{
			printf("%s %.2f\n",stdarr[i].name,findAvg(&stdarr[i]));
		}
	}
}


void findAvgMin(std stdarr[], float *minavg, int size)
{
	int i,minld = 0;
	for(i=0;i<size;i++)
	{
		if(findAvg(&stdarr[i]) < findAvg(&stdarr[minld]))
		{
			minld = i;
		}
	}
	*minavg = findAvg(&stdarr[minld]);
}

void printAvgMin(std stdarr[], float minavg, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(findAvg(&stdarr[i]) == minavg )
		{
			printf("%s %.2f\n",stdarr[i].name,findAvg(&stdarr[i]));
		}
	}
}
