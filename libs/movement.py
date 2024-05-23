import pygame

import libs.algorithms as alg

def move_player(player, direction): # quero que ele aceite tanto o formato UDLR quanto o formato (0, 0):(0, 1)
    if (type(direction) == tuple):
        # a* search algorithm aqui para calcular o caminho
        player.location = direction[1]
    else: # pode ser um conjunto de comandos UDLR
        for d in direction:
            if (d == 'U'):
                player.location = (player.location[0], player.location[1] - 1)
            elif (d == 'D'):
                player.location = (player.location[0], player.location[1] + 1)
            elif (d == 'L'):
                player.location = (player.location[0] - 1, player.location[1])
            elif (d == 'R'):
                player.location = (player.location[0] + 1, player.location[1])
            else:
                print('Invalid command')
                break
    return player.location

