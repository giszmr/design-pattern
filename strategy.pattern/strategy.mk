objects=main.o context.o strategy_add.o strategy_subtract.o strategy_multiply.o
mystrategytest : $(objects)
	g++ -o mystrategytest $(objects)
main.o : context.h strategy.h strategy_add.h strategy_subtract.h strategy_multiply.h
context.o : context.h
strategy.o : strategy.h
strategy_add.o : strategy_add.h
strategy_subtract.o : strategy_subtract.h
strategy_multiply.o : strategy_multiply.h

.PHONY : clean
clean :
	-rm mystrategytest $(objects)
