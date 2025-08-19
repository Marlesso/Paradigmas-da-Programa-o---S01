10 LET RANDOM = RND(100)
20 INPUT "Tente adivinhar o número! Digite um número entre 0 e 100: "; NUM

30 IF NUM > RANDOM THEN GOTO 70
40 IF NUM < RANDOM THEN GOTO 90
50 IF NUM = RANDOM THEN PRINT "Parabens! Você acertou o número!"

60 END

70 PRINT "Menor"
80 GOTO 20

90 PRINT "Maior"
100 GOTO 20

101 END
