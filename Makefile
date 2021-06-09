

default:
	make all

all:
	make glps

glps:
	gcc MAIDL/*.c src/*.c -o GLPhysSim -lGLEW -lglfw -lGL -lm -lX11 -lpthread -lXi -lXrandr -ldl