figure: main.o Triangle.o Hexagon.o Octagon.o 
	g++ -Wall -Werror -Wextra -pedantic -std=c++11 -o figure main.o Triangle.o Hexagon.o Octagon.o
main.o: main.cpp Triangle.h Hexagon.h Octagon.h
	g++ -Wall -Werror -Wextra -pedantic -std=c++11 -c main.cpp
Triangle.o: Triangle.cpp Triangle.h figure.h
	g++ -Wall -Werror -Wextra -pedantic -std=c++11 -c Triangle.cpp
Hexagon.o: Hexagon.cpp Hexagon.h figure.h
	g++ -Wall -Werror -Wextra -pedantic -std=c++11 -c Hexagon.cpp
Octagon.o: Octagon.cpp Octagon.h figure.h
	g++ -Wall -Werror -Wextra -pedantic -std=c++11 -c Octagon.cpp
clean:
	rm -f *.o figure
