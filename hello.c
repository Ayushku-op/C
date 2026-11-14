

// #include <stdio.h>

// int main() {
//     printf("Hello, World!\n");
//     return 0;
// }




/*

#include <stdio.h>

int main(){                DEFAULT CODE 

}

*/





// VARIABLS = NAME OF THE MEMORY LOCATION WHICH STORES THE DATA 



/*

#include <stdio.h>

int main(){
    int num = 67;
    char a = 'ayush';
    int b = 60; 
    int B = 70;
    int _age = 63;
    int age_1 = 54;

    return 0;
}

*/



/*  DATATYPES = things or charecters which have to be used to store different types of data  */



/*


#include <stdio.h>
int main(){
    int age = 17;
    float pi = 3.14; 
    char hastag = '#';
    return 0;
}

*/

/* CONSTANTS = values that dont change (fixed values)*/

// KEYWORDS = reserved words that have fixed meaning to the compiler 


// CASES 




/*
#include <stdio.h>

int main(){
    int age = 17;
    float pi = 3.14;
    char star = '*';
    char name[] = "AYSUH";

    printf("HELLO, My name is %c\n",name);
    printf("My age is %d\n",age);
    printf("The value of pi is %f\n",pi);
    printf("Star looks like this %c\n",star);
    return 0;

}

*/



// TO TAKE INPUT VALUE FORMAT IS -
// scanf("%d",&age);




// PROGRAM TO DISPLAY THE AGE OF THE USER


/*

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    printf(" The users age is : %d",age);
    return 0;
}

*/


// PROGRAM TO INTAKE TWO VALUES AND ADD THOSE TWO VALUES

/*
#include <stdio.h>

int main(){
    int a, b;

    printf("Enter the first value :");
    scanf("%d",&a);
    printf("Enter the second value :");
    scanf("%d",&b);

    int sum = a + b ;
    printf("The sum of the values given is %d",sum);
    return 0;
    
}
*/


// PROGRAM TO FIND THE AREA OF SQUARE 


/*
#include <stdio.h>

int main(){
    int side ;
    printf("Enter the side of the square :");
    scanf("%d",&side);
    printf("The area of the square is : %d",side*side);
    return 0;
}

*/



// PROGRAM TO CALCULATE THE AREA OF A CIRCLE 


/*

#include <stdio.h>
 
int main (){
    float radius;
    float pi = 3.14;
    printf("Enter the radius of the circle :");
    scanf("%f",&radius);
    printf("The area of the circle is %f",pi*radius*radius);
    return 0;
}

*/



// PROGRAM TO FIND OUT THE PERIMETER OF A TRIANGLE  


/*

#include <stdio.h>

int main(){
    float a,b,c;

    printf("Enter the first side of the triangle : ");
    scanf("%f", &a);
    printf("Enter the second side of the teiangle :");
    scanf("%f", &b);
    printf("Enter the third side of the triangle : ");
    scanf("%f", &c);

    printf("The perimeter of the triangle is %f", a+b+c);
    return 0;
}

*/



//PROGRAM TO TAKE INPUT OF A NUMBER AND FIND ITS CUBE

/*
#include <stdio.h>

int main(){
    float num;
    printf("Enter the number to find the cube : ");
    scanf("%f",&num);
    printf("The cube of the number is : %f",num*num*num);
    return 0;
}

*/


// TYPE DECLARATION INSTRUCTIONS - declare a variable before using it.


/*

#include <stdio.h>

int main(){
    int num = 54;
    int a = num + 5;
    int b = a + 1;
    printf("b= %d",b);
    

    int old_age = 56;
    int new_age = old_age + years;
    int years = 6;
    return 0;

}

*/


// ARHTEMATIC INSTRUCTIONS - only one variable should be there on the left hand side in which the value has to be stored.
//                         - for to the power use [pow(x,y)]  this means x to the power y
//                         - also use   [ #include <math.h>]  before the pow statement at the top.
// modular operator - it returns the remainder. [3%2=1]
 

/*
#include <stdio.h>

int main() {
    int a = 1.999999;
    printf("%d\n", a);
    return 0;
}

*/


// OPERATOR PRECEDENCE - operator priority order like BODMAS.
//                     -  ( *,/,% ) ----------> (+,-) -------------> (=)





//ASSOCIATIVITY = if operands are present in a equation of the same priority oder than the compilar will solve 
//                it from left to right.  




// CONTROL INSTRUCTIONS = used to determine the flow of programs
// SEQUENCE CONTROL    = goes through the program one by one 
// DESISITION CONTROL  = if - else statement 
// LOOP CONTROL        = loop statements
// CASE CONTROL        = code lines run on based on cases






// OPERATORS
// Arthematic operators = +,-,*,/,%
// Relational operators = ==  [equal to],<,>,<=,>=,!=[not equal to] 
// Logical operators    = && [ AND ],|| [ OR ],! [ NOT ]
// Asignment operators  =,+=,-=,*=,/=,%=

//priority order = ! --> *,/,% --> +,- --> <,<=,>,>= --> ==,=! --> && --> || --> =


/*

#include <stdio.h>{
int main() {
    printf("%d\n", ! 6>5);
    return 0;
}

*/



/*

#include <stdio.h>

int main() {
    int a,b;
    a = 4;
    b = 5;
    a+=b;   // A+=B === A = A+B
    printf("%d\n",a);
    return 0;
}

*/



// PROGRAM TO INPUT A VALUE AND CHECK WHEATHER ITS DIVISIBLE BY 2 OR NOT


/*

#include <stdio.h>

int main () {
    // enen --> 1
    // odd --> 0
    // divisable  --> 1
    // nor divisable --> 0
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    return 0; 
}

*/


// PROGRAM TO PRINT TRUE OR FALSE FOR FOLLOWING STATEMENTS :
// IF ITS SUNDAY AND ITS SNOWING 


/*

#include <stdio.h>

int main () {
    // TRUE --> 1
    // FALSE --> 0
    int is_sunday = 1;
    int is_sowing = 1;
    printf("%d",is_sunday && is_sowing );
    return 0; 
}

*/



// IF ITS MONDAY AND ITS RAINING

/*

#include <stdio.h>

int main () {
    // TRUE --> 1
    // FALSE --> 0
    int is_monday = 1;
    int is_raining = 1;
    printf("%d",is_monday && is_raining );
    return 0; 
}

*/

// IF A NUMBER IS GREATER THAN 9 AND LESS THAN 100

/*

#include <stdio.h>

int main () {
    // TRUE --> 1
    // FALSE --> 0
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("%d", x>9 && x<100);
    return 0; 
}

*/



// PROGRAM TO PRINT AVERAGE OF 3 NUMBERS


/*

#include <stdio.h>

int main(){
    int a,b,c,result;
    printf("Enter the first number : "),
    scanf("%d", &a);
    printf("Enter the second number : "),
    scanf("%d", &b);
    printf("Enter the third number : "),
    scanf("%d", &c);
    
    result = (a+b+c)/3;
    printf("The average of the three numbers is : %d", result);
    return 0;
}

*/



// PROGRAM TO GIVE IF A GIVEN CHARECTER IS DIGIT OR NOT 






// PROGRAM TO PRINT THE SMALLEST NUMBER 





// CONDITIONAL STATEMENTS 
// 1.  if-else-------- if required only if statement can execute and else id not required in the code
// 2.  switch
// 3.  ternary

// if- else statement syntax
//    if (condition){
           //do something is true
//}
//    else if (condition){
          //do something if first is false and second is true
//}

//    else (codition){
           //do something is false
//}


/*
#include <stdio.h>
int main(){
    int age;
    char  name[100] ;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=120){
        printf("%s how will you be able to drive", name);
    }
    else if(age>=18){
        printf("Congratulations %s you are eligable to drive", name);
    }
    else{
        printf("%s you are not eligible to drive DRINK MILK", name);
    }
    return 0;
}

*/



// TERNARY  -   not much use but can be asked in placements
//condition ? doSomething if TRUE : doSomething if FALSE ;


/*


#include <stdio.h>
int main(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    age >= 18 ? printf("ADULT") : printf("CHILD");

    return 0;
}

*/

// SWITCH

//switch(defined variable){
//    case C1: do something
//        break;
//    case C1: do something
//        break;
//    case C1: do something
//       break;
//         ----- and it goes on -----
//}
//          defalt :  (its basically else statement but in switch) (can be used to print if input is not valid)
// switch inside switch are allowed



/*
#include <stdio.h>
int main(){
    int day;
    printf("1. Monday\n 2. Tuesday\n 3. Wednesday\n 4. Thursday\n 5. Friday\n 6. Saturday\n 7. Sunday\n");
    printf("Enter todays day: ");
    scanf("%d", &day);

    switch(day){
        case 1 :  printf("its the start");
        break;

        case 2 : printf("not this day again");
        break;

        case 3 : printf("chicken eatting day !!!");
        break;

        case 4 : printf("keep-pushig");
        break;

        case 5 : printf("almost there");
        break;

        case 6 : printf("HURRAY!!!");
        break;

        case 7 : printf("kal seh fir seh surru hoja");
        break;

        default : printf("INVALID INPUT");
    }

    return 0;
}

*/





// PROGRAM TO FIND IF A STUDENT PASSED OR FAILED 


/*
#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks out of 100: ");
    scanf("%d", &marks);


    if (marks>=30 && marks<=100){
        printf("Congratulations you passed the test");
    }
    else if (marks<30 && marks>=0){
        printf("SORRY you failed the test");
    }
    else {
        printf("INVALID INPUT");
    }

    //marks>=30 ? printf("YOU PASSED") : printf("YOU FAILED");


    // this program doesnt work for switch statement
    return 0;
}


*/





// PROGRAM TO GIVE GRADES TO A STUDENT 


/*#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks<30 && marks>=0){
        printf("GRADE - C");
    }
    else if (30<= marks <70){
        printf("GRADE - B");
    }
    else if(70<=marks<90){
        printf("GRADE - A");
    }
    else if(90<=marks<=100){
        printf("GRADE - A+");
    }
    else{
        printf("INVALID INPUT");
    }
    
    return 0;
}
    
*/




// PROGRAM TO FIND IF A CHARECTER ENTERED BY THE USER IS UPPERCASE OR NOT

/*

#include <stdio.h>
int main(){
    char name;
    printf("Enter your name : ");
    scanf("%s", &name);

    if (name>='A' && name<='Z'){            // can also be written as - if (name>=65 && name <=90)
        printf("Good that you entered your name in uppercase");
    }
    else{
        printf("Enter the first letter of your name in uppercase.");
    }
  
    return 0;
}
    
*/



// PROGRAM TO CHECK IF A NUMBER IS AMSTRONG NUMBER OR NOT 



// PROGRAM TO CHECK WHEATHER A GIVEN NUMBER IS NATURAL NUMBER OR NOT 




// LOOP CONTROL INSTRUCTIONS -- used to repeat some parts of the program


// for loop 
// while loop 
// do while loop


// break statement 
// continue statement




// for loop


/*
for (initialization;condition;updation){
    // do something
}
*/



// i = i+1 , = , i+=1 , = , i++



/*

#include <stdio.h>
int main(){
    for (int i = 1  ; i<=5  ; i += 2){
        printf("Hello World\n");
    }
    return 0;

}
    
*/



// COUNTDOWN USING FOR LOOP


/*

#include <stdio.h>
int main(){
    for (int i = 10  ; i>=0  ; i -= 1){
        printf("%d\n", i);
    }
    printf("BHOOM");
    return 0;

}
    
*/




// PROGRAM TO PRINT THE NUMBERS FROM 0 to 10


/*

#include <stdio.h>
int main(){
    for (int i = 0  ; i<=10  ; i += 1){
        printf("%d\,", i);
    }
    return 0;

}
    
*/

// increment operator 
// ++i , i++
// i++ = use value then increase by one
// ++i = increase value by one then use value

// decrement operator
// --i , i--
// i-- = use value then decrese by one
// --i = decrease value by one then use value



// PROGAM TO PRINT CHARECTERS FROM A TO  Z 

/*

#include <stdio.h>
int main(){
    for ( char i = 'A'; i<='Z'; i++){
        printf("%c\n", i);
    }
    printf("END");
    return 0;
}
    
*/



// WARNING this is an infinite loop to exit close terminal and to open the terminal back press CTRL + `

/*

#include <stdio.h>
int main(){
    for( int i = 1 ;  ; i++){
        printf("Hello Ayush !!!\n");
    }
    return 0;
}
    
*/




// WHILE  LOOP

/*

while (condition){
do something

}

*/


/*

#include <stdio.h>
int main(){
    int i = 1;
    while (i<=5){
        printf("Hello AYUSH !!!\n");
        i++;
    }
    return 0;
}
    
*/



// PROGRAM TO PRINT THE NUMBERS FROM 0 TO N AND THE USER INPUTS THE NUMBER N

/*

#include <stdio.h>
int main(){
    int n,i;
    printf("Enter a number : ");
    scanf("%d", &n);
    i = 0;
    while(i<=n){
        printf("%d\n", i);
        i++;
    }
    return 0;
}
    
*/


// USING FOR LOOP

/*


#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for ( int i = 0; i<=n;i++){
        printf("%d\n", i);
    }

    return 0;

}


*/




//  DO WHILE LOOP

/*
do{

do something

}while(condition)

*/


/*

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number : ");
    scanf("%d", &n);
    i=n;
    do{
        printf("%d\n",i);
        --i;    
    } while(i>=0);
    return 0;
}
    
*/


// PROGRAM TO PRINT THE SUM OF FIRST N NATURAL NUMBERS GIVEN BY THE USER ALSO PRINT THEM IN REVERSE


/*

#include <stdio.h>
int main(){
    int n, sum;
    sum=0;
    printf("Enter the number for which the sum needs to be found : ");
    scanf("%d", &n);
    for(int i = 1;i<=n;i++){
        sum = sum+i;
        
    }
    printf("The sum of natural numbers till %d is %d \n",n,sum);
    
    for(int i=n;i>=0;i--){
        printf("%d\n", i);
    }
    
    
    return 0;


}
    
*/





// PROGRAM TO PRINT TABLES OF A NUMBER INPUT BY THE USER



/*

#include <stdio.h>
int main(){
    int n;
    int p;
    int i;
    printf("Enter a number to print the number of : ");
    scanf("%d", &n);

    for(i = 0;i<=10;i++){
        p = n*i;
        printf("%d * %d = %d\n",n,i,p);
    }
    return 0;
}
    
*/





// BREAK STATEMENT 
// BREAK - used to break away froma loop
// BREAK statement takes us out from all the nested loops aswell.


/*

#include <stdio.h>
int main(){
    for ( int i=0; i<=89 ; i++){
    if (i ==69 || i==67){
        printf("%d NICE JOB TEAM\n",i);
        break;
        
    }
    else{
        printf("%d GOOD job team\n",i);
        
    }

    }
    return 0;
}


*/




// PROOGRAM TO KEEP TAKING INPUT FROM USER UNTILL THE USER ENTERS AN ODD NUMBER



/*

#include <stdio.h>

int main(){
    int n;
    for ( int i=1; ;i++){
        printf("Enter number which is not odd :");
        scanf("%d", &n);

        if(n==0){
            printf("0 is neither an odd nor an even number\n");
        }
        else if (n%2==0){
            printf("The number u entered is an even number\n");
        }
        else{
            printf("The number u entered is an odd number\n");
            break;
        }


    }
     printf("THANK YOU FOR FLYING WITH US");

    return 0;
}
    
*/




// PROGRAM TO KEEP TAKNG A INPUT FROM USER UNTIL THE USER ENTERS A MULTIPLE OF 7



/*

#include <stdio.h>
int main(){
    int n;
    for ( ; ;){
        printf("Enter a number which is not a multiple of 7 : ");
        scanf("%d",&n);

        if (n ==0){
            printf("O is not allowed.\n");
        }
        else if (n%7==0){
            printf("%d is the multiple of 7\n",n);
            break;
        }
        else{
            printf("nice\n");
        }
        
    }
    return 0;
}
    
*/





// CONTINUE STATEMENT
// CONTINUE - skips to the next iteration


/*

#include <stdio.h>
int main(){
    for (int i=1;i<=5;i++){
        if (i==3){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}


*/






// PROGRAM TO PRINT ALL NUMBERS FROM 1 TO 10 EXCEOT 6


/*

include <stdio.h>
int main(){
    for (int i=1;i<=10;i++){
        if (i==6){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
    
*/




// PROGRAM TO PRINT ALL THE ODD NUMBERS FROM 5 TO 50



/*

#include <stdio.h>
int main(){
    for (int i=5;i<=50;i++){
        if (i%2!=0){
            printf("%d\n",i);
        }
        continue;
    }
    return 0;
}
    
*/



// PROGRAM TO PRINT THE FACTORIAL OF A NUMBER 'N'


/*

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to find factorial for : ");
    scanf("%d",&n);
    int factorial = 1;
    for (int i=1;i<=n;i++){
        factorial = factorial*i;
    }
    printf("Factorial of the number is :%d", factorial);
    return 0;
}
    
*/


// same program but with do while statement 

/*

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to find factorial for : ");
    scanf("%d",&n);
    int factorial = 1;
    int i = 1;
    do{
        factorial = factorial*i;
        i++;
    }
    while(i<=n);
    printf("Factorial of the number is :%d", factorial);
    return 0;
}
    
*/





// PROGRAM TO PRINT REVERSE OF A TABLE FOR A NUMBER 'n'



/*

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int i = 10;
    while(i>=1){
        printf("%d * %d = %d\n",n,i,n*i);
        i--;
        
    }
    return 0;

}
    
*/





// PROGRAM TO CALCULATE THE SUM OF ALL THE NUMBERS BETWEEN 5 AND 50 (INCLUDING 5 AND 50)



/*

#include <stdio.h>
int main(){
    printf("PROGRAM TO CALCULATE THE SUM OF ALL THE NUMBERS BETWEEN 5 AND 50 (INCLUDING 5 AND 50)\n");

    int count = 0;
    for (int i = 5;i<=50;i++){
        count +=i;
    }
    printf("Sum is : %d",count);
    return 0;
}
    
*/



// PROGRAM TO PRINT 
//  *****
//  *****
//  *****
//  *****



// #include <stdio.h>
// int main(){
//     for (int i = 1;i<=4; i++){
//         for (int j = 1;j<=4; j++){
//             printf("*");
//         }
//         printf("*\n");

//     }
//     return 0;
// }
    





// POGRAM TO CHECK IF THE INPUT NUMBER IS PRIME OR NOT


// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number to check wheather its prime or not : ");
//     scanf("%d",&n);

//     int is_prime = 0;
//     if (n<=1){
//         is_prime=1;
//     }
//     else{
        
//             for (int i = 2; i<=n/2 ;i++){
//                 n%i==0;
//                 is_prime=1;
//             }

//     }

//     if (is_prime){
//         printf("%d is an prime number.",n);
//     }
//     else{
//         printf("%d is not a prime number.",n);
//     }
//     return 0;

// }





035105



// PROGRAM TO PRINT PRIME NUMBERS IN A GIVEN RANGE 