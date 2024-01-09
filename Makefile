args=-lraylib
name=./build/main.out

files=main.cpp global.h ./particle/particle.cpp ./board/board.cpp

run: $(name)
	$(name)

$(name): $(files)
	g++ -o $@ $(files) $(args)

clean:
	rm -rf $(name)
