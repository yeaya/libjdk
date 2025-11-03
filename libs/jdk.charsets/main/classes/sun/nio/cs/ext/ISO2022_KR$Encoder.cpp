#include <sun/nio/cs/ext/ISO2022_KR$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ext/ISO2022$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_KR$Holder.h>
#include <sun/nio/cs/ext/ISO2022_KR.h>
#include <jcpp.h>

#undef SOD

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $ISO2022$Encoder = ::sun::nio::cs::ext::ISO2022$Encoder;
using $ISO2022_KR = ::sun::nio::cs::ext::ISO2022_KR;
using $ISO2022_KR$Holder = ::sun::nio::cs::ext::ISO2022_KR$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_KR$Encoder_FieldInfo_[] = {
	{"SOD", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_KR$Encoder, SOD)},
	{}
};

$MethodInfo _ISO2022_KR$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(ISO2022_KR$Encoder::*)($Charset*)>(&ISO2022_KR$Encoder::init$))},
	{"canEncode", "(C)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ISO2022_KR$Encoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_KR$Encoder", "sun.nio.cs.ext.ISO2022_KR", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.ISO2022$Encoder", "sun.nio.cs.ext.ISO2022", "Encoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _ISO2022_KR$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_KR$Encoder",
	"sun.nio.cs.ext.ISO2022$Encoder",
	nullptr,
	_ISO2022_KR$Encoder_FieldInfo_,
	_ISO2022_KR$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_KR$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_KR"
};

$Object* allocate$ISO2022_KR$Encoder($Class* clazz) {
	return $of($alloc(ISO2022_KR$Encoder));
}

$bytes* ISO2022_KR$Encoder::SOD = nullptr;

void ISO2022_KR$Encoder::init$($Charset* cs) {
	$ISO2022$Encoder::init$(cs);
	$set(this, SODesig, ISO2022_KR$Encoder::SOD);
	try {
		$init($ISO2022_KR$Holder);
		$set(this, ISOEncoder, $nc($ISO2022_KR$Holder::ksc5601_cs)->newEncoder());
	} catch ($Exception& e) {
	}
}

bool ISO2022_KR$Encoder::canEncode(char16_t c) {
	return ($nc(this->ISOEncoder)->canEncode(c));
}

void clinit$ISO2022_KR$Encoder($Class* class$) {
	$assignStatic(ISO2022_KR$Encoder::SOD, $new($bytes, {
		(int8_t)u'$',
		(int8_t)u')',
		(int8_t)u'C'
	}));
}

ISO2022_KR$Encoder::ISO2022_KR$Encoder() {
}

$Class* ISO2022_KR$Encoder::load$($String* name, bool initialize) {
	$loadClass(ISO2022_KR$Encoder, name, initialize, &_ISO2022_KR$Encoder_ClassInfo_, clinit$ISO2022_KR$Encoder, allocate$ISO2022_KR$Encoder);
	return class$;
}

$Class* ISO2022_KR$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun