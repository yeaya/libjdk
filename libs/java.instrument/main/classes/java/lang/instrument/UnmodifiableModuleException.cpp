#include <java/lang/instrument/UnmodifiableModuleException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace instrument {

void UnmodifiableModuleException::init$() {
	$RuntimeException::init$();
}

void UnmodifiableModuleException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

UnmodifiableModuleException::UnmodifiableModuleException() {
}

UnmodifiableModuleException::UnmodifiableModuleException(const UnmodifiableModuleException& e) : $RuntimeException(e) {
}

void UnmodifiableModuleException::throw$() {
	throw *this;
}

$Class* UnmodifiableModuleException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnmodifiableModuleException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnmodifiableModuleException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnmodifiableModuleException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.instrument.UnmodifiableModuleException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnmodifiableModuleException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnmodifiableModuleException);
	});
	return class$;
}

$Class* UnmodifiableModuleException::class$ = nullptr;

		} // instrument
	} // lang
} // java