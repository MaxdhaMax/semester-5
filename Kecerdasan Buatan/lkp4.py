#LKP 4
# from search import *
#
# jakarta_map = UndirectedGraph(dict(
#     Merdeka_Palace = dict(Istiqlal_Mosque=10, National_Museum_of_Indonesia=20),
#     Gatot_Soebroto_hospital = dict(Istiqlal_Mosque=20, Gambir_Station=10, Jakarta_Planetarium=55),
#     Gambir_Station=dict(Istiqlal_Mosque=15),
#     Sarinah=dict(National_Museum_of_Indonesia=15, Istiqlal_Mosque=35, Jakarta_Planetarium=25, Hotel_Indonesia=15),
#     Hotel_Indonesia=dict(Jakarta_Planetarium=70, Manggarai_Station=90, Gelora_Bung_Karno=50, World_Trade_Center=20),
#     Manggarai_Station=dict(Jakarta_Planetarium=40),
#     Sudirman_Central_Business=dict(Gelora_Bung_Karno=30, World_Trade_Center=30)))
#
# jakarta_map.location = dict(
#     Merdeka_Palace=(50, 150), Istiqlal_Mosque=(85, 150), National_Museum_of_Indonesia=(40, 90),
#     Gatot_Soebroto_hospital=(110, 120), Gambir_Station=(100,100), Jakarta_Planetarium=(100,55),
#     Sarinah=(60,80), Hotel_Indonesia=(50, 50), Manggarai_Station=(120, 30),
#     Gelora_Bung_Karno=(10, 20), World_Trade_Center=(60, 20), Sudirman_Central_Business=(40, 10))
#
# jakarta_problem = GraphProblem('Sudirman_Central_Business', 'Istiqlal_Mosque', jakarta_map)
# print([node.state for node in best_first_graph_search(jakarta_problem, lambda node: node.path_cost).path()])
# print([node.state for node in astar_search(jakarta_problem).path()])
# print([node.state for node in breadth_first_graph_search(jakarta_problem).path()])


#LKP 3
from search import *

jakarta_map = UndirectedGraph(dict(
    Merdeka_Palace=dict(Istiqlal_Mosque=10, National_Museum_of_Indonesia=20),
    Gatot_Soebroto_hospital=dict(Istiqlal_Mosque=20, Gambir_Station=10, Jakarta_Planetarium=55),
    Gambir_Station=dict(Istiqlal_Mosque=15),
    Sarinah=dict(National_Museum_of_Indonesia=15, Istiqlal_Mosque=35, Jakarta_Planetarium=25, Hotel_Indonesia=15),
    Hotel_Indonesia=dict(Jakarta_Planetarium=70, Manggarai_Station=90, Gelora_Bung_Karno=50, World_Trade_Center=20),
    Manggarai_Station=dict(Jakarta_Planetarium=40),
    Sudirman_Central_Business=dict(Gelora_Bung_Karno=30, World_Trade_Center=30)))

jakarta_map.location = dict(
    Merdeka_Palace=(50, 150), Istiqlal_Mosque=(85, 150), National_Museum_of_Indonesia=(40, 90),
    Gatot_Soebroto_hospital=(110, 120), Gambir_Station=(100, 100), Jakarta_Planetarium=(100, 55),
    Sarinah=(60, 80), Hotel_Indonesia=(50, 50), Manggarai_Station=(120, 30),
    Gelora_Bung_Karno=(10, 20), World_Trade_Center=(60, 20), Sudirman_Central_Business=(40, 10))

jakarta_problem = GraphProblem('Sudirman_Central_Business', 'Istiqlal_Mosque', jakarta_map)
print([node.state for node in breadth_first_graph_search(jakarta_problem).path()])
print([node.state for node in depth_first_graph_search(jakarta_problem).path()])