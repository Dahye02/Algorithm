CC = g++
TARGET = play.exe
OBJS = main.o getNum_from_CSV.o Quick_Sort.o Bubble_Sort.o Selection_Sort.o Insertion_Sort.o Merge_Sort.o Heap_Sort.o

CFLAGS = -wall

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CC) -o $@ $^
.cpp.o:
	$(CC) -c -o $@ $<
clean:
	rm -rf $(OBJS) $(TARGET)