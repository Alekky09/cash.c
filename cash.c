#include <cs50.h>
#include <stdio.h>

int change;

int main(void){
    float changedollars;
    do
    {
        changedollars = get_float("Change owed: ");
        
    }
    while(changedollars <0);
    change = changedollars*100;
    int coins = 0;
    if(change>=1){
    do 
    {
        if(change>=25){
            change=change-25; 
            coins++;
        }
        else if(change < 25 && change>=10){
            change=change-10;
            coins++;
        }
        else if(change < 10 && change >=5){
            change=change-5;
            coins++;
        }
        else{
            change=change-1;
            coins++;
        }
        

    }
    while (change>0);
}
    printf("%i\n",change);
    printf("%i\n",coins);
    
}
