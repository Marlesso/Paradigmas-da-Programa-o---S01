OriginalArr = {}

io.write("Digite o numero de elementos do array: ")
n = tonumber(io.read())

for i = 1, n do
    io.write("Digite o elemento " .. i .. ": ")
    OriginalArr[i] = tonumber(io.read())
end

function ParArr(arr)
    local ParArr = {}
    for i = 1, n do
        if arr[i] % 2 == 0 then
            table.insert(ParArr, arr[i])
        end
    end
    return ParArr
end

ParArr = ParArr(OriginalArr)
for i = 1, #ParArr do
    print(ParArr[i])
end
