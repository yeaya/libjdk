#include <java/lang/instrument/IllegalClassFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace instrument {

void IllegalClassFormatException::init$() {
	$Exception::init$();
}

void IllegalClassFormatException::init$($String* s) {
	$Exception::init$(s);
}

IllegalClassFormatException::IllegalClassFormatException() {
}

IllegalClassFormatException::IllegalClassFormatException(const IllegalClassFormatException& e) : $Exception(e) {
}

void IllegalClassFormatException::throw$() {
	throw *this;
}

$Class* IllegalClassFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalClassFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalClassFormatException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalClassFormatException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.instrument.IllegalClassFormatException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalClassFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalClassFormatException);
	});
	return class$;
}

$Class* IllegalClassFormatException::class$ = nullptr;

		} // instrument
	} // lang
} // java