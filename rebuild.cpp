#include "_rebuild/rebuild.h"

int main(int argc, char **argv) {
	rebuild_targets.push_back(Target::create("ownstack", {"ownstack.c.o", "ownstack.s.o"}, "gcc -o #OUT #DEPENDS"));

	rebuild_targets.push_back(CTarget::create("ownstack.c.o", {"ownstack.c"}, "gcc -c -o #OUT #DEPENDS"));
	rebuild_targets.push_back(Target::create("ownstack.s.o", {"ownstack.s"}, "fasm #DEPENDS #OUT"));
	return 0;
}
