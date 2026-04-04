#include <sun/font/X11GBK.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11GBK$Encoder.h>
#include <sun/nio/cs/GBK.h>
#include <jcpp.h>

#undef X11GBK

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $X11GBK$Encoder = ::sun::font::X11GBK$Encoder;
using $GBK = ::sun::nio::cs::GBK;

namespace sun {
	namespace font {

void X11GBK::init$() {
	$Charset::init$("X11GBK"_s, nullptr);
}

$CharsetEncoder* X11GBK::newEncoder() {
	return $new($X11GBK$Encoder, this, this);
}

$CharsetDecoder* X11GBK::newDecoder() {
	return $$new($GBK)->newDecoder();
}

bool X11GBK::contains($Charset* cs) {
	return $instanceOf(X11GBK, cs);
}

X11GBK::X11GBK() {
}

$Class* X11GBK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X11GBK, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(X11GBK, contains, bool, $Charset*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(X11GBK, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(X11GBK, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.X11GBK$Encoder", "sun.font.X11GBK", "Encoder", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.X11GBK",
		"java.nio.charset.Charset",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.font.X11GBK$Encoder"
	};
	$loadClass(X11GBK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11GBK);
	});
	return class$;
}

$Class* X11GBK::class$ = nullptr;

	} // font
} // sun