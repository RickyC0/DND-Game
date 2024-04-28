# DND-Game

## Overview
DND-Game is a Dungeons & Dragons-inspired role-playing game that invites players to explore, engage, and conquer in a richly detailed fantasy world. The game provides a default campaign with three increasingly challenging levels, a map editor for creative map-building, and a character creator for personalized gameplay.

## Installation

To install DND-Game, perform the following steps:

1. Clone the repository to your local environment:

    ```sh
    git clone https://github.com/RickyC0/DND-Game.git
    ```

2. Navigate to the DND-Game directory:

    ```sh
    cd DND-Game
    ```

3. It is recommended to compile the game using CMake for building the source files from the `src` directory. Create a `build` directory and initiate the compilation with CMake:

    ```sh
    mkdir build && cd build
    cmake ..
    make
    ```

4. After successful compilation, run the generated executable to launch the game.

## Features

### Main Menu

Upon launching DND-Game, the player is greeted with the following main menu options:

- **Play:** Commences the default campaign consisting of three levels. The player must defeat all enemies to advance through each level.
- **Map Editor:** Allows the player to create and save custom maps. *Note: Map Loader functionality is in development.*
- **Character Creator:** Enables the player to choose and customize a character.
- **Options:** Offers audio and other settings configurations.
- **Quit:** Exits the game.

## Contributions

We welcome contributions to the DND-Game project. If you have suggestions or issues, please open a pull request or issue in the repository.

## Note

Map Loader functionality is currently under development and will be available in a future update.

Thank you for choosing our DND-Game, and happy adventuring!