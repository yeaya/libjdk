#include <javax/sound/sampled/LineUnavailableException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

void LineUnavailableException::init$() {
	$Exception::init$();
}

void LineUnavailableException::init$($String* message) {
	$Exception::init$(message);
}

LineUnavailableException::LineUnavailableException() {
}

LineUnavailableException::LineUnavailableException(const LineUnavailableException& e) : $Exception(e) {
}

void LineUnavailableException::throw$() {
	throw *this;
}

$Class* LineUnavailableException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LineUnavailableException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LineUnavailableException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LineUnavailableException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.sampled.LineUnavailableException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LineUnavailableException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LineUnavailableException);
	});
	return class$;
}

$Class* LineUnavailableException::class$ = nullptr;

		} // sampled
	} // sound
} // javax