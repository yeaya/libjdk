#include <jdk.compiler.javac.h>

#include <Javac.h>
#include <jcpp.h>

int main(int argc, char** argv) {
	return $System::launch(argc, argv, "-$", ::jdk$compiler$javac::init, []($StringArray* args)->void {
		::Javac::main(args);
	});
}