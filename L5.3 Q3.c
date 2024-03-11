#include<stdio.h>

main()
{
	int choice;
	
	printf("Press 1	\n");
	printf("Press 2 \n");	
	printf("Press 3 \n");
	printf("Press 4 \n");
	printf("Press 5 \n");
	printf("Press 6 \n");
	printf("Press 7 \n");	
	
	printf("Enter Your Choice =");
	scanf("%d",& choice);
	
	switch(choice)
	{
		case 1 :
			    printf("SUNDAY");
			    break;
		case 2 :
			    printf("MONDAY ");
			    break;
		case 3 :
			    printf("TUESDAY");
			    break;
		case 4 :
			    printf("WEDNESDAY");
			    break;
		case 5 :
			    printf("THURSDAY");
			    break;
		case 6 :
			    printf("FRIDAY");
			    break;
		case 7 :
			    printf("SATURDAY");
			    break;							    
		
		default : 
				 printf("Plz Enter Valid Choice");
							    
	}

}