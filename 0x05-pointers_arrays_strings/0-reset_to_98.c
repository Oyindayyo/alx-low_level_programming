#include "main.h"
include <stdio.h> 
 /** 
  *   * main - check the code 
  *     *
  *       * Return: Always 0. 
  *         */ 
  	int main(void) 
	  {
		    	 int n;
			   	 int *p = &n;
				   	 
				    n = 402; 
				       
				       printf("n=%d\n", n); 
				          
				          *p = 98;
					     
					  /*   reset_to_98(&n);*/
					  	
					      printf("n=%d\n", n); 
					          return (0);
						      
						      
						       }

