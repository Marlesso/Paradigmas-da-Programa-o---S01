% Fatos: area(Disciplina, Area)
area(calculo_1, 'matematica').
area(calculo_2, 'matematica').
area(logica, 'computacao').        % Comp 1
area(prog_avancada, 'computacao'). % Comp 2
area(analise_dados, 'computacao'). % Comp 3
area(geometria, 'matematica').

% Fatos: concluiu(Aluno, Disciplina)
concluiu(joao, logica).           
concluiu(joao, prog_avancada).    
concluiu(joao, geometria).        

concluiu(maria, logica).          % Comp (1/2)
concluiu(maria, analise_dados).   % Comp (2/2)
% Maria NAO concluiu nenhuma de matematica (0/0) -> OK para deficiencia_mat

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
