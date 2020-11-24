/**
 * This is the file containing the main function for pinter.
 * 
 * Adam Hutchings (adam.abahot@gmail.com)
 */

#include <src/parse_args.h> /* pi_parse, pinter_args_t */
#include <src/util.h> /* PINTER_ERROR, PL_SUCCESS */

int main(int argc, char** argv) {

	--argc, ++argv; /* "pinter" itself doesn't need to be parsed */
	pinter_args_t args = pi_parse(argc, argv);

	if (args.help) {
		printf("usage:\n\n\t--help: see this message\n\t[file]: execute [file]\n\n");
	} else {
		PINTER_ERROR("bytecode interpretation currently unsupported.\n");
	}

	return PL_SUCCESS;

}
