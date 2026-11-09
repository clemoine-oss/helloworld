// 01_helloworld.cpp

import std;

int main ( int argc, char *argv[] ) {
	std::println( "Hello, World!" );
	std::println( "argc = {}", argc );
	
	// foreach item in the argument array, output to stdout
	// ndx{} is an initializer - the empty set defaults to 0. alternativ to using =
	for ( int ndx{}; ndx != argc; ++ndx ) {
	    std::println( "argv[{}] = {}", ndx, argv[ndx] );
	}

	return 0;
}
