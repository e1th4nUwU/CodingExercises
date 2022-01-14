dna_to_rna = lambda dna: dna.translate({ 65:85 , 84:65, 71:67 , 67:71})

print(dna_to_rna("ATTAGCGCGATATACGCGTAC"))
