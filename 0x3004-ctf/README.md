## 0x3004 CTF: Trà Vinh :: f_x

**Category:** Misc
**Points:** 100
**Description:**

> [null]

## Write-up

### Getting started

...

### Code

* Python: [source](https://raw.githubusercontent.com/sft-hardwork/ACM/master/security-override/level3/level3.c)

### Getting the flag

* [null]

## Other write-ups and resources

> Our analysis was like this: 
f(12)/f(11) ~= 2.8, f(11)/f(10) ~= 3.1, (12/11)^12 = 2.84094437661548, (11/10)^12 = 3.138428376721 
> so the function should be a polynomial with the degree of 12. 

> With this the problem becomes solving a system of 13 equations and even though I only had to modify my old program a little I was still a lot slower than xp45g's z3.

The flag was `0x3004{M4thz1g}`