% Fatos: area(Disciplina, Area)
area(calculo_1, 'fundamental').
area(calculo_2, 'nao_basica').
area(prog_avancada, 'nao_basica').
area(ia, 'nao_basica').
area(logica, 'fundamental').

% Fatos: prerequisito(Pre_Requisito, Disciplina_Requerente)
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
