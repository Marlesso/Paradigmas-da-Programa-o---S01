% Fatos: area(Disciplina, Area)
area(d1, 'matematica').
area(d2, 'matematica').
area(d3, 'computacao').
area(d4, 'matematica').
area(d5, 'fisica').

% Fatos: creditos(Disciplina, Quantidade)
creditos(d1, 6).
creditos(d2, 4).
creditos(d3, 8).
creditos(d4, 4).
creditos(d5, 3).

% Fatos: prerequisito(Pre_Requisito, Disciplina_Requerente)
pre_requisito(d1, d3).
pre_requisito(d1, d4).
pre_requisito(d2, d3).
pre_requisito(d3, d5).

alto_impacto(D) :-
    creditos(D, C),
    C > 5,
    pre_requisito(D, D1),
    pre_requisito(D, D2),
    D1 \= D2.

% Query: % ?- area(D, 'matematica'), creditos(D, 4), \+ pre_requisito(D, _).
