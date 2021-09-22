from csp import *
neighbours = {
     "REKTORAT": ["LSI"],
     "LSI": ["REKTORAT", "FEM", "FATETA"],
     "FEM": ["LSI", "FEMA"],
     "FATETA": ["LSI", "FEMA", "FAHUTAN"],
     "FEMA": ["FEM", "FATETA", "FAHUTAN", "FAPERTA"],
     "FAHUTAN": ["FEMA", "FATETA", "FAPERTA", "FMIPA"],
     "FAPERTA": ["FEMA", "FAHUTAN", "FMIPA"],
     "FMIPA": ["FAHUTAN", "FAPERTA"]
}
coloring_problem = MapColoringCSP('RGBY', neighbours)
result1 = backtracking_search(coloring_problem)

print(result1)
