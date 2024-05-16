import pygame, numpy as np

pygame.init()

WIDTH = 1000
HEIGHT = 1000
MAP_BORDER = 50

screen = pygame.display.set_mode([WIDTH, HEIGHT])
pygame.display.set_caption('Hunger Games Simulator')
timer = pygame.time.Clock()
fps = 60
   
# game variables
players = ['red']
players_locations = [(0, 0)]

# map matrix creation
map_matrix = np.array([
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
])
map_size = map_matrix.shape

# function to draw the map
def draw_map():
    for i in range(np.square(map_size[0])):
        column = i % 4
        row = i // 4
        pygame.draw.rect(screen, 'light gray', [], [], 20, 20)

    for i in range(map_matrix[0]):
        for j in range(map_matrix[1]):
            pygame.draw.rect(screen, 'light gray', [], [], 20, 20)


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