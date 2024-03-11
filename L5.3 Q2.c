#include<stdio.h>

main()
{
	int choice;
	
	printf("Press 1 for Internet Recharge\n");
	printf("Press 2 for Top-up Recharge\n");	
	printf("Press 3 for Special Recharge\n");	
	
	printf("Enter Your Choice =");
	scanf("%d",& choice);
	
	switch(choice)
	{
		case 1 :
			    printf("You have successfully done Internet Recharge ");
			    break;
		case 2 :
			    printf("You have successfully done Top-up Recharge");
			    break;
		case 3 :
			    printf("You have successfully done Special Recharge");
			    break;
		
		default : 
				 printf("Plz Enter Valid Choice");
							    
	}

}