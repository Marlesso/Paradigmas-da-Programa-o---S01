% Fatos: area(Disciplina, Area)
area(calculo_1, 'matematica').
area(calculo_2, 'matematica').
area(logica, 'computacao').
area(prog_avancada, 'computacao').
area(analise_dados, 'computacao').
area(geometria, 'matematica').

% Fatos: concluiu(Aluno, Disciplina)
concluiu(joao, logica).           
concluiu(joao, prog_avancada).    
concluiu(joao, geometria).        

concluiu(maria, logica).
concluiu(maria, analise_dados).
% Maria NAO concluiu nenhuma de matematica

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

% Query: % ?- especialista_comp(Aluno), deficiencia_mat(Aluno).
