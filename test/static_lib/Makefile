#############################################################  
# Makefile for static library.  
#############################################################  
#set your own environment option  
CC = g++  
CC_FLAG = -D_NOMNG -D_FILELINE  
     
#static library use 'ar' command   
AR = ar  
      
#set your inc and lib  
INC = -I./include/ics 
LIB = -L./lib/ics/libstagefright -ltest_1 -L./lib/ics/libutils -ltest_2
      
#make target lib and relevant obj   
PRG = ./libtest_static_lib.a  
OBJ = test_static_lib.o  
      
#all target  
all : $(PRG)
$(OBJ) : test_static_lib.cpp
	$(CC) $(CC_FLAG) $(INC) -fPIC -c test_static_lib.cpp $(LIB)

$(PRG):$(OBJ)
	${AR} -rv ${PRG} $?  
      
#	$(CC) $(CC_FLAG) $(INC) -c $*.cpp -o $*.o  
      
.PRONY:clean  
clean:  
	@echo "Removing linked and compiled files......"  
	rm -f $(OBJ) $(PRG)  
