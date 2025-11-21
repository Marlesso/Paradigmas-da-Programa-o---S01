filho(hades, cronos).
filho(hades, reia).

dominio(hades, submundo).

divindade_olimpica(Deus) :-
    filho(Deus, cronos),
    (dominio(Deus, ceu) ; dominio(Deus, mar) ; dominio(Deus, submundo)).

%	Query:
% ?- divindade_olimpica(X).
