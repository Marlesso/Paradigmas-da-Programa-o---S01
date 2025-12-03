% Fatos: area(Disciplina, Area)
area(d1, 'matematica').
area(d2, 'matematica').
area(d3, 'computacao').
area(d4, 'matematica').
area(d5, 'fisica').
area(calculo_1, 'fundamental').
area(calculo_2, 'nao_basica').
area(prog_avancada, 'nao_basica').
area(ia, 'nao_basica').
area(logica, 'fundamental').

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
pre_requisito(calculo_1, calculo_2).
pre_requisito(logica, prog_avancada).
pre_requisito(prog_avancada, ia).
pre_requisito(calculo_2, ia).

% Fatos: concluiu(Aluno, Disciplina)
concluiu(joao, calculo_1).
concluiu(joao, logica).
concluiu(maria, calculo_1).
concluiu(maria, calculo_2).
concluiu(maria, logica).

alto_impacto(D) :-
    creditos(D, C),
    C > 5,
    pre_requisito(D, D1),
    pre_requisito(D, D2),
    D1 \= D2.

falta_concluir(Aluno, Disciplina) :-
    pre_requisito(Disciplina, _),
    \+ concluiu(Aluno, Disciplina).

aluno_apto(Aluno, Disciplina) :-
    \+ area(Disciplina, 'fundamental'),
    \+ (pre_requisito(PreReq, Disciplina),
        \+ concluiu(Aluno, PreReq)).

% Query: % ?- aluno_apto(joao, Disciplina). ?- aluno_apto(maria, ia).
