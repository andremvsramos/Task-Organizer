# Task Organizer Project

A C++/CLR application with a simple user interface that allows users to add, delete, and count tasks in a list. This is my first project using C++ with the Common Language Runtime (CLR). The project aims to integrate PostgreSQL for database operations and explore creating a hybrid user interface combining Windows Forms with React.

1. [Overview](#overview)
2. [Features](#features)
3. [Getting Started](#getting-started)
4. [Theoretical Approach to Hybrid Integration](#theoretical-approach-to-hybrid-integration)
5. [Future Plans](#future-plans)
6. [License](#license)

## Overview

This project is a C++ application that utilizes the Common Language Runtime (CLR) to create a basic graphical user interface (GUI). Users can add tasks to a list, remove tasks, and view the total count of tasks. As my first foray into using C++ with CLR, this project serves as a foundation to build upon for future enhancements, including database integration and advanced UI development.

## Features

- **Add Tasks**: Users can input tasks into a text box and add them to a list.
- **Delete Tasks**: Selected tasks from the list can be removed.
- **Task Count**: The application displays the number of tasks in the list.
- **Simple UI**: The current UI is minimal and allows basic interaction with the task list.

## Getting Started

### Prerequisites

- **Visual Studio**: Ensure you have Visual Studio with support for C++/CLR projects.
- **.NET Framework**: The project targets .NET Framework 4.7.2 or later.
- **PostgreSQL**: Future integration with PostgreSQL for database operations.

### Building the Project

1. **Open Visual Studio**: Launch Visual Studio and open the solution file (`TodoList.sln`).

2. **Build the Project**: Select `Build` from the menu and click `Build Solution` or press `Ctrl+Shift+B`.

### Running the Application

- **Start the Application**: Press `F5` or select `Debug` > `Start Debugging` to run the application.

## Theoretical Approach to Hybrid Integration

In the future, I plan to integrate a modern web-based user interface with the existing Windows Forms application. My theoretical approach involves using WebView2 to embed a React application within the Windows Forms environment. This integration will allow the existing C++/CLR application to leverage the advanced, interactive capabilities of React while maintaining the core functionality provided by Windows Forms.

## Future Plans

- **Database Integration (Priority)**: Implement functionality to store and retrieve tasks from a PostgreSQL database. Currently, I am working on resolving issues related to installing the Npgsql package, which is necessary for connecting the application to PostgreSQL.
- **Enhanced UI**: Eventually test the React-based user interface for a richer user experience and improved functionality.

## License

This project is provided as-is. Feel free to modify and use it according to your needs. Contributions and suggestions are welcome!
