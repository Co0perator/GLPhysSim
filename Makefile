default:
	make all

all:
	gcc src/GLPS_gl_handler.c src/Main.c -o GLPhysSim -lGLEW -lglfw -lGL -lm -lX11 -lpthread -lXi -lXrandr -ldl