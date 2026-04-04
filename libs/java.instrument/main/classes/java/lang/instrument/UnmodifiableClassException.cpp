#include <java/lang/instrument/UnmodifiableClassException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace instrument {

void UnmodifiableClassException::init$() {
	$Exception::init$();
}

void UnmodifiableClassException::init$($String* s) {
	$Exception::init$(s);
}

UnmodifiableClassException::UnmodifiableClassException() {
}

UnmodifiableClassException::UnmodifiableClassException(const UnmodifiableClassException& e) : $Exception(e) {
}

void UnmodifiableClassException::throw$() {
	throw *this;
}

$Class* UnmodifiableClassException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnmodifiableClassException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnmodifiableClassException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnmodifiableClassException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.instrument.UnmodifiableClassException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnmodifiableClassException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnmodifiableClassException);
	});
	return class$;
}

$Class* UnmodifiableClassException::class$ = nullptr;

		} // instrument
	} // lang
} // java