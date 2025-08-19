10 INPUT "Digite a primeira nota: "; N1
20 INPUT "Digite a segunda nota: "; N2
30 MEDIA = (VAL(N1) + VAL(N2))/2

40 IF MEDIA >= 60 THEN GOTO 110
50 IF MEDIA <= 30 THEN GOTO 130
    
60 INPUT "Digite a terceira nota: "; N3
70 MEDIA2 = (MEDIA + VAL(N3))/2
    
80 IF MEDIA2 >= 50 THEN GOTO 150
      
90 PRINT "Reprovado na NP3"
100 END

110 PRINT "Aprovado direto"
120 END

130 PRINT "Reprovado direto"
140 END

150 PRINT "Aprovado pela NP3"
160 END
