#include <sun/management/counter/perf/InstrumentationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

void InstrumentationException::init$() {
	$RuntimeException::init$();
}

void InstrumentationException::init$($String* message) {
	$RuntimeException::init$(message);
}

InstrumentationException::InstrumentationException() {
}

InstrumentationException::InstrumentationException(const InstrumentationException& e) : $RuntimeException(e) {
}

void InstrumentationException::throw$() {
	throw *this;
}

$Class* InstrumentationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstrumentationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InstrumentationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InstrumentationException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.management.counter.perf.InstrumentationException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InstrumentationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InstrumentationException);
	});
	return class$;
}

$Class* InstrumentationException::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun