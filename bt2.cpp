#include <stdio.h>
#include <string.h>
main(){
	  char str[100],n=0;
	  int count=0;
 do { int choice;
      printf("1.nhap chuoi ki tu\n");
      printf("2.in ra do dai chuoi \n");
      printf("3.nhap vao 1 ki tu , dem xem lan xuat hien cua ki tu \n");
      printf("4.nhap vao 2 ki tu ,thay the cac ki tu thu 2 trong chuoi thanh ki tu thu nhat\n");
      printf("5.nhap vao 1 ki tu ,xoa bo cac ki tu trong chuoi\n");
      printf("chon cua ban :\n");
      scanf("%d",&choice);
      switch(choice) 
	  {
	  	case 1 : 
	  	 printf("nhap chuoi ki tu\n");
	  	 scanf("%s",&str);
	  	 gets(str);
	  	break;
	  	case 2 :
	  	 puts(str);
	  	break;
	  	case 3 :
	  	 int size = strlen(str);
	  	 printf("nhap ki tu");
	  	 scanf("%s",&n);
	  	 for(int i=0;i<size;i++)
		   {
		   	if (str[i]==n)
			   {
			   	count++;
			   }
		   }
		   printf("gom co %d lan xuat hien",count);
      
    }
  }while("ff");
}
