# notes
# -> targets can be file names or just phony ones
# $< matches prerequisites
# $@ matches target

# := operator is called the 'simply expanded variable' operator. It prevents
# infinite loops in variable expansion
# for instance:
# 	"NEW_ECHO = ${NEW_ECHO} > file" results in an infinite variable expansion loop
#	"NEW_ECHO := ${NEW_ECHO} > file" will not result in an infinite loop

# if defined, the given target is run by default, if not defined, the first target is run
# .DEFAULT_GOAL := clean

SHELL := /usr/bin/bash

# to ensure a target always runs regardless of whether a file with the same name is
# present in the directory or not, include it in .PHONY. If you don't add the name to
# this variable and a file with the same name as the target exists,
# the target will not be executed
.PHONY: all echo generate clean

# target: prerequisites
#	recipe

# variables
CC = gcc
CC := ${CC} # 'simply expanded variable' operator

# wildcard finds all files matching the given pattern and stores their names in the provided
# variable
FILES = ${wildcard *.c}
# for every item that matches the first pattern in FILES(%.c), substitute it with the name
# that precedes the .c part(%) and store the cummulative result in BINS
# eg "FILES = one.c two.c bar.k" will result in "BINS = one two bar.k"
BINS = ${FILES:%.c=%}

all: echo generate hello hello2 hello3
	@echo "That will be all :)"

echo:
# @ is for suppressing the recipe from being echoed
	@echo "Hello there!"

generate:
	@echo "Creating files..."
	@touch file-{0..9}.txt

# best practice is to run clean on its own using 'make clean', not include it in all
clean:
	@echo "Cleaning up..."
	@sleep 3
	@rm file-*.txt

ls_files:
	@echo "Source files:"
	@echo ${FILES}
	@echo "Equivalent binary files:"
	@echo ${BINS}

# compiles the c files to .o files
# file.o depends on file.c
%.o: %.c
# $< matches prerequisites and $@ matches the target
	${CC} -c $<

# compiles .o files to executables
# file depends on file.o
%: %.o
	${CC} $< -o $@

all_greet: ${BINS} ${}
	for file in ${BINS}; do ./"$${file}"; done
