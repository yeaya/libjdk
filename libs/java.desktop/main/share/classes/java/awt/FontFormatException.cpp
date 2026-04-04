#include <java/awt/FontFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void FontFormatException::init$($String* reason) {
	$Exception::init$(reason);
}

FontFormatException::FontFormatException() {
}

FontFormatException::FontFormatException(const FontFormatException& e) : $Exception(e) {
}

void FontFormatException::throw$() {
	throw *this;
}

$Class* FontFormatException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FontFormatException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FontFormatException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.FontFormatException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FontFormatException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontFormatException);
	});
	return class$;
}

$Class* FontFormatException::class$ = nullptr;

	} // awt
} // java