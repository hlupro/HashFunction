# Lab-7

(a) Summarize your approach to the problem, and how your code addresses the abstractions needed.

  This lab was different in difficulty for different reasons than usual. The biggest issue was the closure of
  campus and the move to online classes which meant that I no longer had access to the linux computers in Henson
  and had to find an alternative. So for this lab, I worked to learn the basics of git and worked through the command line by
  patching into the school's linux server through Putty. This was actually a really cool work around and I'm glad I took the time
  to learn it and get some experience with it because navigating took some getting used to.
  Once, I had my new alternative to lab and began working, I was exposed to the shift operator and how that works by shifting the bits
  of a variable in order to not use division when calculating the mod of something.
  My hash function works by first creating variables a, p, a, and one of all type size_t. w is the power that will be raised to 2 in the formula given. p is a number less than w and a is a 10-digit prime.
  Then the next steps are to calculate ax and set it to a variable ax. Then do a binary mask of the operation ax mod 2^w to avoid using division. The last step is to do another binary mask which removes w-p bits leaving p bits as the hash value.

(b) Explain your string conversion functions, and compare how they distribute the hashes of various
strings.

My first string hash function is a for loop that goes through the string and takes each individual character and sums it up which is then passed through the hash value. However, the issue with this is that strings with the same characters such as "Test" and "seTt" will have the same hash value and collide. My second string hash function fixes this by multiplying each char by the position it's at in the string. The first char is multiplied by 1, the second by 2 and so forth. This makes it so that the hash values depend on character position as well as char values.

(c) How could the code be improved in terms of usability, efficiency, and robustness?

This method of hashing isn't secure by today's security standards and my functions to hash strings could be more robust by multiplying the position by another prime rather than just by multiplying by the position.
