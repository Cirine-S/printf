<h3>The _printf function</h3>
<div>_printf is just like the original printf C language function to do formatted printing. The same function is also available in PERL.
In the most simple case, printf takes one argument: a string of characters to be printed. This string is composed of characters, each of which is printed exactly as it appears. So <code>_printf("xyz");</code> would simply print an x, then a y, and finally a z. This is not exactly formatted printing, but it is still the basis of what _printf does.
<div>Nonetheless, the real power of _printf is when we are printing the contents of variables, using the following options:
<div>* The %s option allows us to print a string inside a string.
<div>* The %d option allows us to print a number inside a string.
<div>* The %i option allows us to print an integer inside a string.
<div>* The %c option allows us to print a character inside a string.
<div>* The %% option just displays the percent sign.
<div>For instance, when typing: <code>_printf("This is the %d%ith cohort of %sSchool%c", 1, 1, "Holberton ", '.');</code>
we get: <br>This is the 11th cohort of Holberton School.