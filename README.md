# Library Management System

A C++ console application for managing library books and users with basic CRUD (Create, Read, Update, Delete) operations.

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
