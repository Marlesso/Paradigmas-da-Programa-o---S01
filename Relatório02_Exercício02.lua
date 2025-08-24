Array = {}

io.write("Digite o tamanho do array: ")
local n = tonumber(io.read())

for i = 1, n do
    io.write("Digite o elemento " .. i .. ": ")
    Array[i] = tonumber(io.read())
end

function MaiorNumero(arr)
    local maior = arr[1]
    for i = 2, n do
        if arr[i] > maior then
            maior = arr[i]
        end
    end
    return maior
end

print("O maior numero do array e: " .. MaiorNumero(Array))
