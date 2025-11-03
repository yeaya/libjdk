#include <sun/nio/cs/ext/ISO2022_CN_CNS$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ext/EUC_TW$Encoder.h>
#include <sun/nio/cs/ext/EUC_TW.h>
#include <sun/nio/cs/ext/ISO2022$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_CN_CNS.h>
#include <jcpp.h>

#undef PLANE2
#undef PLANE3
#undef SOD
#undef SS2
#undef SS2D
#undef SS3D

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $EUC_TW = ::sun::nio::cs::ext::EUC_TW;
using $EUC_TW$Encoder = ::sun::nio::cs::ext::EUC_TW$Encoder;
using $ISO2022$Encoder = ::sun::nio::cs::ext::ISO2022$Encoder;
using $ISO2022_CN_CNS = ::sun::nio::cs::ext::ISO2022_CN_CNS;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_CN_CNS$Encoder_FieldInfo_[] = {
	{"cns", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_CN_CNS$Encoder, cns)},
	{"SOD", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_CN_CNS$Encoder, SOD)},
	{"SS2D", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_CN_CNS$Encoder, SS2D)},
	{"SS3D", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_CN_CNS$Encoder, SS3D)},
	{"bb", "[B", nullptr, $PRIVATE | $FINAL, $field(ISO2022_CN_CNS$Encoder, bb)},
	{}
};

$MethodInfo _ISO2022_CN_CNS$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(ISO2022_CN_CNS$Encoder::*)($Charset*)>(&ISO2022_CN_CNS$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ISO2022_CN_CNS$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_CN_CNS$Encoder", "sun.nio.cs.ext.ISO2022_CN_CNS", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.ISO2022$Encoder", "sun.nio.cs.ext.ISO2022", "Encoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _ISO2022_CN_CNS$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_CN_CNS$Encoder",
	"sun.nio.cs.ext.ISO2022$Encoder",
	nullptr,
	_ISO2022_CN_CNS$Encoder_FieldInfo_,
	_ISO2022_CN_CNS$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_CN_CNS$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_CN_CNS"
};

$Object* allocate$ISO2022_CN_CNS$Encoder($Class* clazz) {
	return $of($alloc(ISO2022_CN_CNS$Encoder));
}

$Charset* ISO2022_CN_CNS$Encoder::cns = nullptr;
$bytes* ISO2022_CN_CNS$Encoder::SOD = nullptr;
$bytes* ISO2022_CN_CNS$Encoder::SS2D = nullptr;
$bytes* ISO2022_CN_CNS$Encoder::SS3D = nullptr;

void ISO2022_CN_CNS$Encoder::init$($Charset* cs) {
	$ISO2022$Encoder::init$(cs);
	$set(this, bb, $new($bytes, 4));
	$set(this, SODesig, ISO2022_CN_CNS$Encoder::SOD);
	$set(this, SS2Desig, ISO2022_CN_CNS$Encoder::SS2D);
	$set(this, SS3Desig, ISO2022_CN_CNS$Encoder::SS3D);
	$set(this, ISOEncoder, $nc(ISO2022_CN_CNS$Encoder::cns)->newEncoder());
}

bool ISO2022_CN_CNS$Encoder::canEncode(char16_t c) {
	int32_t n = 0;
	bool var$0 = c <= (char16_t)0x7F || (n = $nc(($cast($EUC_TW$Encoder, this->ISOEncoder)))->toEUC(c, this->bb)) == 2;
	return (var$0 || (n == 4 && $nc(this->bb)->get(0) == $ISO2022$Encoder::SS2 && ($nc(this->bb)->get(1) == $ISO2022$Encoder::PLANE2 || $nc(this->bb)->get(1) == $ISO2022$Encoder::PLANE3)));
}

bool ISO2022_CN_CNS$Encoder::isLegalReplacement($bytes* repl) {
	return ($nc(repl)->length == 1 && repl->get(0) == (int8_t)63);
}

void clinit$ISO2022_CN_CNS$Encoder($Class* class$) {
	$assignStatic(ISO2022_CN_CNS$Encoder::cns, $new($EUC_TW));
	$assignStatic(ISO2022_CN_CNS$Encoder::SOD, $new($bytes, {
		(int8_t)u'$',
		(int8_t)u')',
		(int8_t)u'G'
	}));
	$assignStatic(ISO2022_CN_CNS$Encoder::SS2D, $new($bytes, {
		(int8_t)u'$',
		(int8_t)u'*',
		(int8_t)u'H'
	}));
	$assignStatic(ISO2022_CN_CNS$Encoder::SS3D, $new($bytes, {
		(int8_t)u'$',
		(int8_t)u'+',
		(int8_t)u'I'
	}));
}

ISO2022_CN_CNS$Encoder::ISO2022_CN_CNS$Encoder() {
}

$Class* ISO2022_CN_CNS$Encoder::load$($String* name, bool initialize) {
	$loadClass(ISO2022_CN_CNS$Encoder, name, initialize, &_ISO2022_CN_CNS$Encoder_ClassInfo_, clinit$ISO2022_CN_CNS$Encoder, allocate$ISO2022_CN_CNS$Encoder);
	return class$;
}

$Class* ISO2022_CN_CNS$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun