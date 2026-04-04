#include <javax/print/attribute/UnmodifiableSetException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace print {
		namespace attribute {

void UnmodifiableSetException::init$() {
	$RuntimeException::init$();
}

void UnmodifiableSetException::init$($String* message) {
	$RuntimeException::init$(message);
}

UnmodifiableSetException::UnmodifiableSetException() {
}

UnmodifiableSetException::UnmodifiableSetException(const UnmodifiableSetException& e) : $RuntimeException(e) {
}

void UnmodifiableSetException::throw$() {
	throw *this;
}

$Class* UnmodifiableSetException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnmodifiableSetException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnmodifiableSetException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnmodifiableSetException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.print.attribute.UnmodifiableSetException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnmodifiableSetException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnmodifiableSetException);
	});
	return class$;
}

$Class* UnmodifiableSetException::class$ = nullptr;

		} // attribute
	} // print
} // javax