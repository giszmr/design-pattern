objects=main.o subject.o hexadecimal_observer.o octonary_observer.o binary_observer.o
myobservertest : $(objects);
	g++ -o myobservertest $(objects)
main.o : subject.h observer.h binary_observer.h octonary_observer.h hexadecimal_observer.h
subject.o : subject.h observer.h
binary_observer.o : binary_observer.h
octonary_observer.o : octonary_observer.h
hexadecimal_observer.o : hexadecimal_observer.h


.PHONY : clean
clean:
	rm myobservertest $(objects)
