/* Recursion */

#include <stdio.h>

 void function(int n){
    if(n>0){
        printf("%d",n);
        function(n-1);
    }

}
void main(){

    int x= 3;
    function(x);
    
}

