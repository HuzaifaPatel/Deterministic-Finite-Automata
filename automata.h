#ifndef NODE_H
#define NODE_H
#include <set>
#include "state.h"
#include "alphabet.h"
#include "transition.h"

class Automata{
	public:
		Automata();
		~Automata();
	private:
		std::set<State> 	states;
		std::set<Alphabet> 	alphabet;
		TransitionFunction 	tranFunc;
		StartState 			sState;
		AcceptState 		aState;
}