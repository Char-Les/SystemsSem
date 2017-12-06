all:
	gcc -o sem sem.c

run: all
	./sem

c: all
	./sem -c 4

v: all
	./sem -v

r: all
	./sem -r

cvcr: all
	./sem -c 4
	./sem -v
	./sem -c 3
	./sem -r
