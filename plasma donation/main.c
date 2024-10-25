#include <stdio.h>
void main()

  FILE *fptr ;
  int i, n, donarno ;
  float age, weight, bg ;
  char name[10] ;
  fptr = fopen("DONAR.DAT", "w") ;
  printf("Enter the number of donars : ") ;
  scanf("%d", &n) ;
  for(i = 0 ; i < n ; i++)
  {
      printf("Enter the donar number : ") ;
      scanf("%d", &donarno) ;
      printf("Enter the name : ") ;
      scanf("%s", name) ;
      printf("Enter the age,weight & blood group : ") ;
      scanf("%f %f %f", &age, &weight, &bg) ;
      fprintf(fptr, "%d %s %f %f %f", donarno, name, age, weight, bg) ;
  }
  fclose(fptr) ;
  fptr = fopen("DONAR.DAT", "r") ;
  printf("Donar.   No. Name  age    weight    bg   \n");
  for(i = 0 ; i < n ; i++)
  {
      fscanf(fptr,"%d %s %f %f %f", &donarno, name, &age, &weight, &bg) ;
      printf("%d 	 %s 	 %.f 	 %.2f 	 %.2f 	 %.2f\n", donarno, name, age, weight, bg, age + weight - bg) ;
  }
  fclose(fptr);
  return 0;
}
