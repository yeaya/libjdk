#include <javax/swing/undo/CannotUndoException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace swing {
		namespace undo {

void CannotUndoException::init$() {
	$RuntimeException::init$();
}

CannotUndoException::CannotUndoException() {
}

CannotUndoException::CannotUndoException(const CannotUndoException& e) : $RuntimeException(e) {
}

void CannotUndoException::throw$() {
	throw *this;
}

$Class* CannotUndoException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CannotUndoException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.undo.CannotUndoException",
		"java.lang.RuntimeException",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CannotUndoException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CannotUndoException);
	});
	return class$;
}

$Class* CannotUndoException::class$ = nullptr;

		} // undo
	} // swing
} // javax