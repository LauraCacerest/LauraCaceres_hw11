#include <stdio.h>
#include <math.h>

using namespace std;


//Valores ingresados por el Usuario: m,v,x, donde h se utiliza para el metodo de integracion

double mov_particula (double x_0, double M, double m, double G, double h)
int main(){

   int M=1000,G=10;
   int m;
   double x,v,h;

   cout << "Ingresa valor de Particula con masa m:" << endl;
   cin >> m;

   cout << "Ingresa Valor de Velocidad inivial v:" << endl;
   cin >> v;

   cout <<"Ingresa valor de Posicion Inicial:" << endl;
   cin >> x;

  cout << "Ingresa Valor h "<<endl;
  cin >> h;

  mov_particula(x,v,t,M,G,h);

  return 0;

}

//Metodo para calcular el movimiento de la Particula, donde se inicializn los valores
double mov_particula (double x_0, double v_0, double M, double m, double G, double h, double t){
  int i;
  float p, lc, *a, cos, *x,*v;
  for (i=0; i<=t; i++){
    if (i==0)
    {
      x[i]=x_0;
      v[i]=v_0;
      t[i]=x[i]/v[i];
      ja=sqrt(pow(x,2)+pow(x,2));
      lc=(G*M*m)/(pow(p,2));
      a[i]=-lc/M;
    }
      x[i]=x[i-1]+v[i-1]*h;
      p=sqrt(pow(x,2));
      cos=x[i]/d;
      v[i]=[i-1]+a[i-1]*h;
      lc=(G*M*m)/(pow(p,2));
      a[i]=-lc*cos/M;
      cout << x[i] << " " << v[i] << " " t[i] << endl;


  }


}
