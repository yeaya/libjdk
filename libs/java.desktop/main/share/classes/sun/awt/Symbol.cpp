#include <sun/awt/Symbol.h>
#include <java/lang/Error.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/awt/Symbol$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $Symbol$Encoder = ::sun::awt::Symbol$Encoder;

namespace sun {
	namespace awt {

void Symbol::init$() {
	$Charset::init$("Symbol"_s, nullptr);
}

$CharsetEncoder* Symbol::newEncoder() {
	return $new($Symbol$Encoder, this);
}

$CharsetDecoder* Symbol::newDecoder() {
	$throwNew($Error, "Decoder is not implemented for Symbol Charset"_s);
	$shouldNotReachHere();
}

bool Symbol::contains($Charset* cs) {
	return $instanceOf(Symbol, cs);
}

Symbol::Symbol() {
}

$Class* Symbol::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Symbol, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(Symbol, contains, bool, $Charset*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(Symbol, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(Symbol, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.Symbol$Encoder", "sun.awt.Symbol", "Encoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.Symbol",
		"java.nio.charset.Charset",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.Symbol$Encoder"
	};
	$loadClass(Symbol, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Symbol);
	});
	return class$;
}

$Class* Symbol::class$ = nullptr;

	} // awt
} // sun