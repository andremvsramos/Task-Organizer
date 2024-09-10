# Task Organizer Project

A C# Windows application using WebView2 to integrate a React frontend, with Django and PostgreSQL as the backend. This project is designed to allow users to manage their tasks, where each user has their own list of tasks. We are focusing on building the necessary database structure to support these operations.

1. [Overview](#overview)
2. [Features](#features)
3. [Tech Stack](#tech-stack)
4. [Integration Re-Approached](#integration-re-approached)
5. [Future Plans](#future-plans)
6. [Collaborator](#collaborator)
7. [License](#license)

## Overview

This project is a C# Windows application that embeds a React frontend using WebView2. The backend is built with Django and PostgreSQL, which handles user data and task management. Each user can manage their own tasks in a database-driven interface, allowing for adding, deleting, and updating tasks.

## Features

- **User Management**: Each user will have their own task list.
- **Task Management**: Users will add, edit, and delete tasks.
- **React Frontend**: A responsive and interactive UI built with React.
- **Django Backend**: A secure and scalable backend with Django.
- **PostgreSQL Database**: Stores user accounts and tasks.

## Tech Stack

- **Frontend**: React (JavaScript)
- **Backend**: Django (Python)
- **Database**: PostgreSQL
- **Windows App**: C# with WebView2

## Integration Re-Approached

We initially began this project using C++/CLR with .NET, intending to embed the React frontend through WebView2 and manage database operations with PostgreSQL. However, we encountered significant compatibility issues when using the .NET PostgreSQL manager and WebView2 together.

To resolve these issues, we transitioned to building a full C# Windows application. This move eliminated compatibility problems and provided a more seamless integration with both WebView2 for embedding the React frontend and the Django backend for managing tasks and user data. The current structure works smoothly and efficiently, allowing us to move forward without technical roadblocks.

## Future Plans

- **Database Design**: Create tables for users, tasks, and other related entities in PostgreSQL.
- **User Authentication**: Add secure authentication using Django’s built-in authentication system.
- **Enhanced UI**: Improve the UI/UX of the task manager using advanced React features.
- **Installer**: Create an installer for the Windows application for easier distribution.

## Collaborator

- [**Luis Pereira**](https://github.com/lubuper)  is contributing to the development of the project. You can find more of his work by clicking his name.


## License

This project is provided as-is. Feel free to modify and use it according to your needs. Contributions and suggestions are welcome!
