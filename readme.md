1-3: Include necessary headers and declare usage of the std namespace.

5-14: Define the BloodCamp class with two public members: date and location, and provide a constructor.

16-25: Define the User class with three public members: id, name, and bloodGroup, and provide a constructor.

27-36: Define the Request class with three public members: bloodGroup, hospital, and urgent, and provide a constructor.

38-47: Define the Sponsor class with two public members: name and event, and provide a constructor.

49-94: Define the BloodDonationApp class with private arrays for camps, donors, requests, and sponsors, and integers to track the number of elements in each array. Initialize the tracking variables in the constructor.

50: Define a constant MAX_SIZE to limit the size of the arrays.
51-52: Define a fixed-size array for BloodCamp objects and an integer to track the number of camps.

53-54: Define a fixed-size array for User objects and an integer to track the number of donors.

55-56: Define a fixed-size array for Request objects and an integer to track the number of requests.

57-58: Define a fixed-size array for Sponsor objects and an integer to track the number of sponsors.

60-64: Implement the constructor to initialize tracking variables to 0.

66-74: Define addBloodCamp method to add a new blood camp if there is space available
.
76-84: Define addUser method to add a new user if there is space available.

86-95: Define addRequest method to add a new request if there is space available.

97-105: Define addSponsor method to add a new sponsor if there is space available.

107-112: Define showBloodCamps method to display all blood camps.

114-119: Define showDonors method to display all donors.

121-126: Define showRequests method to display all requests.

128-133: Define showSponsors method to display all sponsors.

135-171: Define the main function to run the application, display a menu, and call the
appropriate methods based on user input.

172-175: Handle exiting the application and invalid menu choices.
