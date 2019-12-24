PROGRAM_NAME=print

$(PROGRAM_NAME): $(PROGRAM_NAME).o
	ld $(PROGRAM_NAME).o -o $(PROGRAM_NAME) -macosx_version_min 10.13 -lSystem

$(PROGRAM_NAME).o: $(PROGRAM_NAME).S
	nasm -f macho64 $(PROGRAM_NAME).S

clean:
	rm -rf $(PROGRAM_NAME).o $(PROGRAM_NAME)
