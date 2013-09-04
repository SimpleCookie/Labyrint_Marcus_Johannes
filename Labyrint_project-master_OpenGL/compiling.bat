g++ -o MazeGame.exe main.cpp Character.cpp Game.cpp Maze/Maze.cpp Inputs.cpp Obstacle.cpp Maze/Maze.h Inputs.h Character.h Game.h Obstacle.h -static-libgcc -static-libstdc++

g++ main.cpp -L"C:\MinGW\freeglut\lib" -I"C:\MinGW\freeglut\include" -lfreeglut -lopengl32
pause
http://www.datanova.se/f%C3%B6r-privatpersoner/pc-reparationer-2434412


g++ -o MazeGame_OpenGL.exe main2.cpp Character.cpp Game.cpp Maze/Maze.cpp Inputs.cpp Obstacle.cpp render.cpp -static-libgcc -static-libstdc++ -L"C:\MinGW\freeglut\lib" -I"C:\MinGW\freeglut\include" -lfreeglut -lopengl32 -lGlu32
