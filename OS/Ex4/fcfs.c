#include<stdio.h>
int main()
{
    int i,n,process[20],wait[20],tat[20],burst[20];
    printf("Enter the number of processes(<20) : ");
    scanf("%d",&n);
    printf("\nEnter the burst time of %d process continuously...\n",n);
    wait[0]=0;
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&burst[i]);
        if(i>0)
            wait[i]=wait[i-1]+burst[i-1];
        tat[i]=wait[i]+burst[i];
    }
    for(i = 0 ; i < n ; i++)
    {
        printf("\nprocess : %d :\n",i+1);
        printf("wait time : %d\n",wait[i]);
        printf("burst time : %d\n",burst[i]);
        printf("total turnaround time : %d\n",tat[i]);
    }
    return 0;
}