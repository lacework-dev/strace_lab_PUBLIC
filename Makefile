all:
	mkdir -p ./bins/;
	gcc ./src/example_1.c -o ./bins/example_1.bin
	gcc ./src/example_2.c -o ./bins/example_2.bin
	gcc -I ./inc/ ./src/example_3.c -o ./bins/example_3.bin
	gcc ./src/example_4.c -o ./bins/example_4.bin
	gcc ./src/example_5.c -o ./bins/example_5.bin

clean:
	rm ./bins/example_*
