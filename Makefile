compare: main.o compare.o
	  g++ -o compare main.o compare.o

main.o: main.cpp
	  g++ -c main.cpp
        
compare.o: compare.cpp
	  g++ -c compare.cpp
	
clean:
	  rm -f *.o compare	         	  
	   
	  
