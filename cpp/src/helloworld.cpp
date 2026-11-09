/**
 * @file helloworld.cpp
 * @author Cliff Lemoine (clemoine@proton.me)
 * @brief First c-plus-plus I've written in a long time...
 * @version 0.2
 * @date 2026-11-08
 * @copyright Copyright (c) 2026
 *
 */

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
