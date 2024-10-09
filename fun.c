#include <stdio.h>

int addTwoNumbers(int a,int b){
    int sum = a+b;
    return sum;
}

void sayHello(){
    printf("Helloooo !\n");
}

void isPrime(int n){
    int f = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            f =0 ;
            break;
        }
    }

    if(f){
        printf("Prime Number");
    }
    else{
        printf("Composite");
    }

    printf("\n");
}
int maximum(int a,int b,int c){

    int max;
    if(a>b && a>c){
        max=a;
    }
    if(b>a && b>c){
        max=b;
    }
    else 
       max=c;

    return max ;

}







///////////////////////////


//no arg and no return type
void Hello(){
    printf("Hi Bro");
}

//without arg with return
float pie(){
    return 3.14;
}

//with arg no return
void print(int c){
    printf("%d",c);
}

//with arg and with return 






int main(){

    // return_type function_name(parameters) {
    // // Body of the function
    // return value; 
    // } 


    //return types -> int,char,void,...
    //function name ->addTwoNumbers ,sayHello
    //parameters ---> empty , 

    // int a=1,b=2;
    // int c = a+b; //print
    // int c  = addTwoNumbers(a,b);


    // int d =5,e=10;
    // int f = d+e;//print      //redudancey
    // int f = addTwoNumbers(d,e);
   
    // sayHello(); //calling -->using function
    // sayHello();
    // sayHello();


    //write function to chekc if a number is prime number

    
    // isPrime(2);
    // isPrime(10);
    // isPrime(15);


    //find the maximun number between 3 numbers
    // int c = maximum(1,3,2); //return valued should be stored
    // printf("%d",c);
    




}






