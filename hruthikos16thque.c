#include<stdio.h>
int main()
{
  int k,m,n;
  int tym,balance;
  int flag=0,tym_quantum=10;
  int waiting_tym=0,turn_around_tym=0,arrival_tym[10],burst_tym[10],rt[10];
  printf("\n\nEnter the Total number of Processes:\t ");
  scanf("%d",&n);
  balance=n;
  for(k=0;k<n;k++)
  {
    printf("Enter Arrival Tym and Burst Tym for Process Number %d :",k+1);
    scanf("%d",&arrival_tym[k]);
    scanf("%d",&burst_tym[k]);
    rt[k]=burst_tym[k];
  }
  printf("Enter Tym Quantum:%d\t",tym_quantum);
 
  printf("\n\nProcess\t|Turnaround Tym|Waiting Tym\n\n");
  for(tym=0,k=0;balance!=0;)
  {
    if(rt[k]<=tym_quantum && rt[k]>0)
    {
      tym=tym+rt[k];
      rt[k]=0;
      flag=1;
    }
    else if(rt[k]>0)
    {
      rt[k]=rt[k]-tym_quantum;
      tym=tym+tym_quantum;
    }
    if(rt[k]==0 && flag==1)
    {
      balance--;
      printf("P[%d]\t|\t%d\t|\t%d\n",k+1,tym-arrival_tym[k],tym-arrival_tym[k]-burst_tym[k]);
      waiting_tym=waiting_tym+tym-arrival_tym[k]-burst_tym[k];
      turn_around_tym=turn_around_tym+tym-arrival_tym[k];
      flag=0;
    }
    if(k==n-1)
      k=0;
    else if(arrival_tym[k+1]<=tym)
      k++;
    else
      k=0;
  }
  printf("\nAverage Waiting Tym= %f\n",waiting_tym*1.0/n);
  printf("Avg Turnaround Tym = %f",turn_around_tym*1.0/n);
 
  return 0;
}
