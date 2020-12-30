all: ./src/Color/Color.cpp ./src/Point/Point.cpp ./src/Turtle/Turtle.cpp turtle_main.cpp
	clang++ -std=c++11 ./src/Color/Color.cpp ./src/Point/Point.cpp ./src/Turtle/Turtle.cpp turtle_main.cpp -o draw-turtle -lGL -lglut -lGLU

clean:
	rm draw-turtle
