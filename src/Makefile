clean:		# remove all targets
	del main.exe

main.exe: main.o add.o



hello:
	@echo "Hello, world"
	@echo "This line will print if the file hello does not exist."
	@echo Hello > hello

files := file1 file2

x := dude

all: f1.o	f2.o

f1.o f2.o:
	@echo $@

blah: blah.o
	g++ blah.o -o blah	

blah.o: blah.c 
	g++ -c blah.c -o blah.o 	

# In case blah.c does not exist
blah.c:
	@echo int main() { return 0; } >blah.c 







some_file:
	echo "Look at this variable: " $(files) 
	type nul > some_file	

file1:
	type nul > file1

file2:
	type nul > file2

thing_wrong := *.one
thing_right := $(wildcard *.o)

wildcardtest: one two three four

one: 
	@echo $(thing_wrong)

two: 
	@echo *.o

three: 
	@echo $(thing_right)

four: 
	@echo $(wildcard *.o)

printwildcard: $(wildcard *.cpp)
	dir /b $?

main: main.o add.o
	g++ main.o add.o -o main.exe
	.\main.exe

main.o: main.cpp
	g++ -c main.cpp -o main.o

add.o: add.cpp
	g++ -c add.cpp -o add.o
