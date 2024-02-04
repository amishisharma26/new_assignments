#include <stdio.h>
#include <math.h>
int count_digits(int n){
    
    int count;
    
    while(n%10 != 0){
        n = n/10;
        count = count + 1;
    }
    
    return count;
    
}

int main(){
    
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    
    int orgininal_num = num;
    int converted_num;
    int rem;
    int i;
    int loop_times = count_digits(num);
    
    printf("%d\n", loop_times);
    
    for(i=0;i<=loop_times;i++){
        
        rem = num%10;
        converted_num = pow(rem, 3) + converted_num;
        num = num/10;
    }
    
    printf("%d", converted_num);
    
    if(converted_num == orgininal_num){
        printf("\nThis is an Armstrong number");
    }else{
        printf("\nThis is not an Armstrong number");
    }
    
    return 0;
}