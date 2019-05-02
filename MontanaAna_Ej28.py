import numpy as np 
import matplotlib.pyplot as plt
import os


os.system("g++ MontanaAna_Ej28.cpp -o MontanaAna_Ej28.x")
os.system("./MontanaAna_Ej28.x")

datos = np.loadtxt("datoscalor.dat")
tiempo= np.linspace(0,200,len(datos))

plt.figure(figsize=(20,15))
plt.subplot(1,2,1)
plt.imshow(datos)
plt.ylabel('Indice T')
plt.xlabel('Indice X')


plt.subplot(1,2,2)
plt.plot(tiempo,datos, label="Tiempo incial")
plt.plot(tiempo,datos, label= "Tiempo final")
plt.ylabel('Temperatura')
plt.xlabel('Indice x')
plt.legend()


plt.savefig("imagencalor.png")