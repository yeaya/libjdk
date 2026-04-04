#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$String* InvalidDnDOperationException::dft_msg = nullptr;

void InvalidDnDOperationException::init$() {
	$IllegalStateException::init$(InvalidDnDOperationException::dft_msg);
}

void InvalidDnDOperationException::init$($String* msg) {
	$IllegalStateException::init$(msg);
}

void InvalidDnDOperationException::clinit$($Class* clazz) {
	$assignStatic(InvalidDnDOperationException::dft_msg, "The operation requested cannot be performed by the DnD system since it is not in the appropriate state"_s);
}

InvalidDnDOperationException::InvalidDnDOperationException() {
}

InvalidDnDOperationException::InvalidDnDOperationException(const InvalidDnDOperationException& e) : $IllegalStateException(e) {
}

void InvalidDnDOperationException::throw$() {
	throw *this;
}

$Class* InvalidDnDOperationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidDnDOperationException, serialVersionUID)},
		{"dft_msg", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(InvalidDnDOperationException, dft_msg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(InvalidDnDOperationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(InvalidDnDOperationException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.dnd.InvalidDnDOperationException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(InvalidDnDOperationException, name, initialize, &classInfo$$, InvalidDnDOperationException::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(InvalidDnDOperationException);
	});
	return class$;
}

$Class* InvalidDnDOperationException::class$ = nullptr;

		} // dnd
	} // awt
} // java