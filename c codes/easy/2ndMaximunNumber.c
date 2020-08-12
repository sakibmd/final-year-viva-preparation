#include<stdio.h>
int main(){
    int a[100], n;
    printf("Enter Array Length: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    int secondmax = a[0];
    for(int i=0; i<n; i++){
        if(a[i] == max){
            continue;
        }else if(a[i]>secondmax){
            secondmax = a[i];
        }
    }

    printf("2nd max number is: %d\n",secondmax);
}
/*
5
10 20 30 40 50
*/
