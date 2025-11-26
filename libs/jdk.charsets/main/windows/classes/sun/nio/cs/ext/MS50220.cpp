#include <sun/nio/cs/ext/MS50220.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/ISO2022_JP$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_JP$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_JP.h>
#include <sun/nio/cs/ext/JIS_X_0212.h>
#include <sun/nio/cs/ext/MS50220$Holder.h>
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
using $JIS_X_0212 = ::sun::nio::cs::ext::JIS_X_0212;
using $MS50220$Holder = ::sun::nio::cs::ext::MS50220$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MS50220_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS50220::*)()>(&MS50220::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(MS50220::*)($String*,$StringArray*)>(&MS50220::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"doSBKANA", "()Z", nullptr, $PROTECTED},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MS50220_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MS50220$Holder", "sun.nio.cs.ext.MS50220", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS50220_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MS50220",
	"sun.nio.cs.ext.ISO2022_JP",
	nullptr,
	nullptr,
	_MS50220_MethodInfo_,
	nullptr,
	nullptr,
	_MS50220_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MS50220$Holder"
};

$Object* allocate$MS50220($Class* clazz) {
	return $of($alloc(MS50220));
}

void MS50220::init$() {
	$ISO2022_JP::init$("x-windows-50220"_s, $($ExtendedCharsets::aliasesFor("x-windows-50220"_s)));
}

void MS50220::init$($String* canonicalName, $StringArray* aliases) {
	$ISO2022_JP::init$(canonicalName, aliases);
}

$String* MS50220::historicalName() {
	return "MS50220"_s;
}

bool MS50220::contains($Charset* cs) {
	return $ISO2022_JP::contains(cs) || ($instanceOf($JIS_X_0212, cs)) || ($instanceOf(MS50220, cs));
}

$CharsetDecoder* MS50220::newDecoder() {
	$init($MS50220$Holder);
	return $new($ISO2022_JP$Decoder, this, $MS50220$Holder::DEC0208, $MS50220$Holder::DEC0212);
}

$CharsetEncoder* MS50220::newEncoder() {
	$init($MS50220$Holder);
	return $new($ISO2022_JP$Encoder, this, $MS50220$Holder::ENC0208, $MS50220$Holder::ENC0212, doSBKANA());
}

bool MS50220::doSBKANA() {
	return false;
}

MS50220::MS50220() {
}

$Class* MS50220::load$($String* name, bool initialize) {
	$loadClass(MS50220, name, initialize, &_MS50220_ClassInfo_, allocate$MS50220);
	return class$;
}

$Class* MS50220::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun