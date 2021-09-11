# Deterministic Finite Automata
A deterministic finite automaton M is a 5-tuple, (Q, Σ, δ, q₀, F), consisting of the following:  

A finite set of states Q  
A finite set of input symbols called the alphabet Σ  
A transition function δ : Q × Σ → Q  
An initial or start state q₀ ∈ Q  
A set of accept states F ⊆ Q

δ is defined by the following state transition table:  
  
δ(S1, 0) = S2  
δ(S1, 1) = S1  
δ(S2, 0) = S1  
δ(S2, 1) = S2  

Status: In Progress  
