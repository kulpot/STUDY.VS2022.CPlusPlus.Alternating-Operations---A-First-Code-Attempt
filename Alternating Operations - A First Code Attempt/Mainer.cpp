
//ref link:https://www.youtube.com/watch?v=B2H-n0P8vhY&list=PLRwVmtr-pp05c1HTBj1no6Fl6C6mlxYDG&index=34
//

// MyAssembly.asm - (customBuildTool)commandline - ml /c /Cx /coff "%(FullPath)"
// MyAssembly.asm - (customBuildTool)output - %(Filename).obj

// multiply overflow 1111 * 1111 = 11101001
// 32bit overflow 1111 1111 1111 1111 1111 1111 1111 1111 * 1111 1111 1111 1111 1111 1111 1111 1111 = overflow

extern "C" void doit();

void main()
{
	doit();
}

void doit()
{
}
