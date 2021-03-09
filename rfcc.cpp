 #include<stdio.h>

#include<conio.h>

#include<string.h>

char app[11], apm[11], nom[11], rfc[15], ano[7];

main()

{

      printf("\n\n\tIngresa el apellido paterno "); 

      gets(app);

      printf("\n\n\tIngresa el apellido materno ");

      gets(apm);

      printf("\n\n\tIngresa el nombre ");  

      gets(nom);

      printf("\n\n\tIngresa tu fecha de nacimiento < aa/mm/dd > ");

      gets(ano);

      

     strupr(app);

     strupr(apm);

     strupr(nom);

    

     rfc[0] = app[0];

     rfc[1] = app[1];

     rfc[2] = apm[0];

     rfc[3] = nom[0];

     strcat(rfc, ano);

    

     printf("\n\n\tSu nombre es:  %s %s %s ",nom,app,apm);

     printf("\n\n\tfecha de nacimiento: %s ",ano);

     printf("\n\n\t\tSu RFC es:  %s",rfc);

           

      getch();

}
