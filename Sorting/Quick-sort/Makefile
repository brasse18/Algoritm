CC=g++

CFLAGS=-g -Wall -fpermissive
LFLAGS=

OUT=Quick-sort

all: $(OUT)

$(OUT): *.h *.cpp
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)

clean:
		rm -f $(OUT)
