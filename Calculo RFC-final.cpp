#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

void PedirDatos(char *nombre, char *apellidoMaterno,
            char *apellidoPaterno,char *fechaNacimiento);
void CalcularRFC();
			int vocal(char a);
void homoclave(char *nombreCompleto,char *RFC);
			char* substr(char *cadena, int comienzo, int longitud);

main()
{
      int opc,c=1;
      do{
      system("cls");
      printf("\n\n\n");
      if(c==16) c=1;
      printf("               PRESIONA ENTER PARA CONTINUAR\n\n");
      c++;
      }while(!kbhit());
      
      do{
      printf("                         Teclea una opcion\n\n");
      printf("                           1) Calcula RFC\n");
      printf("                           2) Salir\n");
      scanf("%d",&opc);
      switch(opc)
      {
                 case 1:
                      system("cls");
                      CalcularRFC();
                      break;
      }
                      
      }while(opc!=2);
}

void PedirDatos(char *nombre, char *apellidoMaterno,
            char *apellidoPaterno,char *fechaNacimiento)
{
            printf("\n\n");
             printf("           INTRODUCE TUS DATOS                \n");
            fflush(stdin);
            printf("\n\n         Teclea tu Apellido Paterno: ");
            gets(apellidoPaterno);
            printf("         Teclea tu Apellido Materno: ");
            gets(apellidoMaterno);
            printf("         Teclea tu Nombre: ");
            gets(nombre);
            printf("         Teclea tu Fecha de nacimientio(aa/mm/dd): ");
            gets(fechaNacimiento);
            
}

void CalcularRFC()
{
    int i,T_apellidoPaterno,c=4;
    char nombre[15]={0},apellidoMaterno[15]={0},apellidoPaterno[15]={0},
         fechaNacimiento[9]={0},RFC[13]={0},nombreCompleto[45]={0};
    //Llamamos a esta funcion para pedir los datos para calcular el RFC
     PedirDatos(&*nombre,&*apellidoMaterno,&*apellidoPaterno,
                  &*fechaNacimiento);
     //Utilizamos strupr para ttrasformar a mayusculas
     strupr(nombre);
     strupr(apellidoMaterno);    //transformamos a mayusculas
     strupr(apellidoPaterno);
     //colocamos el caracter 0 del apellido paterno en la posicion 0 
     // del RFC 
     RFC[0]=apellidoPaterno[0];
     
     T_apellidoPaterno=strlen(apellidoPaterno);
     //bsucamos la primer vocal en el apeido paterno y la colocamos en la 
     // posicion 1 del RFC
     for(i=1;i<T_apellidoPaterno;i++)
     {
         if(vocal(apellidoPaterno[i])==1)
         {
           RFC[1]=apellidoPaterno[i];
           break;
         }
     }
     //colocamos la primer letra del apellido materno en la posicon 2 del RFC
     RFC[2]=apellidoMaterno[0];
     //colocamos la primer letra del nombre en la posicion 3 del RFC
     RFC[3]=nombre[0];
     // separamos la fecha y la colocamos en sus respectivos lugares
     for(i=0;i<8;i++)
     {
          if(fechaNacimiento[i]!='/')
          {
              RFC[c]=fechaNacimiento[i];
              c++;
          }
     }
     //juntamos apellidos y nombre para dar origen al nombre completo
     strcat(nombreCompleto, apellidoPaterno);
     strcat(nombreCompleto, " ");
     strcat(nombreCompleto, apellidoMaterno);
     strcat(nombreCompleto, " ");
     strcat(nombreCompleto, nombre);
     //llamamos a la funcion homoclave la cual calcula los ultimos 3 digitos
     // del RFC
     homoclave(&*nombreCompleto,&*RFC);
     // Imprimismo el RFC
     printf("\n                                RFC: \n");
     printf("                 %s                \n",RFC);
     system("pause");
     system("cls");
}

int vocal(char a)//funcion para comprobar si es vocal
{
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
       return 1;
    }                                 
    else return 0;
}

void homoclave(char *nombreCompleto, char *RFC)
{
      int moduloVerificador=0,suma2=0;
      int i,j=0,T_nombreCompleto,c=1,tama,num1,num2,suma=0,div=0,mod=0,x=0;
      // tablas para comparacion y sustitucion
      char *tabla1_C= "&ÑABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ";
      char *tabla1_N1="111111111112222222223333333300000000000";
      char *tabla1_N2="001234567891234567892345678901234567890";
      char *tabla2_C= "BCDEFGHIJKLMNPQRSTUVWXYZ";
      char *tabla3_N= "0123456789";
      char nombreNum[80]={0},uno,dos,cadena[3]={0},cadena2[2]={0},num[2];
      T_nombreCompleto=strlen(nombreCompleto);
      // convertimos el nombre completo a su equivalencia numerica con las
      // tablas de arriba 
      nombreNum[0]='0';
      for(i=0;i<T_nombreCompleto;i++)
      {
           for(j=0;j<39;j++)
           {
                  if(nombreCompleto[i]==tabla1_C[j])
                  {
                      nombreNum[c]=tabla1_N1[j];
                      c++;
                      nombreNum[c]=tabla1_N2[j];
                      c++;
                      break;
                  }
           }
      }
      // realizamos una operacion el primer caracter por diez mas el siguiente 
      // caracter por el siguiente caracter y asi suseciavamente
      tama=strlen(nombreNum)-1;
      for(i=0;i<tama;i++)
      {
          j=0;
          cadena[j]=nombreNum[i];
          j++;
          cadena[j]=nombreNum[i+1];
          j=0;
          num1=atoi(cadena);
          cadena2[j]=nombreNum[i+2];
          num2=atoi(cadena2);
          suma+=num1*num2;
      }
      // el resultado de arriba lo devidimos entre 1000 y su residuo lo 
      // almacenamos para las siguientes operaciones
       mod=suma%1000;
       //guardamos el resultado de dividir entre 34 entero
       div=mod/34;
       //aqui almaxcenamos el residuo
       mod=mod%34;
       j=0;
       // trasformamos div a su equivalente alfanumerico en la tabla2
       for(i=10;i<=33;i++) //div
       {
            if(div==i)
            {
               RFC[10]=tabla2_C[j];
               break;
            }
       j++;
       }
       for(i=0;i<=9;i++)
       {
             if(div==9)
             {       
                      RFC[10]='A';
                      break;
             }
             else if(div==i)
             {
                      RFC[10]=i+48;
                      break;
             }
       }
       j=0;
       // trasformamos mod a su equivalente alfanumerico en la tabla2
       for(i=10;i<=33;i++) // mod 
       {
            if(mod==i)
            {
               RFC[11]=tabla2_C[j];
               break;
            }
       j++;
       }
       for(i=0;i<=9;i++)
       {
             if(mod==9)
             {
                      RFC[11]='A';
                      break;
             }
             else if(mod==i)
             {
                      RFC[11]=i+48;
                      break;
             }
       }
       c=65;
       x=48;
       //por ultimo trasformamos cada uno de los carateres a su equvalente 
       // numerico y relizamos la operacion de la sig. formula:
       //    suma=equivalente numerico*(14-(contador+1);
       for(i=0;i<12;i++)
       {
               c=65;
               x=48;      
               for(j=0;j<26;j++)
               {
                     if(RFC[i]==c)
                     {
                       suma2+=((c-55)*(14-(i+1)));
                       break;
                     }
                     else if(RFC[i]==x)
                     {
                          suma2+=((x-48)*(14-(i+1)));
                          break;
                     }
                     c++;
                     x++;
               }
       }
       //obtenemos modulo verificador
       moduloVerificador=suma2%11;
       if(moduloVerificador==0) RFC[12]='0';
       else
       {
           suma2=11-moduloVerificador;
           if(suma2==10) RFC[12]='A';
           else
           {
               RFC[12]=suma2+48;
           }
       }
}
