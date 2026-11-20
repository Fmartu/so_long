# so_long

A small 2D game in C with the 42 MiniLibX. Pick up everything on the map, avoid the enemies and reach the exit, in as few moves as you can.

- maps read from `.ber` files, with checks for walls, items and a reachable exit
- my own pixel art for the player, the enemies, walls and items (`xpm/`)
- animated sprites and enemies that move around
- the move counter on screen

## Run it

On Linux, with the X11 libraries installed (Debian/Ubuntu: `sudo apt install libx11-dev libxext-dev`):

```bash
make
./so_long maps/1_tutorial.ber
```

There are four maps: `1_tutorial`, `2_run`, `3_fight` and `final`. Move with W A S D, quit with Esc.
