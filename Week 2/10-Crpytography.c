// Send the information securely
// in any case it may be in file or folder or wirelessly etc
// it is art and science of encrypting - secretly written message should reach to the person we want to receive without even receiving any other person
// encryption -scrambling the information so that only you and the recipient can recieve it

// input     ->           -> output 
// plaintext ->           -> ciphertext

// plaintext - any message written in human languages that we want to send and write yourself
// ciphertext - what you want to convert it before you just hand it off to a bunch of random strangers that anyone whom could look at our messages 
// cipher - an algorithm for encrypting orscrambling the information in a reversible way

// it is not supposed to be randomly
// it is encrypted in such a way that someone else can decrypt it
// most of the cipher takes input as plaintext and key (it is like to open a lock, but technically it is a number which is very big with lots of bits which maybe 1024 bits and large and the probablity someone guessing that key is very low that makes us secure)

// Eg:
// HI!(plaintext) -> 1(key) ->     -> IJ!(ciphertext which is in this case increment the letter by 1) - this is very easy to decrypt it - but the process which is going for encryption and decryption is very huge that we can't even guess anything
// This is known as Caeser cipher - before invention of encryption it is used - by Julius Caesar with the key of only 3

// also 13 key is very common which is called as ROT13 - rotate the letter of alphabet 13
// HI! ->   -> UV!

// also 26 key known as ROT26 - which will give the same 
// HI! ->   -> HI!

// there is very much advanced cipher's

// decryption  for key 1 is -1
// decryption  for key 13 is -13

// UIJT XBT DT50 -> key -1 ->    -> THIS WAS CS50