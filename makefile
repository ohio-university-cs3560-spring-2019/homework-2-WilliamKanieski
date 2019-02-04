OBJS = main.o ./lib/replace.a

#Compiles executable prog1 from main.o and replace.a from the lib directory
prog1: $(OBJS)
	g++ -o $@ -I ./include $(OBJS)

#Compiles main.o from main.cc and replace.h from the include directory
main.o: main.cc ./include/replace.h
	g++ -c -I ./include main.cc

#Compiles replace.o from replace.cc and replace.h
#Compiles replace.a from replace.o before deleting redundant replace.o
#replace.a is compiled into the lib directory
lib/replace.a: replace.cc ./include/replace.h
	g++ -c -I ./include replace.cc
	ar rcv ./lib/replace.a replace.o
	rm replace.o




