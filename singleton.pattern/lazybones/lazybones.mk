objects=main.o lazybones.o
MySingleton : $(objects)
	g++ -o MySingletonTest $(objects)
main.o : lazybones.h
lazybones.o : lazybones.h

.PHONY : clean
clean:
	-rm MySingletonTest $(objects)

