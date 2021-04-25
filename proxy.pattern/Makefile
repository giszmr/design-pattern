objects=main.o real_image.o proxy_image.o
myproxytest : $(objects)
	g++ -o myproxytest $(objects)
main.o : image.h real_image.h proxy_image.h
real_image.o : real_image.h
proxy_image.o : real_image.h proxy_image.h

.PHONY : clean
clean :
	-rm myproxytest $(objects)
