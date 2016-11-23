#include <stdio.h>  

#include <pthread.h>  

  

//Variavel Global  

int variavel=1;  

  

 main()  {  

    pthread_t f_thread1, f_thread2;  

    void *f1();  

    pthread_create(&f_thread1,NULL,f1,NULL);  

    pthread_create(&f_thread2,NULL,f1,NULL);  

   

 pthread_join(f_thread1,NULL);  

 pthread_join(f_thread2,NULL);  

   

 printf("Valor da variavel = %d\n",variavel);  

 }  

   

 void *f1(){  

   int i,z;  

   for (i=0;i<1000;i++){  

      z=variavel;  

      z++;  

      variavel=z;  

   }  

   pthread_exit(0);  

 }