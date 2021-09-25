
.PHONY : cppcheck

CPPC_ARGS = -I src/parser --std=c++20 --enable=all

cppcheck :
	cppcheck $(CPPC_ARGS) src
