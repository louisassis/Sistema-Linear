matriz = [
    [2, 3, -1, 4, 8],
    [1, -1, 2, 1, 3],
    [3, 1, 3, -2, 10],
    [4, -1, 1, 2, 7]
]
n = 4  # Tamanho da Matriz

# Vamos pelo método de Escalonamento
for i in range(n):
    # Nisso o pivô não pode ser  zero
    
    if matriz[i][i] == 0:
        
        for k in range(i+1, n):
            
            
            if matriz[k][i] != 0:
                matriz[i], matriz[k] = matriz[k], matriz[i]  # troca de linhas
                break
    
    # Tornar o pivô igual a 1
    piv = matriz[i][i]
    for j in range(i, n+1):
        
        
        matriz[i][j] = matriz[i][j] / piv
    
    # Zerar os elementos abaixo do pivô
    for k in range(i+1, n):
        fator = matriz[k][i]
        for j in range(i, n+1):
            matriz[k][j] = matriz[k][j] - fator * matriz[i][j]

# Retrosubstituição 
x = [0 for i in range(n)]

for i in range(n-1, -1, -1):
    soma = 0
    for j in range(i+1, n):
        soma += matriz[i][j] * x[j]
    x[i] = matriz[i][n] - soma

# Print dos resultado 


print("Soluções do sistema:")
for i in range(n):
    print(f"x{i+1} = {x[i]:.2f}")