all: AcceptState.o Alphabet.o Automata.o FirstState.o main.o Node.o State.o Transition.o
	g++ -o dfa AcceptState.o Alphabet.o Automata.o FirstState.o main.o Node.o State.o Transition.o

AcceptState.o:
	g++ -c AcceptState.cpp AcceptState.hh State.cpp State.hh

clean:
	rm -f *.o dfa