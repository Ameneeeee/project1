# Fonction de conversion des kilomètres en yards
def km_to_yards(km):
    return km * 1093.61

# Demande à l'utilisateur d'entrer la distance en kilomètres
km = float(input("Entrez la distance en kilomètres : "))

# Conversion en yards
yards = km_to_yards(km)

# Affichage du résultat
print(f"{km} kilomètres équivalent à {yards:.2f} yards.")
