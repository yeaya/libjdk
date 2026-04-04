#include <javax/lang/model/UnknownEntityException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace lang {
		namespace model {

void UnknownEntityException::init$($String* message) {
	$RuntimeException::init$(message);
}

UnknownEntityException::UnknownEntityException() {
}

UnknownEntityException::UnknownEntityException(const UnknownEntityException& e) : $RuntimeException(e) {
}

void UnknownEntityException::throw$() {
	throw *this;
}

$Class* UnknownEntityException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownEntityException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(UnknownEntityException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.UnknownEntityException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownEntityException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownEntityException);
	});
	return class$;
}

$Class* UnknownEntityException::class$ = nullptr;

		} // model
	} // lang
} // javax