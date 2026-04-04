#include <sun/font/X11GBK$Encoder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/font/X11GBK.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/GBK.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $X11GBK = ::sun::font::X11GBK;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $GBK = ::sun::nio::cs::GBK;

namespace sun {
	namespace font {

void X11GBK$Encoder::init$($X11GBK* this$0, $Charset* cs) {
	$set(this, this$0, this$0);
	$DoubleByte$Encoder::init$(cs, ($chars*)nullptr, ($chars*)nullptr);
	$set(this, enc, $cast($DoubleByte$Encoder, $$new($GBK)->newEncoder()));
}

bool X11GBK$Encoder::canEncode(char16_t ch) {
	if (ch < 128) {
		return false;
	}
	return $nc(this->enc)->canEncode(ch);
}

int32_t X11GBK$Encoder::encodeChar(char16_t ch) {
	if (ch < 128) {
		return 0x0000fffd;
	}
	return $nc(this->enc)->encodeChar(ch);
}

X11GBK$Encoder::X11GBK$Encoder() {
}

$Class* X11GBK$Encoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/X11GBK;", nullptr, $FINAL | $SYNTHETIC, $field(X11GBK$Encoder, this$0)},
		{"enc", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE, $field(X11GBK$Encoder, enc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/X11GBK;Ljava/nio/charset/Charset;)V", nullptr, 0, $method(X11GBK$Encoder, init$, void, $X11GBK*, $Charset*)},
		{"canEncode", "(C)Z", nullptr, $PUBLIC, $virtualMethod(X11GBK$Encoder, canEncode, bool, char16_t)},
		{"encodeChar", "(C)I", nullptr, $PUBLIC, $virtualMethod(X11GBK$Encoder, encodeChar, int32_t, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.X11GBK$Encoder", "sun.font.X11GBK", "Encoder", $PRIVATE},
		{"sun.nio.cs.DoubleByte$Encoder", "sun.nio.cs.DoubleByte", "Encoder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.X11GBK$Encoder",
		"sun.nio.cs.DoubleByte$Encoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.X11GBK"
	};
	$loadClass(X11GBK$Encoder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(X11GBK$Encoder));
	});
	return class$;
}

$Class* X11GBK$Encoder::class$ = nullptr;

	} // font
} // sun