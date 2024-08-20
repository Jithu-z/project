import pygame
import math

# Constants
WIDTH, HEIGHT = 800, 600
BACKGROUND_COLOR = (255, 255, 255)
PENDULUM_COLOR = (0, 0, 0)
PI = math.pi

# Initialize Pygame
pygame.init()
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Simple Pendulum Simulation")

# Pendulum parameters
length = 200  # Length of the pendulum in pixels
angle = PI / 4  # Initial angle (45 degrees)
angular_velocity = 0  # Initial angular velocity
gravity = 9.81  # Acceleration due to gravity

# Clock to control the simulation speed
clock = pygame.time.Clock()

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    # Calculate pendulum position
    x = WIDTH // 2 + length * math.sin(angle)
    y = HEIGHT // 2 + length * math.cos(angle)

    # Clear the screen
    screen.fill(BACKGROUND_COLOR)

    # Draw the pendulum rod
    pygame.draw.line(screen, PENDULUM_COLOR, (WIDTH // 2, HEIGHT // 2), (x, y), 5)

    # Draw the pendulum bob
    pygame.draw.circle(screen, PENDULUM_COLOR, (int(x), int(y), 20))

    # Update the display
    pygame.display.flip()

    # Update the pendulum's angle and angular velocity
    angular_acceleration = -(gravity / length) * math.sin(angle)
    angular_velocity += angular_acceleration
    angle += angular_velocity

    # Control the speed of the simulation
    clock.tick(60)

pygame.quit()