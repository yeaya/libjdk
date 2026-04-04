#include <com/sun/tools/javac/util/Abort.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void Abort::init$($Throwable* cause) {
	$Error::init$(cause);
}

void Abort::init$() {
	$Error::init$();
}

Abort::Abort() {
}

Abort::Abort(const Abort& e) : $Error(e) {
}

void Abort::throw$() {
	throw *this;
}

$Class* Abort::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Abort, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(Abort, init$, void, $Throwable*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Abort, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.Abort",
		"java.lang.Error",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Abort, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Abort);
	});
	return class$;
}

$Class* Abort::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com