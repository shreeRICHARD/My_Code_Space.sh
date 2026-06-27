#include<Stdio.h>
#include<string.h>

struct book{
    int no;
    char author[50];
    float price; /* data */
};


int main(){
    

    struct book bible; //struct book is a data type
    bible.no=1;
    bible.price =749.0;
    strcpy(bible.author,"more then one members");

    printf("%d\n",bible.no);
    printf("%f\n",bible.price);     //basics of structure
    printf("%s\n",bible.author);
}
