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
using $ISO2022$Encoder = ::sun::nio::cs::ext::ISO2022$Encoder;
using $ISO2022_KR$Holder = ::sun::nio::cs::ext::ISO2022_KR$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

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

void ISO2022_KR$Encoder::clinit$($Class* clazz) {
	$assignStatic(ISO2022_KR$Encoder::SOD, $new($bytes, {
		(int8_t)u'$',
		(int8_t)u')',
		(int8_t)u'C'
	}));
}

ISO2022_KR$Encoder::ISO2022_KR$Encoder() {
}

$Class* ISO2022_KR$Encoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SOD", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_KR$Encoder, SOD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(ISO2022_KR$Encoder, init$, void, $Charset*)},
		{"canEncode", "(C)Z", nullptr, $PUBLIC, $virtualMethod(ISO2022_KR$Encoder, canEncode, bool, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.ISO2022_KR$Encoder", "sun.nio.cs.ext.ISO2022_KR", "Encoder", $PRIVATE | $STATIC},
		{"sun.nio.cs.ext.ISO2022$Encoder", "sun.nio.cs.ext.ISO2022", "Encoder", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.ISO2022_KR$Encoder",
		"sun.nio.cs.ext.ISO2022$Encoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.ISO2022_KR"
	};
	$loadClass(ISO2022_KR$Encoder, name, initialize, &classInfo$$, ISO2022_KR$Encoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ISO2022_KR$Encoder);
	});
	return class$;
}

$Class* ISO2022_KR$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun