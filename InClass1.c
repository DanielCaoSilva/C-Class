/*
 * InClass1.c
 *
 *  Created on: Jan 31, 2019
 *      Author: dcaos
 */
#include <stdio.h>
#include <string.h>

void dm();
void tO();
void switchy();
void globalOne();
void arrays();
void pointers();
void structures();
void pointerToStruct();
void structFun();
void union1();
void union2();
void union3();
void usingSwap();
void tdef();
void readAndWrite();
void readingTwo();
void createAndWrite();
void createAndWrite2();

// Global variables
int A;
int B;

int main()
{
	printf("Lecture 5:\n\n");
	printf("Program 1:\n");
	dm();
	printf("\n\n\nProgram 2:\n");
	tO();
	printf("\n\n\nProgram 3:\n");
	switchy();
	printf("\n\n\nProgram 4:\n");
	globalOne();
	printf("\n\n\nProgram 5:\n");
	arrays();
	printf("\n\n\nProgram 6:\n");
	pointers();
	printf("\n\n\nProgram 7:\n");
	structures();
	printf("\n\n\nProgram 8:\n");
	pointerToStruct();
	printf("\n\n\nProgram 9:\n");
	structFun();
	printf("\n\n\nProgram 10:\n");
	union1();
	printf("\n\n\nProgram 11:\n");
	union2();
	printf("\n\n\nProgram 12:\n");
	union3();
	printf("\n\n\nLecture 6:\nProgram 1:\n");
	usingSwap();
	printf("\n\n\nProgram 2:\n");
	tdef();
	printf("\n\n\nProgram 3:\n");
	readAndWrite();
	printf("\n\n\nProgram 4:\n");
	readingTwo();
	printf("\n\n\nProgram 5:\n");
	createAndWrite();
	printf("\n\n\nProgram 6:\n");
	createAndWrite2();

}
//IF, ELSE IF, ELSE - Decision Making
void dm()
{
   /* local variable definition */
   int a = 100;
   /* check the boolean condition */
   if( a == 10 ) {

      /* if condition is true then print the following */

      printf("Value of a is 10\n" );

   } else if( a == 20 ) {

      /* if else if condition is true */

      printf("Value of a is 20\n" );

   } else if( a == 30 ) {

      /* if else if condition is true  */

      printf("Value of a is 30\n" );

   } else {

      /* if none of the conditions is true */

      printf("None of the values is matching\n" );

   }
   printf("Exact value of a is: %d\n", a );
}
//Ternary Operator - Can use in place of if/else or switch
void tO()
{

   int a , b;

   a = 10;

   printf( "Value of b is %d\n", (a == 1) ? 20: 30 );

   printf( "Value of b is %d\n", (a == 10) ? 20: 30 );

}
//Switch -- Can use in place of if/else or turnery
void switchy() {

   /* local variable definition */

   char grade = 'B';

   switch(grade) {

      case 'A' :

         printf("Excellent!\n" );

         break;

      case 'B' :

      case 'C' :

         printf("Well done\n" );

         break;

      case 'D' :

         printf("You passed\n" );

         break;

      case 'F' :

         printf("Better try again\n" );

         break;

      default :

         printf("Invalid grade\n" );
   }
   printf("Your grade is  %c\n", grade );
}
/**********************************************/

//function  --> scope of variable local vs global vs static

//local variables go in Frame of calling function in STACK

//static variable, go in STATIC, accessible by all functions in file declared

//global variable, go in STATIC, accessible by all functions in program
int fun()
{

  static int count = 0; //Static Variable

  count++;

  return count;

}
int Add()
{

    return A + B;

}
void globalOne()
{

    int answer; // Local variable

    A = 5;

    B = 7;

    answer = Add();

    printf("%d\n",answer);

    printf("%d ", fun());

    printf("%d ", fun());


}
/**********************************************/
void arrays() {

   int n[ 10 ]; /* n is an array of 10 integers */

   int i,j;



   /* initialize elements of array n to 0 */

   for ( i = 0; i < 10; i++ ) {

      n[ i ] = i + 100; /* set element at location i to i + 100 */

   }



   /* output each array element's value */

   for (j = 0; j < 10; j++ ) {

      printf("Element[%d] = %d\n", j, n[j] );

   }

}

/**********************************************/
//Pointers -- point to ADDRESS of RAM. Can be data or function
//2 operations
//You may wish to change what you are pointing to
//You may wish to read/write/execute the data/function you are pointing to
//this is done by dereferencing aka go to address you are pointing to
//When declaring a pointer size allocated is always 4 bytes as we hold an address in memory
void pointers() {


   int  var = 20;

   int x = 10;

   int  *ip;        /* pointer variable declaration */



   ip = NULL; // Point to address 0 for safety


   ip = &var;  /* Change where you point to. Now pointing to address of var */



   x = x + *ip; // x = 10 + 20. grabbing data where pointer is pointing is called dereferencing the pointer



   ip = &x; //CHANGE WHERE ip points --> point to address of x



   //showing pointer calculation

   ip = ip + 3;  // address of ip + (3 * sizeof(int)) = address of ip + 12


   printf("Address of var variable: %x\n", &var  );



   /* address stored in pointer variable */

   printf("Address stored in ip variable: %x\n", ip );



   /* access the value using the pointer */

   printf("Value of *ip variable: %d\n", *ip );


}
//STRUCT
struct Books {

   char  title[50];

   char  author[50];

   char  subject[100];

   int   book_id;

};
void structures( ) {

   struct Books Book1;        /* Declare Book1 of type Book */

   struct Books Book2;        /* Declare Book2 of type Book */



   /* book 1 specification */

   strcpy( Book1.title, "C Programming");

   strcpy( Book1.author, "Nuha Ali");

   strcpy( Book1.subject, "C Programming Tutorial");

   Book1.book_id = 6495407;

   /* book 2 specification */

   strcpy( Book2.title, "Telecom Billing");

   strcpy( Book2.author, "Zara Ali");

   strcpy( Book2.subject, "Telecom Billing Tutorial");

   Book2.book_id = 6495700;



   /* print Book1 info */

   printf( "Book 1 title : %s\n", Book1.title);

   printf( "Book 1 author : %s\n", Book1.author);

   printf( "Book 1 subject : %s\n", Book1.subject);

   printf( "Book 1 book_id : %d\n", Book1.book_id);


   /* print Book2 info */

   printf( "Book 2 title : %s\n", Book2.title);

   printf( "Book 2 author : %s\n", Book2.author);

   printf( "Book 2 subject : %s\n", Book2.subject);

   printf( "Book 2 book_id : %d\n", Book2.book_id);

}

//Pointer to Struct
/* function declaration */

void printBook( struct Books *book );   //INPUT a pointer

void pointerToStruct( ) {
  struct Books Book1;        /* Declare Book1 of type Book */

   struct Books Book2;        /* Declare Book2 of type Book */



   /* book 1 specification */

   strcpy( Book1.title, "C Programming");

   strcpy( Book1.author, "Nuha Ali");

   strcpy( Book1.subject, "C Programming Tutorial");

   Book1.book_id = 6495407;

   /* book 2 specification */

   strcpy( Book2.title, "Telecom Billing");

   strcpy( Book2.author, "Zara Ali");

   strcpy( Book2.subject, "Telecom Billing Tutorial");

   Book2.book_id = 6495700;



   /* print Book1 info by passing address of Book1 */

   printBook( &Book1 );

   /* print Book2 info by passing address of Book2 */

   printBook( &Book2 );

}


void printBook( struct Books *book )
{


   printf( "Book title : %s\n", book->title);

   printf( "Book author : %s\n", book->author);

   printf( "Book subject : %s\n", book->subject);

   printf( "Book book_id : %d\n", book->book_id);

}



//Struct as Function Argument


/* function declaration */

void printBook1( struct Books book );


void structFun( ) {

   struct Books Book1;        /* Declare Book1 of type Book */

   struct Books Book2;        /* Declare Book2 of type Book */



   /* book 1 specification */

   strcpy( Book1.title, "C Programming");

   strcpy( Book1.author, "Nuha Ali");

   strcpy( Book1.subject, "C Programming Tutorial");

   Book1.book_id = 6495407;


   /* book 2 specification */

   strcpy( Book2.title, "Telecom Billing");

   strcpy( Book2.author, "Zara Ali");

   strcpy( Book2.subject, "Telecom Billing Tutorial");

   Book2.book_id = 6495700;



   /* print Book1 info */

   printBook1( Book1 );


   /* Print Book2 info */

   printBook1( Book2 );


}


void printBook1( struct Books book )
{

   printf( "Book title : %s\n", book.title);

   printf( "Book author : %s\n", book.author);

   printf( "Book subject : %s\n", book.subject);

   printf( "Book book_id : %d\n", book.book_id);

}


//UNION

//only one data type can exist at any given time in a union

//The size allocated for a union will be the largest type.

//size allocated is 20 bytes. Regardless of which data you use. This way computer can change it at runtime

union Data {

   int i;  //4 bytes

   float f; //4 bytes

   char str[20];  //20 bytes

};

void union1( ) {

   union Data data;


   printf( "Memory size occupied by data : %d\n", sizeof(data));


}

//accessing variable in union. NOTE: only one can exist
void union2( ) {

   union Data data;


   data.i = 10;

   data.f = 220.5;  //writes over i

   strcpy( data.str, "C Programming");  //writes over f

   printf( "data.i : %d\n", data.i);    //print out garbage will read 4 bytes interpret as whole number

   printf( "data.f : %f\n", data.f);    //print out garbage will read 4 bytes intrepret as

   printf( "data.str : %s\n", data.str); //print out "C Programming"



}

void union3( ) {


   union Data data;

   data.i = 10;

   printf( "data.i : %d\n", data.i);



   data.f = 220.5;

   printf( "data.f : %f\n", data.f);



   strcpy( data.str, "C Programming");

   printf( "data.str : %s\n", data.str);


}

/*

 1*/

void swap(int *x, int *y)  //defining function called swap
{

    int z = *x;

    *x = *y;

    *y = z;

}

void usingSwap()
{

    int a = 45, b = 35;

    printf("Before Swap\n");

    printf("a = %d b = %d\n",a,b);

    swap(&a, &b);

    printf("After Swap with pass by reference\n");

    printf("a = %d b = %d\n",a,b);

}
/*

 2*/
typedef int number;
 void tdef() {

   number c;

   printf( "Enter a value :");

   fflush(stdout);  //ECLIPSE BUG

   c = getchar( );

   printf( "\nYou entered: ");

   putchar( c );

}
/*

 *3*/

//STRING

//READ/WRITE using get and put
void readAndWrite( ) {
   char str[100];       //char array STRING used as buffer

   printf( "Enter a value :");

   fflush(stdout);  //ECLIPSE BUG

   gets( str );

   printf( "\nYou entered: ");

   puts( str );

}
/*

 4*/

//You define type of I/O

//scanf and printf

//reading two items a string and int

void readingTwo( ) {
   char str[100];

   int i;

   printf( "Enter a value :");

   fflush(stdout);  //ECLIPSE BUG

   scanf("%s %d", str, &i);
   printf( "\nYou entered: %s %d ", str, i);

}
//READ/WRITE FILES [I/O = Hard/Drive not CONSOLE]

//Open file get access to read, write or both

//Modify File   Read from file and/or Write to file

//Close file    Close file so other processes can access it


//OPEN FILE

/*

1   r   READ ONLY

2   w   WRITE ONLY
 
NOTE: If it does not exist, then a new file is created. Start writing content from the beginning of the file.

3   a   Opens a text file for writing in appending mode.

NOTE:If it does not exist, then a new file is created. Start appending content in the existing file content.

4   r+  Opens a text file for both reading and writing.

5   w+  Opens a text file for both reading and writing.

It first truncates the file to zero length if it exists,

creates a file if it does not exist.

6   a+  Opens a text file for both reading and writing.

It creates the file if it does not exist.

Start from beginning but writing can only be appended.

*/

/*

 5*/

//CREATE AND WRITE TO FILE

void createAndWrite() {

   FILE *fp;        //pointer to a file type
   fp = fopen("textFile.txt", "w+");

   fprintf(fp, "This is testing for fprintf...\n");

   fputs("This is testing for fputs...\n", fp);

   fclose(fp);

}

 /*6*/

void createAndWrite2() {

   FILE *fp;

   char buff[255];

   fp = fopen("textFile.txt", "r");

   fscanf(fp, "%s", buff);

   printf("1: %s\n", buff );

   fgets(buff, 255, (FILE*)fp);

   printf("2: %s\n", buff );


   fgets(buff, 255, (FILE*)fp);

   printf("3: %s\n", buff );

   fclose(fp);

}

//HOW TO READ BINARY FILE

//fread() and fwrite()




