% Fatos adicionais/revisados
area(calculo_1, 'matematica').
area(logica, 'computacao').
area(introducao_app, 'aplicacoes').
area(fundamentos, 'fundamental').
area(ia, 'aplicacoes').

pre_requisito(calculo_1, ia).
pre_requisito(logica, ia).
pre_requisito(fundamentos, logica).
pre_requisito(introducao_app, ia).

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

especialista_comp(Aluno) :-
    findall(D, (concluiu(Aluno, D), area(D, 'computacao')), ListaDisciplinas),
    length(ListaDisciplinas, N),
    N >= 2.

deficiencia_mat(Aluno) :-
    \+ (concluiu(Aluno, D),area(D, 'matematica')).

disciplina_raiz(D) :-
    \+ pre_requisito(_, D).

disciplina_folha(D) :-
    \+ pre_requisito(D, _).

% Query: % ?- disciplina_raiz(D), area(D, Area), Area \= 'aplicacoes'.
