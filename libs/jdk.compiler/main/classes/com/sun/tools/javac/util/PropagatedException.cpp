#include <com/sun/tools/javac/util/PropagatedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void PropagatedException::init$($RuntimeException* cause) {
	$RuntimeException::init$(cause);
}

$RuntimeException* PropagatedException::getCause() {
	return $cast($RuntimeException, $RuntimeException::getCause());
}

PropagatedException::PropagatedException() {
}

PropagatedException::PropagatedException(const PropagatedException& e) : $RuntimeException(e) {
}

void PropagatedException::throw$() {
	throw *this;
}

$Class* PropagatedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(PropagatedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/RuntimeException;)V", nullptr, $PUBLIC, $method(PropagatedException, init$, void, $RuntimeException*)},
		{"getCause", "()Ljava/lang/RuntimeException;", nullptr, $PUBLIC, $virtualMethod(PropagatedException, getCause, $RuntimeException*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.PropagatedException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PropagatedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PropagatedException);
	});
	return class$;
}

$Class* PropagatedException::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com