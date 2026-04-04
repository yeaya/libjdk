#include <sun/font/FontScalerException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void FontScalerException::init$() {
	$Exception::init$("Font scaler encountered runtime problem."_s);
}

void FontScalerException::init$($String* reason) {
	$Exception::init$(reason);
}

FontScalerException::FontScalerException() {
}

FontScalerException::FontScalerException(const FontScalerException& e) : $Exception(e) {
}

void FontScalerException::throw$() {
	throw *this;
}

$Class* FontScalerException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontScalerException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FontScalerException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.FontScalerException",
		"java.lang.Exception",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FontScalerException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontScalerException);
	});
	return class$;
}

$Class* FontScalerException::class$ = nullptr;

	} // font
} // sun