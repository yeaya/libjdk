#include <sun/java2d/InvalidPipeException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

void InvalidPipeException::init$() {
	$IllegalStateException::init$();
}

void InvalidPipeException::init$($String* s) {
	$IllegalStateException::init$(s);
}

InvalidPipeException::InvalidPipeException() {
}

InvalidPipeException::InvalidPipeException(const InvalidPipeException& e) : $IllegalStateException(e) {
}

void InvalidPipeException::throw$() {
	throw *this;
}

$Class* InvalidPipeException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidPipeException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidPipeException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.InvalidPipeException",
		"java.lang.IllegalStateException",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InvalidPipeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidPipeException);
	});
	return class$;
}

$Class* InvalidPipeException::class$ = nullptr;

	} // java2d
} // sun