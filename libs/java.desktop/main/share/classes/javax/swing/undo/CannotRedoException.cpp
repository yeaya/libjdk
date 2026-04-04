#include <javax/swing/undo/CannotRedoException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace swing {
		namespace undo {

void CannotRedoException::init$() {
	$RuntimeException::init$();
}

CannotRedoException::CannotRedoException() {
}

CannotRedoException::CannotRedoException(const CannotRedoException& e) : $RuntimeException(e) {
}

void CannotRedoException::throw$() {
	throw *this;
}

$Class* CannotRedoException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CannotRedoException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.undo.CannotRedoException",
		"java.lang.RuntimeException",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CannotRedoException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CannotRedoException);
	});
	return class$;
}

$Class* CannotRedoException::class$ = nullptr;

		} // undo
	} // swing
} // javax