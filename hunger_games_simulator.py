import pygame, numpy as np

import libs.game_variables as gv

pygame.init()

screen = pygame.display.set_mode([gv.WIDTH, gv.HEIGHT])
pygame.display.set_caption('Hunger Games Simulator')
timer = pygame.time.Clock()
fps = gv.FPS

class Player:
    def __init__(self, name, location=(0, 0), health=10, hunger=0, strength=5, speed=5):
        self.name = name
        self.location = location
        self.health = health
        self.hunger = hunger
        self.strength = strength
        self.speed = speed


players = []
players_locations = []

# player creation
player1 = Player('Player 1', (10, 10))

players.append(player1)
players_locations.append(player1.location)


# map matrix creation
map_matrix = np.array([
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
])
map_size = map_matrix.shape

# O jogador recebe uma série de comandos para se movimentar no mapa.
# Ex: (0, 0): (0, 1), (0, 1): (1, 2), ...
# Ou Ex: U (up), D (down), L (left), R (right)
def player_movement(player, direction):
    pass

# function to draw the map
def draw_map():
    # draw the squares
    for i in range(map_size[0]):
        for j in range(map_size[1]):            
            pygame.draw.rect(screen, 'light gray', (gv.MAP_BORDER + j * 50, gv.MAP_BORDER + i * 50, 50, 50))
    
    # draw the lines
    for i in range(map_size[0] + 1):
        pygame.draw.line(screen, 'black', (gv.MAP_BORDER, gv.MAP_BORDER + i * 50), (gv.WIDTH - gv.MAP_BORDER, gv.MAP_BORDER + i * 50))
        pygame.draw.line(screen, 'black', (gv.MAP_BORDER + i * 50, gv.MAP_BORDER), (gv.MAP_BORDER + i * 50, gv.HEIGHT - gv.MAP_BORDER))

def draw_players(players, players_locations):
    pass

# main game loop
run = True
while run:
    timer.tick(fps)
    screen.fill('dark gray') # background color
    draw_map()
    
    # event handling
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False

    pygame.display.flip()
pygame.quit()