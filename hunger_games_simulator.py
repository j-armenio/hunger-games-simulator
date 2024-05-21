import pygame, numpy as np

import libs.game_variables as gv

pygame.init()

screen = pygame.display.set_mode([gv.WIDTH, gv.HEIGHT])
pygame.display.set_caption('Hunger Games Simulator')
timer = pygame.time.Clock()
fps = gv.FPS
   
# game variables
players = ['red']
players_locations = [(0, 0)]

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

def a_star_search(start, goal):
    pygame.quit()

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