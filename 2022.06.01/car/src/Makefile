# Author: Arkadiusz Bubak
# mail: arkadiusz@buabk.pl
# date: 2008.02.22

#Example of Makefile (abubak)

#--------- Link command -------------------------------------
CarFactory: CarFactory.o KviCar.o KviVan.o
	    g++ CarFactory.o KviCar.o KviVan.o -o CarFactory
	    
#--------- Compilation commands -----------------------------
CarFactory.o: CarFactory.cxx
	      g++ -c CarFactory.cxx -I../include -o CarFactory.o
			  
KviCar.o: KviCar.cxx
	  g++ -c KviCar.cxx -I../include -o KviCar.o
	  
KviVan.o: KviVan.cxx
	  g++ -c KviVan.cxx -I../include -o KviVan.o
	  
#--------- Cleaning command ---------------------------------
clean:
	  rm -rf *.o
	  
distclean:
	  rm -rf *.o *~ CarFactory
	  
