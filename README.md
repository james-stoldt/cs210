# cs210
CS-210 Week 8 Requirement

# Summarize the project and what problem it was solving.
The application for Airgead Banking was designed in accordance with their requirements - they needed a program to calculate the balance of a bank account, year over year, based on:
  1. an initial investment amount
  2. a fixed, monthly deposit amount
  3. a fixed compound interest rate
  4. a specified number of years

# What did you do particularly well?
I got 100 on the project, so I feel I fulfilled the requirements as described. The program functions correctly and uses - without abusing - OOP principles.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
In the real world we wouldn't use floating point data types to work with money because they are unpredictable. I think the code, within the scope of this assignment, was pretty much as efficient and secure as it could've been. A real-world scenario would look very different.

# Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
I did not find any part of this code to be difficult to write. It took me a few minutes to think about how I wanted to structure the classes - I kind of started writing it procedurally first until the classes I'd need became more apparent. If I had to do it over again, I'd probably do it the same. Google is the tool I use for everything - whatever resources it links me to that look the best are the ones I use. Often this is Stack Overflow, but just as often it's just straight up documentation from whoever maintains the language I'm using.

# What skills from this project will be particularly transferable to other projects or course work?
I was already familiar with OOP concepts, and fairly proficient with C. I learned C++'s syntax better, and became better oriented with the data structures available in the STL. I also was pretty unfamiliar with how easy console/file I/O was with C++ (cin and cout are syntactically simpler than what I'm used to).

# How did you make this program maintainable, readable, and adaptable?
As stated above, I created simple classes that are only responsible for what they need to be - they could pretty easily be inherited/modified as needed. The code is structured across multpile files and is commented where it needs to be.
