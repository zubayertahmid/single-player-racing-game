# Single Player Racing Game Skeleton

## Overview

This project provides a skeleton implementation of a single-player racing game in C++. The goal is to demonstrate the use of various design patterns, including Strategy, Template, Singleton, Factory, and Decorator, within the context of a simple racing game scenario.

## Scenario

The scenario involves a single-player racing game where the player can choose a car, tune the car, select a track, and race against themselves using a time tracker. The game includes features such as a pit stop option to apply the Nitrous Oxide System (NOS) to the car.

## Solution Approach

### Design Patterns Used

1. **Strategy Pattern:**
   - Implemented for car engines and turbochargers to allow dynamic behavior changes at runtime.

2. **Template Pattern:**
   - Implemented for the Track class, providing a template method for common race steps.

3. **Singleton Pattern:**
   - Implemented for the Player class to ensure only one instance of the player is created.

4. **Factory Pattern:**
   - Implemented for abstract factories of cars and tracks, allowing the player to choose specific car and track types.

5. **Decorator Pattern:**
   - Implemented for the PitStop class, adding extra functionality (NOS) to the car at runtime.

### Class Structure

The project consists of several classes organized based on the design patterns used:

- **Strategy Pattern Classes:**
  - EngineBehavior
  - TurbochargerBehavior
  - V6Engine, V8Engine, V12Engine
  - AlpineTurbocharger, CumminsTurbocharger, HoneywellTurbocharger
  - Car, NOS

- **Template Pattern Classes:**
  - Track
  - BlueMoonBaySpeedway, BBRaceway, CircuitDeSpaFrancorchamps

- **Singleton Pattern Classes:**
  - Player

- **Factory Pattern Classes:**
  - CarFactory, CoupeCarFactory, RoadsterCarFactory
  - TrackFactory, BlueMoonBaySpeedwayFactory, BBRacewayFactory, CircuitDeSpaFrancorchampsFactory

- **Decorator Pattern Classes:**
  - PitStop

### Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/zubayertahmid/single-player-racing-game.git
