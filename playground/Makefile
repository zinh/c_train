hello: main.o
	ld main.o -o hello -macosx_version_min 10.13 -lSystem

main.o: main.S
	nasm -f macho64 main.S

clean:
	rm -rf main.o hello
