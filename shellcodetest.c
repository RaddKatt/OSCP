/*
shellcodetest.c
Use this templated script to test out shellcode
Replace the string "bytecode will go here" with your bytecode
Reference: http://www.vividmachines.com/shellcode/shellcode.html
*/

char code[] = "bytecode will go here!";
int main(int argc, char **argv)

{
	int (*func)();
	func = (int (*)()) code;
	(int)(*func)();
}
