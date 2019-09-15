#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n,Rt[20],Bu[20],Twt,Ttt,ts,A[20],Wt[20],w,btime=2,min=0,k=1,tat[20];
float Awt,Att;
char pname[20][20],c[20][20];

void get_data()
{
    int i;
    printf("\n Enter the number of processes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fflush(stdin);
        printf("\n\n Enter the process name: ");
        scanf("%s",pname[i]);
        printf("\n Enter The BurstTime for Process %s = ",pname[i]);
        scanf("%d",&Bu[i]);
	Rt[i]=Bu[i];
        printf("\n Enter the Arrival Time for Process %s =  ",pname[i]);
        scanf("%d",&A[i]);
    }
	printf("Enter Time_slice : ");
	scanf("%d",&ts);
}

void round_robin()
{
	int count = 0,flag = 0;
	int remaining = n;
	int time = 0;
	printf("\n\nProcess\t|turnaround Time|Waiting Time\n\n");
	for(time = 0,count = 0;remain!=0)
	{
		if(Rt[count]<=tc && Rt[count] > 0)
		{
			time += Rt[count];
			Rt[ount] = 0;
			flag = 1;
		}
		else if(Rt[count] > 0)
		{
			Rt[count] -= tc;
			time += tc;
		}
		if(Rt[count] == 0 && flag == 1)
		{
			remain--;
			printf("P[%d]\t|\t%d\t|\t%d\n",count+1,time-At[count],time-At[count]-Bu[count]);
			Twt += time-At[count]-Bu[count];
			Ttt += time - At[count];
			flag = 0;
		}
		if(count == n-1)
			count = 0;
		else if(At[count+1] <= time)
			count++;
		else 
			count = 0;
	}
	printf("\nAverage Waiting Time= %f\n",Twt*1.0/n); 
	printf("Avg Turnaround Time = %f",Ttt*1.0/n); 
}
void main()
{
	round_robin();
}
