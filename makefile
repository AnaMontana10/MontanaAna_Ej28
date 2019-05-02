all: datoscalor.dat imagencalor.png 

imagencalor.png: datoscalor.dat MontanaAna_Ej28.py
	python MontanaAna_Ej28.py

%.dat: MontanaAna_Ej28.x
	./MontanaAna_Ej28.x

a.out: MontanaAna_Ej28.cpp
	g++ MontanaAna_Ej28.cpp -o MontanaAna_Ej28.x

clean:
	rm -rf *.x *.dat *.png