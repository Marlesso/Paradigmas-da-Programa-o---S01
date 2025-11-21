filho(hades, cronos).
filho(hades, reia).
filho(zeus, cronos).
filho(zeus, reia).

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

%	Query:
% ?- deus_maior(X).
