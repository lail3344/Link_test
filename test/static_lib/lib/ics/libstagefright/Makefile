#############################################################   
# Makefile for shared library.  
#############################################################  
#set your own environment option  
CC = g++
CC_FLAG = 

#set your inc and lib  
INC = -I../../../include/ics/test/
LIB = 

#make target lib and relevant obj   
PRG = libtest_1.so  
SRC = test_1.cpp

#all target  
all:$(PRG)  

$(PRG):$(OBJ)  
	$(CC) $(SRC) -fPIC -shared -o $@ $(LIB)
      
#.SUFFIXES: .c .o .cpp  
#.cpp.o:  
#	$(CC) $(CC_FLAG) $(INC) -c $*.cpp -o $*.o  
      
.PRONY:clean  
clean:  
	@echo "Removing linked and compiled files....."
	rm -f $(OBJ) $(PRG)  
