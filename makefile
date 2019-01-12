# makefile
# Author: Stephen Polcyn

all: gencsv
	g++ -o gencsv -O2 gencsv.cpp
