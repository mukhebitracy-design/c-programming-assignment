  /*
NAME:TRACY NEKESA
REG NO:PA106/G/28737/25.
Description:A programme to read transactions from a sales.txt file calculates and displays the total sales for the day and ensures the file is closed properly after reading
*/
#include<stdio.h>//preproccesor directive
int main(){
    FILE *salesptr;//creation of pointer variable
     int num;
     int sum =0;
    salesptr=fopen("sales.txt","r");//reads the data in the  sales.txt files
   while (fscanf(salesptr, "%d", &num) == 1) {//ensures all the integers are read
    sum+=num;//Calculates the sum
    printf("%d\n", num);
}
printf("The total sales for today are %d",sum);//prints out the sum
fclose(salesptr);
return 0;
}