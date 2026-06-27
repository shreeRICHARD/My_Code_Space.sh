/*Tree Recursion */

#include <stdio.h>

 void function(int n){
    if(n>0){
        printf("%d",n);
        function(n-1); // 1st recirsive call
        function(n-1); // 2nd recursive call

    }
     
    //recursion where one function calls itself more than once in a single function call.

}
void main(){

    int x= 3;
    function(x);
   
}