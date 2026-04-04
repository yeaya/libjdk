#include <javax/swing/text/StateInvariantError.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

void StateInvariantError::init$($String* s) {
	$Error::init$(s);
}

StateInvariantError::StateInvariantError() {
}

StateInvariantError::StateInvariantError(const StateInvariantError& e) : $Error(e) {
}

void StateInvariantError::throw$() {
	throw *this;
}

$Class* StateInvariantError::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StateInvariantError, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.StateInvariantError",
		"java.lang.Error",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StateInvariantError, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StateInvariantError);
	});
	return class$;
}

$Class* StateInvariantError::class$ = nullptr;

		} // text
	} // swing
} // javax