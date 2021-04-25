objects=main.o circle.o rectangle.o shape_factory.o
myshapetest : $(objects)
	g++ -o myshapetest $(objects)
main.o : shape_ifc.h rectangle.h circle.h shape_factory.h
shape_factory.o : shape_factory.h circle.h rectangle.h
circle.o : circle.h
rectangle.o : rectangle.h

.PHONY : clean
clean :
	-rm  myshapetest $(objects)

