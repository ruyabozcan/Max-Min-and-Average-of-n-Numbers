#include <stdio.h>

int main(void) {
  int n,max,min,i,num,sum=0;
  double avg;
  printf("Enter n:");
  scanf("%d",&n);
  printf("Enter %d numbers:",n);
  scanf("%d",&num); 
  sum=num;
  min=max=num;
  for(i=1;i<n;i++){
    scanf("%d",&num);
    sum+=num;
    if(num>max)
      max=num;
    else if(num<min)
      min=num;
  }
  avg=(double)sum/n;
  printf("The average=%.2lf",avg);
  printf("\nThe maximum=%d",max);
  printf("\nThe minimum=%d",min);
  
  return 0;
}
