import tkinter as tk
import numpy as np

# Definições de cores
colors = {
    "#008000": 0,   # Green - grass
    "#1E90FF": 1,   # DodgerBlue - water
    "#808080": 2,   # Gray - rock
    "#006400": 3,   # DarkGreen - tree
    "#363636": 4,   # grey21 - cave
    "#B22222": 5    # FireBrick - firepit
}

# Inverso do dicionário de cores
color_values = {v: k for k, v in colors.items()}

class ColorGridApp:
    def __init__(self, root, grid_size=50, cell_size=10):
        self.root = root
        self.grid_size = grid_size
        self.cell_size = cell_size
        self.current_color = "white"

        self.canvas = tk.Canvas(root, width=grid_size*cell_size, height=grid_size*cell_size)
        self.canvas.pack()

        self.color_buttons_frame = tk.Frame(root)
        self.color_buttons_frame.pack()

        for color in colors.keys():
            button = tk.Button(self.color_buttons_frame, bg=color, width=2, command=lambda c=color: self.set_color(c))
            button.pack(side=tk.LEFT)

        self.save_button = tk.Button(root, text="Save Grid", command=self.save_grid)
        self.save_button.pack()

        self.canvas.bind("<Button-1>", self.paint)
        self.canvas.bind("<B1-Motion>", self.paint)

        self.grid = np.zeros((grid_size, grid_size), dtype=int)
        self.draw_grid()

    def set_color(self, color):
        self.current_color = color

    def draw_grid(self):
        for i in range(self.grid_size):
            for j in range(self.grid_size):
                x1 = i * self.cell_size
                y1 = j * self.cell_size
                x2 = x1 + self.cell_size
                y2 = y1 + self.cell_size
                self.canvas.create_rectangle(x1, y1, x2, y2, fill="white", outline="black")

    def paint(self, event):
        x, y = event.x, event.y
        col = x // self.cell_size
        row = y // self.cell_size
        if 0 <= col < self.grid_size and 0 <= row < self.grid_size:
            self.grid[row, col] = colors[self.current_color]
            self.canvas.create_rectangle(col*self.cell_size, row*self.cell_size,
                                         (col+1)*self.cell_size, (row+1)*self.cell_size,
                                         fill=self.current_color, outline="black")

    def save_grid(self):
        with open("created_map.txt", "w") as file:
            for row in self.grid:
                file.write(" ".join(map(str, row)) + "\n")

if __name__ == "__main__":
    root = tk.Tk()
    app = ColorGridApp(root, grid_size=50, cell_size=20)
    root.mainloop()
