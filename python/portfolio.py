import numpy as np
import matplotlib.pyplot as plt

# Function to compute energy dissipation
def energy_dissipation(c):
    # Define your energy dissipation equation here.
    # For example, you can use a simple equation like:
    # energy = 0.5 * c**2
    energy = 0.5 * c**2
    return energy

# Range of damping coefficients
c_values = np.linspace(0, 10, 100)  # Adjust the range as needed

# Compute energy dissipation for each damping coefficient
energy_values = [energy_dissipation(c) for c in c_values]

# Create the plot
plt.figure(figsize=(8, 6))
plt.plot(c_values, energy_values, label='Energy Dissipation')
plt.xlabel('Damping Coefficient (c)')
plt.ylabel('Energy Dissipation')
plt.title('Energy Dissipation vs. Damping Coefficient')
plt.legend()
plt.grid(True)

# Show the plot
plt.show()
