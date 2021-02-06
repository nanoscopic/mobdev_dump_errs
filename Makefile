all: dump decode

dump: dump.c
	gcc -framework MobileDevice -framework CoreFoundation -F. -o dump dump.c

mobdev_err.h: dump
	./dump

decode: decode.c mobdev_err.h
	gcc -o decode decode.c

clean:
	rm -f dump decode