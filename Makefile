CC = g++
TARGET = play.exe
OBJS = main.o Quick_Sort.o Bubble_Sort.o

CFLAGS = -wall

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CC) -o $@ $^
.cpp.o:
	$(CC) -c -o $@ $<
clean:
	rm -rf $(OBJS) $(TARGET)