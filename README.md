A high-performance Unreal Engine C++ plugin that uses SceneCaptureActor to capture RGB images asynchronously, efficiently queuing and managing high-throughput data processing.
What It Does
Captures RGB frames using Unreal’s SceneCaptureActor.
Processes frames asynchronously, implementing a robust queuing pipeline to avoid blocking and maintain consistent frame rates.
Optimizes throughput, ideal for real-time simulation, computer vision, or AI data pipelines.
Key Features
Asynchronous Data Capture
Utilizes Unreal’s threading system to separate image capture from data processing.
Efficient Queuing Mechanism
Buffers incoming frames in a thread-safe queue for high-volume data pipelines.
High-Resolution Support
Handles large textures without blocking the game or rendering threads.
