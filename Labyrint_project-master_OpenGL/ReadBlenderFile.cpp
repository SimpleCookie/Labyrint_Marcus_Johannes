#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]) {
    ifstream s("hedge.blend");
    char name[8], prt, endian, version[4];
	s.read(name,7); // Alltid Blender
	s.read(&prt,1); // någon pekare till tidigare editerad fil
	s.read(&endian,1);// om endpunkerna är stora eller små(V eller v)
	s.read(version,3);// verision av blender
	name[7] = '\0';
	version[3] = '\0';
	cout << "Name: " << name << "\n" <<     
			"Pointer: " << prt << "\n" << 
			"End: " << endian << "\n" <<
			"Version: " << version << "\n\n";

	char code[5];
	char size[4], sdna[4], count[4];
	char mmptr[8];
	s.read(code,4);     // ett ämne på en file-head
	s.read(size,4);     // storleken av data-blocket
	s.read(mmptr,8);// 4); // kan vara 8 eller 4  pekare till tidigare editerad fil
	s.read(sdna, 4);    // Blend koder, hittas här: http://www.atmind.nl/blender/blender-sdna.html
	s.read(count,4);    // antal struktar som denna dna inläsning innehåller
	code[4] = '\0';
	cout << "Code: " << code << "\n" <<
		 	"Size: " << (int)size[0] << " " << (int)size[1] << " " << (int)size[2] << " " << (int)size[3] << "\n" <<
		 	"SDNA: " << (int)sdna[0] << " " << (int)sdna[1] << " " << (int)sdna[2] << " " << (int)sdna[3] << "\n" <<
		 	"Count: " << (int)count[0] << " " << (int)count[1] << " " << (int)count[2] << " " << (int)count[3] << "\n";
	s.close();
	return 0;
}

// här har jag hittat infon: http://www.blender.org/development/architecture/blender-file-format/