#include<stdio.h>

main()
{
	int choice;
	
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");	
	printf("Press 3 for Gujrati\n");	
	
	printf("Enter Your Choice =");
	scanf("%d",& choice);
	
	switch(choice)
	{
		case 1 :
				printf("press 1 for Internet Recharge\n");
				printf("Press 2 for Top-up Recharge\n");
				printf("Press 3 for Special Recharge\n");
				
				printf("Enter Your Choice =");
				scanf("%d",&choice);
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
				}
				break;
		case 2  :
				printf("Internet Recharge ke liye 1 dabaiye\n");
				printf("Top-up Recharge ke liye 2 dabaiye\n");
				printf("Special Recharge ke liye 3 dabaiye\n");
				
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
				}
				break;
		case 3 :
				printf("Internet Recharge mate 1 dabavo\n");
				printf("Top-up Recharge mate 2 dabavo\n");
				printf("Special Recharge mate 3 dabavo\n");
				
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
				}
				break;		
		default : 
				 printf("Plz Enter Valid Choice");
							    
	}

}