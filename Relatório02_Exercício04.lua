function Calculadora(num1, num2, operacao)
    if operacao == "+" then
        return num1 + num2
    elseif operacao == "-" then
        return num1 - num2
    elseif operacao == "*" then
        return num1 * num2
    elseif operacao == "/" then
        if num2 ~= 0 then
            return num1 / num2
        else
            return "Erro: Divisao por zero"
        end
    else
        return "Erro: Operacao invalida"
    end
end

io.write("Digite o primeiro numero: ")
local num1 = tonumber(io.read())
io.write("Digite a operacao (+, -, *, /): ")
local operacao = io.read()
io.write("Digite o segundo numero: ")
local num2 = tonumber(io.read())

print("Resultado: " .. Calculadora(num1, num2, operacao))
