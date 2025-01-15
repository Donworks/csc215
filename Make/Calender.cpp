calender: Event.o event.o doctest.o tes_event.o
	g++ Event.o event.o doctest.o tes_event.o -o calender

Event.o: event.cpp
	g++ -c event.cpp

event.o: event.h
	g++ -c event.h

doctest.o: doctest.h
	g++ -c doctest.h

tes_event.o: test_event.cpp
	g++ -c test_event.cpp

clean:
	rm *.o cook
