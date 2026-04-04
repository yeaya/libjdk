#include <sun/font/X11SunUnicode_0.h>
#include <java/lang/Error.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11SunUnicode_0$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $X11SunUnicode_0$Encoder = ::sun::font::X11SunUnicode_0$Encoder;

namespace sun {
	namespace font {

void X11SunUnicode_0::init$() {
	$Charset::init$("X11SunUnicode_0"_s, nullptr);
}

$CharsetEncoder* X11SunUnicode_0::newEncoder() {
	return $new($X11SunUnicode_0$Encoder, this);
}

$CharsetDecoder* X11SunUnicode_0::newDecoder() {
	$throwNew($Error, "Decoder is not implemented for X11SunUnicode_0 Charset"_s);
	$shouldNotReachHere();
}

bool X11SunUnicode_0::contains($Charset* cs) {
	return $instanceOf(X11SunUnicode_0, cs);
}

X11SunUnicode_0::X11SunUnicode_0() {
}

$Class* X11SunUnicode_0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X11SunUnicode_0, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(X11SunUnicode_0, contains, bool, $Charset*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(X11SunUnicode_0, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(X11SunUnicode_0, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.X11SunUnicode_0$Encoder", "sun.font.X11SunUnicode_0", "Encoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.X11SunUnicode_0",
		"java.nio.charset.Charset",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.font.X11SunUnicode_0$Encoder"
	};
	$loadClass(X11SunUnicode_0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11SunUnicode_0);
	});
	return class$;
}

$Class* X11SunUnicode_0::class$ = nullptr;

	} // font
} // sun