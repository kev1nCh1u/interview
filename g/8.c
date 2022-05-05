#include<stdio.h>  

int reverse(int x){
    int temp;
    int res = 0;

    if(x == 0)
        return 0;

    while(x!=0)    
    {    
        temp = x % 10;    
        res = res * 10 + temp;    
        x /= 10;    
    }
    return res;
}

 int main()    
{    
int n = 4321;      
  
    n = reverse(n);

  printf("Reversed Number: %d",n);    
return 0;  
}   