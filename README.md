<div align="center">
  <h1>📚 Library Management System</h1>
  <p>A modern C++ console application for efficient library management</p>

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![STL](https://img.shields.io/badge/STL-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License](https://img.shields.io/badge/license-MIT-blue.svg?style=for-the-badge)

</div>

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Screenshots](#screenshots)
- [Contributing](#contributing)
- [Author](#author)
- [License](#license)

## 🎯 Overview

A robust console-based Library Management System built with C++. The system provides comprehensive CRUD operations for managing both library users and books, featuring data validation and an intuitive menu-driven interface.

## Features

- User Management:

  - Add new users with name, lastname, and social security number
  - View all registered users
  - Edit user information
  - Delete users
  - Validation for social security number (must be 13 digits)

- Book Management:
  - Add new books with name, author, type, and barcode
  - View all books in the library
  - Edit book information
  - Delete books
  - Book categorization (Drama, Thriller, Novel, Short story, Story, Poetry, Other)
  - Validation for book barcode (must be 5 digits)

## Getting Started

### Prerequisites

- C++ compiler (C++11 or later)
- Standard Template Library (STL)

### Building the Project

1. Clone the repository:

```bash
git clone https://github.com/yourusername/Library-Management.git
```

2. Compile the source code:

```bash
g++ Library-Management.cpp -o library
```

3. Run the application:

```bash
./library
```

## Usage

The application presents a menu-driven interface with the following options:

1. Access User

   - Add user
   - Print users
   - Edit user
   - Delete user
   - Back

2. Access Book

   - Add book
   - Print books
   - Edit book
   - Delete book
   - Back

3. Exit

### Data Validation

- Social Security Number: Must be exactly 13 digits
- Book Barcode: Must be exactly 5 digits

## Project Structure

- `Library-Management.cpp`: Main source file containing all the implementation
- Two main classes:
  - `User`: Handles user-related operations
  - `Book`: Handles book-related operations

## Contributing

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## Author

TUBIC AMAR

## Try it Online

You can try the code online at: https://onlinegdb.com/hWmfODjQU

## License

This project is open source and available under the [MIT License](LICENSE).
