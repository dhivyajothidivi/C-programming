
  #include <stdio.h>
  int main() 
  {
        int  t,hour, timeinminute,timeinseconds;
        
	printf("Enter the value for minute:");
	scanf("%d", &timeinminute);

        printf("Enter the value for seconds:");
        scanf("%d", &timeinseconds);

      
        timeinminute = timeinminute + (timeinseconds) + (hour * 60 * 60);
        printf("Totalminutes in %02dH:%02dM:%02dS is %d\n",
                hour, timeinminute,timeinseconds);
        return 0;
  }
