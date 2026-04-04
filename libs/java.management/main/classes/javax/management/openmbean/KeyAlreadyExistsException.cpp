#include <javax/management/openmbean/KeyAlreadyExistsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

void KeyAlreadyExistsException::init$() {
	$IllegalArgumentException::init$();
}

void KeyAlreadyExistsException::init$($String* msg) {
	$IllegalArgumentException::init$(msg);
}

KeyAlreadyExistsException::KeyAlreadyExistsException() {
}

KeyAlreadyExistsException::KeyAlreadyExistsException(const KeyAlreadyExistsException& e) : $IllegalArgumentException(e) {
}

void KeyAlreadyExistsException::throw$() {
	throw *this;
}

$Class* KeyAlreadyExistsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyAlreadyExistsException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(KeyAlreadyExistsException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(KeyAlreadyExistsException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.openmbean.KeyAlreadyExistsException",
		"java.lang.IllegalArgumentException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeyAlreadyExistsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyAlreadyExistsException);
	});
	return class$;
}

$Class* KeyAlreadyExistsException::class$ = nullptr;

		} // openmbean
	} // management
} // javax