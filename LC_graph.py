import numpy as numpy
import matplotlib.pyplot as pyplot

datos=np.loadtxt('tray.txt')
x=datos[:,0]
v=datos[:,1]
t=datos[:,2]

#Codigo para graficar la Posicion de la Particula
plt.plot(t,x)
plt.figure()
plt.xlabel('Tiempo')
plt.ylabel('Posicion')
plt.legend (('Tiempo vs Posicion'),loc='upper left')
plt.title ('Cambio de la posicion con respecto al Tiempo')
plt.savefig('pos.png')

#Codigo para graficar la Velocidad de la Particula
plt.plot( t,v)
plt.figure()
plt.xlabel('Velocidad')
plt.ylabel('Tiempo')
plt.legend (('Velocidad','Tiempo'),loc='upper left')
plt.title('Velocidad vs Tiempo')
plt.savefig('vel.png')

#Grafica Final de la posicion de la Particula
plt.plot(v,x)
plt.figure()
plt.xlabel('Velocidad')
plt.ylabel('Posicion')
plt.title('Posicion de Particula respecto a su velocidad')
plt.legend (('Posicion de Particula'),loc='upper left')
plt.savefig('phase.png')
