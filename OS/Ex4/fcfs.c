#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n,Bu[20],Twt,Ttt,A[10],Wt[10],w;
float Awt,Att;
char pname[20][20],c[20][20];


void Getdata()
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
        printf("\n Enter the Arrival Time for Process %s =  ",pname[i]);
        scanf("%d",&A[i]);
    }
}
//DISPLAYING THE GANTT CHART
void Gantt_chart()
{
    int i;
    printf("\n\n\t\t\tGANTT CHART\n");
    printf("\n-----------------------------------------------------------\n");
    for(i=1;i<=n;i++)
        printf("|\t%s\t",pname[i]);
    printf("|\t\n");
    printf("\n-----------------------------------------------------------\n");
    printf("\n");
    for(i=1;i<=n;i++)
        printf("%d\t\t",Wt[i]);
    printf("%d",Wt[n]+Bu[n]);
    printf("\n-----------------------------------------------------------\n");
    printf("\n");
 }
//CALCULATING AVERAGE WAITING TIME AND AVERAGE TURN AROUND TIME
void Calculate()
{
    int i;
    Wt[1]=0;
    for(i=2;i<=n;i++)
    {
        Wt[i]=Bu[i-1]+Wt[i-1];
    }
    for(i=1;i<=n;i++)
    {
        Twt=Twt+(Wt[i]-A[i]);
        Ttt=Ttt+((Wt[i]+Bu[i])-A[i]);
    }
    Att=(float)Ttt/n;
    Awt=(float)Twt/n;
    printf("\n\n Average Turn around time=%3.2f ms ",Att);
    printf("\n\n AverageWaiting Time=%3.2f ms",Awt);
}
//FCFS Algorithm
void fcfs()
{
    int i,j,temp, temp1;
    Twt=0;
    Ttt=0;
    printf("\n\n FIRST COME FIRST SERVED ALGORITHM\n\n");
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(A[i]>A[j])
            {
                temp=Bu[i];
                temp1=A[i];
                Bu[i]=Bu[j];
                A[i]=A[j];
                Bu[j]=temp;
                A[j]=temp1;
                strcpy(c[i],pname[i]);
                strcpy(pname[i],pname[j]);
                strcpy(pname[j],c[i]);
            }
        }
    }
    Calculate();
    Gantt_chart();
}


void main()
{
    int ch;
    Getdata();
    printf("\n Enter your choice:\n1.FCFS\n2.SJF\n3.EXIT");
    scanf("%d",&ch);
    switch(ch)
    {
	case 1:
    		fcfs();
    		break;
        case 2:
		printf("in progress");
		break;
	case 3:
		exit(1);
		break;
    }
}	
