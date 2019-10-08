#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<cstdio>
using namespace std;

int main(){
    int n,n1,n2,total,p1 =0,p2=0,p3=0;
    char ch;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> n1 >> ch >> n2;
        // Is a Three quarter
        if(n1 == 3){
            p3++;
        }
        // Is a half
        else if(n2 == 2){
            p2++;
        }
        // Is a quarter
        else if(n2 == 4){
            p1++;
        }
    }
    total = p3;
    p1 = p1-p3; // Si es positivo, sobran pedazos de pizza de 1/4. Si no, no.
    total+=(p2-p2%2)/2; // Sumarle los pares de medios que existan para formar una pizza.

    // Si sobro un pedazo de un medio, se crea una nueva pizza y se restan dos cuartos que estaran en esta nueva pizza.
    if(p2%2){
        total++;
        p1-=2;
    }
    // Si se necesitan cuartos, 
    if(p1 > 0){
        total+=(p1-(p1%4))/4;
        if(p1%4>0){
        total++;
        }
    }

    cout <<total+1;
    return 0;
}