# Unreal Engine Simulation for Multi-Agent UAV Environments with a Suspended Payload

This project simulates physics-based quadcopter drones physically constrained to a paylaod using ROS-integrated Unreal Engine for collaborative multi-UAV settings. The simulation can be reduced to single agent and without payload, and expanded to increased agents scenarios.

## 🎮 Project Features
- **Drone Control via ROS along with manual teleoperation (toggle the variable in the level blueprint)**
- **Utilizes PID-based stabilization for a flight controller**
- **Completely developed in Blueprint**

## 🚀 Getting Started

### Prerequisites
- Unreal Engine (v4.27)
- ROS Noetic (Linux)
- ROS Integration Pulgin (https://github.com/code-iai/ROSIntegration)

### Use
1. **Clone the Repository:**  
   ```bash
   git clone https://github.com/SAtiqK/UAVs_PL_sim.git
   cd UAVs_PL_sim
2. **Open in Unreal Engine:**
   Double-click WActualDrone.uproject to open in Unreal Engine.
3. **Set up ROS Integration:**
   Follow instructions in https://github.com/code-iai/ROSIntegration.

📂 Project Structure
```bash
  ├─ Config/                    # Unreal config files
  ├─ Content/                   # Unreal assets and Blueprints
  ├─ Source/                    # C++ source code (if applicable)
  ├─ Plugins/                   # Plugins added
  ├─ LICENSE                    # MIT License
  ├─ README.md                  # Project documentation 
  ├─ UnrealEngine.gitignore/    # Plugins added
  └─ WActualDrone.uproject      # Project file
```
📄 License

This project is licensed under the MIT License - see the LICENSE file for details.
