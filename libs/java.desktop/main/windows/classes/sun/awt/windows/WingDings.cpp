#include <sun/awt/windows/WingDings.h>
#include <java/lang/Error.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/awt/windows/WingDings$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $WingDings$Encoder = ::sun::awt::windows::WingDings$Encoder;

namespace sun {
	namespace awt {
		namespace windows {

void WingDings::init$() {
	$Charset::init$("WingDings"_s, nullptr);
}

$CharsetEncoder* WingDings::newEncoder() {
	return $new($WingDings$Encoder, this);
}

$CharsetDecoder* WingDings::newDecoder() {
	$throwNew($Error, "Decoder isn\'t implemented for WingDings Charset"_s);
	$shouldNotReachHere();
}

bool WingDings::contains($Charset* cs) {
	return $instanceOf(WingDings, cs);
}

WingDings::WingDings() {
}

$Class* WingDings::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WingDings, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(WingDings, contains, bool, $Charset*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(WingDings, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(WingDings, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WingDings$Encoder", "sun.awt.windows.WingDings", "Encoder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.windows.WingDings",
		"java.nio.charset.Charset",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.windows.WingDings$Encoder"
	};
	$loadClass(WingDings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WingDings);
	});
	return class$;
}

$Class* WingDings::class$ = nullptr;

		} // windows
	} // awt
} // sun