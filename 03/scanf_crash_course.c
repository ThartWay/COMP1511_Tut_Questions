
#include <stdio.h>

int main(void) {
	int a = 0;
	int b = 0;
    char c = 'a';

    printf("__________________________PART 1_____________________________\n");
    scanf(" %d", &a);
    //* What is the value of (a) if we
    // pressed CTRL+D  =>   

    printf("__________________________PART 2_____________________________\n");
    scanf(" %d %c", &a, &b);
    //* What are the values of (a) and (b) if we:
    //*                      a               b
    // pressed 3,8,9,\n =>                      
    // pressed f  8     =>                       
    // pressed 4 CTRL+D =>                                     
    // pressed CTRL+D 5 =>                         

    printf("__________________________PART 3_____________________________\n");
    printf("%d\n", scanf(" %d", &a));
    //* What is printed out if we:
    // pressed 3        =>                       
    // pressed CTRL+D   =>                         
    // pressed f        =>                        

    printf("__________________________PART 4_____________________________\n");
    printf("%d\n", scanf(" %d %d", &a, &b));
    //* What is printed out if we:
    // pressed CTRL+D 1  =>                         
    // pressed 1 2       =>                        

    printf("__________________________PART 5_____________________________");
    //! If we have a space infront of the %d, we will IGNORE SPACES and NEWLINES
    scanf("%d", &a);
    scanf(" %d", &a);    

    
}










/** 
int main(void) {
	int a = 0;
	int b = 0;
    char c = 'a';

    printf("__________________________PART 1_____________________________");
    scanf("%d", &a);
    // * What are the value of (a) if we
    // pressed 3       =>   3
    // pressed 'f'     =>   0 //! %d only looks for INTS
    // pressed CTRL+D  =>   0 //! EOF, end of file ends this
    // pressed 12.2    =>   12//! %d only looks for INTS

    printf("__________________________PART 2_____________________________");
    scanf("%d %c", &a, &b);
    // * What are the values of (a) and (b) if we:
    // *                      a               b
    // pressed 3,8,9,\n =>   3               8 //! Buffer things
    // pressed f  8     =>   0               0 //! %d only looks for INTS + Clogged buffer    
    // pressed 4 CTRL+D =>   4               0                
    // pressed CTRL+D 5 =>   0               0 //! EOF means your program will no longer read input

    printf("__________________________PART 3_____________________________");
    printf("%d\n", scanf("%d", &a));
    // * What is printed out if we:
    // pressed 1        =>   1  
    // pressed CTRL+D   =>   -1   
    // pressed f        =>   0

    printf("__________________________PART 4_____________________________");
    printf("%d\n", scanf("%d %d", &a, &b));
    // * What is printed out if we:
    // pressed CTRL+D 1  =>   -1  
    // pressed 1 2       =>   2
    // This function returns the number of input items successfully matched
    // If it is an EOF situation, it returns -1.
    // It is of note that EOF is a constant in C that equals -1 too.

    printf("__________________________PART 5_____________________________");
    //! If we have space infront of the %d, we ignore SPACES
    scanf("%d", &a);
    scanf(" %d", &a);    
}

*/