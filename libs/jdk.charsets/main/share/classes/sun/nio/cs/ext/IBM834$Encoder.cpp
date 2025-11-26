#include <sun/nio/cs/ext/IBM834$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_DBCSONLY.h>
#include <sun/nio/cs/ext/IBM834.h>
#include <sun/nio/cs/ext/IBM933$EncodeHolder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Encoder_DBCSONLY = ::sun::nio::cs::DoubleByte$Encoder_DBCSONLY;
using $IBM834 = ::sun::nio::cs::ext::IBM834;
using $IBM933$EncodeHolder = ::sun::nio::cs::ext::IBM933$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM834$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(IBM834$Encoder::*)($Charset*)>(&IBM834$Encoder::init$))},
	{"encodeChar", "(C)I", nullptr, $PUBLIC},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IBM834$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM834$Encoder", "sun.nio.cs.ext.IBM834", "Encoder", $PROTECTED | $STATIC},
	{"sun.nio.cs.DoubleByte$Encoder_DBCSONLY", "sun.nio.cs.DoubleByte", "Encoder_DBCSONLY", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IBM834$Encoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM834$Encoder",
	"sun.nio.cs.DoubleByte$Encoder_DBCSONLY",
	nullptr,
	nullptr,
	_IBM834$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM834$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM834"
};

$Object* allocate$IBM834$Encoder($Class* clazz) {
	return $of($alloc(IBM834$Encoder));
}

void IBM834$Encoder::init$($Charset* cs) {
	$init($IBM933$EncodeHolder);
	$DoubleByte$Encoder_DBCSONLY::init$(cs, $$new($bytes, {
		(int8_t)254,
		(int8_t)254
	}), $IBM933$EncodeHolder::c2b, $IBM933$EncodeHolder::c2bIndex, false);
}

int32_t IBM834$Encoder::encodeChar(char16_t ch) {
	int32_t bb = $DoubleByte$Encoder_DBCSONLY::encodeChar(ch);
	if (bb == 0x0000FFFD) {
		if (ch == (char16_t)0xB7) {
			return 16707;
		} else if (ch == (char16_t)0xAD) {
			return 16712;
		} else if (ch == (char16_t)0x2015) {
			return 16713;
		} else if (ch == (char16_t)0x223C) {
			return 17057;
		} else if (ch == (char16_t)0xFF5E) {
			return 18772;
		} else if (ch == (char16_t)0x2299) {
			return 18799;
		}
	}
	return bb;
}

bool IBM834$Encoder::isLegalReplacement($bytes* repl) {
	if ($nc(repl)->length == 2 && repl->get(0) == (int8_t)254 && repl->get(1) == (int8_t)254) {
		return true;
	}
	return $DoubleByte$Encoder_DBCSONLY::isLegalReplacement(repl);
}

IBM834$Encoder::IBM834$Encoder() {
}

$Class* IBM834$Encoder::load$($String* name, bool initialize) {
	$loadClass(IBM834$Encoder, name, initialize, &_IBM834$Encoder_ClassInfo_, allocate$IBM834$Encoder);
	return class$;
}

$Class* IBM834$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun