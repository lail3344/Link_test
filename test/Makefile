#############################################################   
# Makefile for shared library.  
#############################################################  
#set your own environment option  
CC = g++
CC_FLAG = -D_NOMNG -D_FILELINE

#set your inc and lib  
INC =   
LIB = -Wl,-whole-archive ./static_lib/libtest_static_lib.a -Wl,-no-whole-archive

#make target lib and relevant obj   
PRG = libtest_shared_lib.so  
SRC = test_shared_lib.cpp

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
