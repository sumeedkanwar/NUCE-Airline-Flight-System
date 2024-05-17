# NUCES Airline Flight System (NAFS)

## Object Oriented Programming Project

### Submission Items:
1. **Program Code** with all requirements + Viva Demo (140 marks)
2. **Report** (50 marks)
3. **Class Diagram** (made on Microsoft Visio) (10 marks)

### Deadline:
**May 10, 2023**

### Report Guidelines:
- **Explanation** of OOP concepts used in the project (5 marks) including:
  - Inheritance
  - Aggregation
  - Association
  - Composition
  - Constant data members
- **Screenshots** of the project
- **Class Diagram** for the scenario (included in the report)

### Submission Guidelines:
- This is an **individual project**.
- **Folder Name**: Use your roll number as the folder name (e.g., `22i-XXXX`).
- **Zip Folder**: Zip the folder containing all `.cpp` files with the same name as the folder name (e.g., `20i-XXXX.zip`). Do not use `.rar` or `.7zip` extensions.
- **Report**: Submit the report separately, not as part of the zip file.
- **Class Diagram**: Submit the original file and the exported image separately.
- **Non-compliance**: Any submission not following these guidelines will be awarded 0 marks.

### Instructions:
- **Plagiarism** will result in an F-grade.
- **No late submissions** will be accepted.
- **Coding Language**: C++
- **Coding Standards**: Follow meaningful variable names, code comments, etc.
- **Validations**: Apply all validations for invalid inputs using Exception Handling.
- **Restrictions**: Use of Vectors and similar containers is not allowed.

### Project Statement:
Develop an application named NUCES Airline Flight System (NAFS) for a newly established airline functional in five major cities of Pakistan: Islamabad, Lahore, Quetta, Peshawar, and Karachi. Each city has two airports located at the North and South. NAFS wants a flight reservation system. The system should handle 10 airplanes per city, with a maximum of 5 airplanes landing at an airport simultaneously. The system should manage a network of flights in 25 countries, handle travel bans due to COVID, and abide by international travel laws. Features include flight reservation, cancellation, and flight schedules for both local and international flights.

### Main Features:
1. **Menu**: Navigate the system and provide basic details about NAFS (10 marks).
2. **Login and Registration**: Admin and passenger panels for system interaction (20 marks).
3. **Flight Schedule**: Maintain complete flight schedules (20 marks).
4. **Passengers**: Handle passenger registration, login, and details update (10 marks).
5. **Booking**: Flight booking and seat reservation (20 marks).

### Detailed Requirements:
1. **Menu**:
   - Navigate the system with options for subsequent processes and the main menu.
   - Basic NAFS details accessible without login.

2. **Login and Registration**:
   - Admin panel: Change flight schedules, add routes, update inquiry details.
   - Passenger panel: Register with CNIC, handle dependents, store login details in ArrayLists.

3. **Flight Schedule**:
   - Maintain schedules with details like travel hours, arrival and departure times, and seat availability.
   - Avoid timing clashes and maintain airplane limits at airports.

4. **Passengers**:
   - Valid Passport required, VISA for international travel.
   - Update passenger details and view travel costs.

5. **Booking**:
   - Flight reservation, seat selection, route details, and payment recording.
   - Handle flight availability and cancellations, including penalties.

### Marks Distribution:
- **OOP Concepts**: Must use all specified OOP concepts (80 marks).
- **Bonus Marks**:
  - Use of dynamic arrays (2 marks).
  - Parameterized constructors (1 mark).
  - Copy constructor for deep copying (1 mark).
  - Error handling without stopping execution (1 mark).
  - File storage for persistent data (1 mark).
  - Pre-populate application data (1 mark).

### Resources:
- Use the following link for distance and flight duration details:
  [Distance Calculator](https://distancecalculator.globefeed.com/Distance_Between_Countries.asp)
