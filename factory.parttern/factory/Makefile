objects=main.o circle.o rectangle.o circle_factory.o rectangle_factory.o
myshapetest : $(objects)
	g++ -o myshapetest $(objects)
main.o : shape_ifc.h rectangle.h circle.h shape_factory.h
circle.o : circle.h
rectangle.o : rectangle.h
circle_factory.o : circle_factory.h
rectangle_factory.o : rectangle_factory.h

.PHONY : clean
clean :
	-rm  myshapetest $(objects)

