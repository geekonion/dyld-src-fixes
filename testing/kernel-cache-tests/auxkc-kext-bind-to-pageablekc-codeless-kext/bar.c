

#include "../kmod.h"

__attribute__((visibility(("hidden"))))
int startKext() {
	return 0;
}

__attribute__((visibility(("hidden"))))
int endKext() {
	return 0;
}

KMOD_EXPLICIT_DECL(com.apple.bar, "1.0.0", startKext, endKext)

int symbol_from_bar() {
	return 0;
}
