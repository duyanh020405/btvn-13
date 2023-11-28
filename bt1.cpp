#include <stdio.h>
#include <string.h>
main(){
	  char str[100];
	  int size=0;
 do { int choice;
      printf("1.nhap chuoi ki tu\n");
      printf("2.in ra do dai chuoi va in ra chuoi\n");
      printf("3.in ra chuoi dao nguoc\n");
      printf("4.in ra so luong chu cai\n");
      printf("5.in ra so luong so trong chuoi\n");
      printf("6.in ra so luong ki tu dac biet trong chuoi\n");
      printf("7.thoat\n");
      printf("chon cua ban :\n");
      scanf("%d",&choice);
      switch(choice) 
	  {
	  	case 1 : 
	  	 printf("nhap chuoi ki tu\n");
	  	 scanf("%c",&str);
	  	 gets(str);
	  	break;
	  	case 2 :
	  	 puts(str);
	  	 size = strlen(str);
	  	 printf("do dai =%d\n",size);
	  	break;
	  	case 3 :
	  		printf ("chuoi dao nguoc :%s\n",strrev(str));
	  		break;
	  	case 5 :
	  		int count=0;
	  		for (int i=0;i<size;i++)
	  		{ 
			  for (int k=0;k<10;k++)
			 {
			    if (str[i]== k)
				  count++;
			 }
			}
			printf("phan tu chu so =%d\n",count);
			break;
	  }
      
	}while("ff");
}
