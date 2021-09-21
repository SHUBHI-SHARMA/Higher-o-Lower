#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguess=0;
    srand(time(0));
    number = rand()%100+1;
    //printf("the number is %d\n", number);
    
    while (number!=guess){
        nguess++;
    printf("\nguess the number:");
    scanf("%d",&guess);
    
if(number>guess){
    printf("Higher\n");

}
else if(number<guess){
    printf("Lower\n");
}
else{
    printf("\nyou guessed it right\n");
}
    }
   printf("\nNumber of guesses%d\n", nguess); 
    return 0;
}