#include <sun/nio/cs/ext/MSISO2022JP.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/ISO2022_JP$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_JP$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_JP.h>
#include <sun/nio/cs/ext/MSISO2022JP$CoderHolder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $ISO2022_JP = ::sun::nio::cs::ext::ISO2022_JP;
using $ISO2022_JP$Decoder = ::sun::nio::cs::ext::ISO2022_JP$Decoder;
using $ISO2022_JP$Encoder = ::sun::nio::cs::ext::ISO2022_JP$Encoder;
using $MSISO2022JP$CoderHolder = ::sun::nio::cs::ext::MSISO2022JP$CoderHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

void MSISO2022JP::init$() {
	$ISO2022_JP::init$("x-windows-iso2022jp"_s, $($ExtendedCharsets::aliasesFor("x-windows-iso2022jp"_s)));
}

$String* MSISO2022JP::historicalName() {
	return "windows-iso2022jp"_s;
}

bool MSISO2022JP::contains($Charset* cs) {
	return $ISO2022_JP::contains(cs) || ($instanceOf(MSISO2022JP, cs));
}

$CharsetDecoder* MSISO2022JP::newDecoder() {
	$init($MSISO2022JP$CoderHolder);
	return $new($ISO2022_JP$Decoder, this, $MSISO2022JP$CoderHolder::DEC0208, nullptr);
}

$CharsetEncoder* MSISO2022JP::newEncoder() {
	$init($MSISO2022JP$CoderHolder);
	return $new($ISO2022_JP$Encoder, this, $MSISO2022JP$CoderHolder::ENC0208, nullptr, true);
}

MSISO2022JP::MSISO2022JP() {
}

$Class* MSISO2022JP::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MSISO2022JP, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(MSISO2022JP, contains, bool, $Charset*)},
		{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MSISO2022JP, historicalName, $String*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(MSISO2022JP, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(MSISO2022JP, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.MSISO2022JP$CoderHolder", "sun.nio.cs.ext.MSISO2022JP", "CoderHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.ext.MSISO2022JP",
		"sun.nio.cs.ext.ISO2022_JP",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.MSISO2022JP$CoderHolder"
	};
	$loadClass(MSISO2022JP, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MSISO2022JP));
	});
	return class$;
}

$Class* MSISO2022JP::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun