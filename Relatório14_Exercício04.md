filho(hades, cronos).
filho(hades, reia).
filho(zeus, cronos).
filho(zeus, reia).
filho(reia, urano).
filho(crono, urano).

dominio(hades, submundo).
dominio(zeus, ceu).
dominio(zeus, mar).

habita(hades, submundo).
habita(zeus, olimpo).

divindade_olimpica(Deus) :-
    filho(Deus, cronos),
    (dominio(Deus, ceu) ; dominio(Deus, mar) ; dominio(Deus, submundo)).

deus_maior(Deus) :-
    dominio(Deus, X),
    dominio(Deus, Y),
    habita(Deus, olimpo),
    X \= Y.

irmaos_germanos(A, B) :-
    filho(A, X), filho(A, Y),
    filho(B, X), filho(A, Y),
    X \= Y , A \= B.

ancestral(A, D) :-
    filho(D, A).

ancestral(A, D) :-
    filho(D, Z),
    ancestral(A, Z).

%	Query:
% ?- ancestral(urano, X).
