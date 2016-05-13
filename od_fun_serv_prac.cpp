/*Practiced some funs*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
 using namespace std;
 int main()
 {
    char a;
    int b,c;
    printf("Hi frans, nice to meet you.\n");
    fflush(stdout);
    sleep(2);
    printf("\nWhat's your name please?\n");
    scanf("%s", &a);
    printf("\nCool, Nice name. you should be proud of your parents for keeping this nice name of you.\n\n");
    fflush(stdout);
    sleep(2);
    printf("Can I spend some seconds with you, now?\n");
    fflush(stdout);
    sleep(1);

    printf("Press '1' to Confirm, '0' to Exit\n");
    scanf("%d",&c);

    for(int i = c; i < 1; ) 	
        { 		
        if( i == 1 ) 	 continue;
        if( i == 0 )     return 0;
        }
        
    printf("\n\nHow many members are in your family?\n");
    scanf("%d", &b);

    if (b<=3)
     {
        cout <<"Sweet! Such a planned family"<< endl;    
    }
    
    else if (b<=5)
    {
        cout <<"Wow, Happy family"<<endl;
    }

    else if (b<=7)
    {
        cout <<"Kinda big but lovely family"<<endl;
    }

    else
    {
        cout <<"OMG! That's called a Big family :D"<<endl;
    }
   
    fflush(stdout);
    sleep(1);
    printf("Take care of your dearest family :)\n");
    fflush(stdout);
    sleep(2);
    printf("\nThanks for your time\n");
    fflush(stdout);
    sleep(2);
    printf("\nBye\n");
    fflush(stdout);
    sleep(1);
    printf("    Bye\n");
    fflush(stdout);
    sleep(1);
    printf("        Bye");
   return 0;  
 }
