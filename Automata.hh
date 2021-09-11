#ifndef NODE_H
#define NODE_H
#include <set>
#include "State.hh"
#include "Alphabet.hh"

class Automata{
	public:
		Automata();
		~Automata();
	private:
		std::set<State> states;
		std::set<Alphabet> alphabet;
		TransitionFunction tranFunc;
		StartState sState;
		AcceptState aState;
}