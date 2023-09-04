void main()
{
	float a,b,c,d,f,g;
	
	printf("enter your val:");
	scanf("%f" ,&a);
	
	if(a<=50){
		c=a*0.5;
		
	}
    else if(a>50&&a<=150){
		c=50*0.50-(a-50)*0.75;
		
	}
	else if(a>150&&a<=250){
		c=50*0.50+100*.75+(a-150)*1.20;
	
	}
	else if(a>250){
		c=50*0.50+100*0.75+100*1.20+(a-250)*1.50;
		
	}
	g=c+(c*20/100);
		printf("%f" ,g);
}
