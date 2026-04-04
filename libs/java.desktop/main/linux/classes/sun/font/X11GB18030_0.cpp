#include <sun/font/X11GB18030_0.h>
#include <java/lang/Error.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11GB18030_0$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $X11GB18030_0$Encoder = ::sun::font::X11GB18030_0$Encoder;

namespace sun {
	namespace font {

void X11GB18030_0::init$() {
	$Charset::init$("X11GB18030_0"_s, nullptr);
}

$CharsetEncoder* X11GB18030_0::newEncoder() {
	return $new($X11GB18030_0$Encoder, this);
}

$CharsetDecoder* X11GB18030_0::newDecoder() {
	$throwNew($Error, "Decoder is not implemented for X11GB18030_0 Charset"_s);
	$shouldNotReachHere();
}

bool X11GB18030_0::contains($Charset* cs) {
	return $instanceOf(X11GB18030_0, cs);
}

X11GB18030_0::X11GB18030_0() {
}

$Class* X11GB18030_0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X11GB18030_0, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(X11GB18030_0, contains, bool, $Charset*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(X11GB18030_0, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(X11GB18030_0, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.X11GB18030_0$Encoder", "sun.font.X11GB18030_0", "Encoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.X11GB18030_0",
		"java.nio.charset.Charset",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.font.X11GB18030_0$Encoder"
	};
	$loadClass(X11GB18030_0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11GB18030_0);
	});
	return class$;
}

$Class* X11GB18030_0::class$ = nullptr;

	} // font
} // sun