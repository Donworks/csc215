cook: Time1.o Time.o time.o 
	g++ Time1.o Time.o time.o -o cook 

Time1.o: Time1.cpp
	g++ -c Time1.cpp

Time.o: Time.cpp
	g++ -c Time.cpp

time.o: Time.hpp
	g++ -c Time.hpp

clean:
	rm *.o cook
