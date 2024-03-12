#include<stdio.h>

main()

{
	int a,b,choice;
	
	printf("Enter Value A= ");
	scanf("%d",&a);
	printf("Enter Value B= ");
	scanf("%d",&b);
	
	printf("Press 1	Addition\n");
	printf("Press 2 Subtractio\n");	
	printf("Press 3 Multiplication\n");
	printf("Press 4 Division\n");
	printf("Press 5 Modules\n");
		
	
	printf("Enter Your Choice =");
	scanf("%d",& choice);
	
	switch(choice)
	{
		case 1 :
			    printf("Addition Of %d + %d = %d",a,b,a+b);
			    break;
		case 2 :
			    printf("Subtractio Of %d - %d = %d",a,b,a-b);
			    break;
		case 3 :
			    printf("Multiplication Of %d * %d = %d",a,b,a*b);
			    break;
		case 4 :
			    printf("Division Of %d / %d = %d",a,b,a/b);
			    break;
		case 5 :
			    printf("Modules Of %d %% %d = %d",a,b,a%b);
			    break;
								    
		
		default : 
				 printf("Plz Enter Valid Choice");
							    
	}

}