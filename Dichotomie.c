#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double f(double x){
     double y;
     y=(x+1);
      return y;}
void dichotomie(){
    int i,n;
    double a,b,x;
    double E;
    double x1;
    printf("\ndonner l'intervalle [ a b ]\n : ");
    scanf("%lf %lf",&a,&b);
    printf("donner E : ");
    scanf("%lf",&E);
    if(f(a)==0){
         printf("la solution est : %lf",a);}
    if(f(b)==0){
          printf("la solution est : %lf",b);}
     if(f(a)*f(b)>0){
           printf("on choisie un autre intervalle : ");goto fin;}
     if(f(a)*f(b)<0){
           n=(log10((b-a)/E)/(log10(2)))+1;
           printf("%d",n);
    for(i=1;i<=n;i++){
           x1=(a+b)/2;
          if(f(a)*f(x1)<0){
                    b=x1;}
           else if(f(b)*f(x1)<0){
                     a=x1;
    }
    }
    printf(" %lf ",x1);
     }
    fin :{}
    }
    int main(int argc, char *argv[]){
          while(1){
              dichotomie();}
               system("PAUSE>null");
     return 0;}
