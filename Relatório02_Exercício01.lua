io.write("Digite o inicio do intervalo: ")
M = io.read()
io.write("Digite o final do intervalo: ")
N = io.read()
io.write("Digite o numero que deseja os multiplos: ")
X = io.read()

M = tonumber(M)
N = tonumber(N)
X = tonumber(X)

function FindMultiple(num1, num2)
    if num1 % num2 == 0 then
        return true
    end
    return false
end

while M <= N do
    if X == 0 then
        print("Todo o numero e multiplo de 0")
        break
    end
    if FindMultiple(M, X) then
        print(M.." E multiplo de "..X)
    end
    M = M+1
end
