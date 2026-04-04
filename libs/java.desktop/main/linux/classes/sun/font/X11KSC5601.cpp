#include <sun/font/X11KSC5601.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11KSC5601$Decoder.h>
#include <sun/font/X11KSC5601$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $X11KSC5601$Decoder = ::sun::font::X11KSC5601$Decoder;
using $X11KSC5601$Encoder = ::sun::font::X11KSC5601$Encoder;

namespace sun {
	namespace font {

void X11KSC5601::init$() {
	$Charset::init$("X11KSC5601"_s, nullptr);
}

$CharsetEncoder* X11KSC5601::newEncoder() {
	return $new($X11KSC5601$Encoder, this, this);
}

$CharsetDecoder* X11KSC5601::newDecoder() {
	return $new($X11KSC5601$Decoder, this, this);
}

bool X11KSC5601::contains($Charset* cs) {
	return $instanceOf(X11KSC5601, cs);
}

X11KSC5601::X11KSC5601() {
}

$Class* X11KSC5601::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(X11KSC5601, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(X11KSC5601, contains, bool, $Charset*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(X11KSC5601, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(X11KSC5601, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.X11KSC5601$Decoder", "sun.font.X11KSC5601", "Decoder", $PRIVATE},
		{"sun.font.X11KSC5601$Encoder", "sun.font.X11KSC5601", "Encoder", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.X11KSC5601",
		"java.nio.charset.Charset",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.font.X11KSC5601$Decoder,sun.font.X11KSC5601$Encoder"
	};
	$loadClass(X11KSC5601, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(X11KSC5601);
	});
	return class$;
}

$Class* X11KSC5601::class$ = nullptr;

	} // font
} // sun