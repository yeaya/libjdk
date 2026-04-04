#include <sun/nio/cs/ext/ISO2022_CN_GB$Encoder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ext/EUC_CN.h>
#include <sun/nio/cs/ext/ISO2022$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_CN_GB.h>
#include <jcpp.h>

#undef SOD

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $EUC_CN = ::sun::nio::cs::ext::EUC_CN;
using $ISO2022$Encoder = ::sun::nio::cs::ext::ISO2022$Encoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$Charset* ISO2022_CN_GB$Encoder::gb2312 = nullptr;
$bytes* ISO2022_CN_GB$Encoder::SOD = nullptr;

void ISO2022_CN_GB$Encoder::init$($Charset* cs) {
	$ISO2022$Encoder::init$(cs);
	$set(this, SODesig, ISO2022_CN_GB$Encoder::SOD);
	$set(this, ISOEncoder, ISO2022_CN_GB$Encoder::gb2312->newEncoder());
}

bool ISO2022_CN_GB$Encoder::isLegalReplacement($bytes* repl) {
	return ($nc(repl)->length == 1 && repl->get(0) == (int8_t)63);
}

void ISO2022_CN_GB$Encoder::clinit$($Class* clazz) {
	$assignStatic(ISO2022_CN_GB$Encoder::gb2312, $new($EUC_CN));
	$assignStatic(ISO2022_CN_GB$Encoder::SOD, $new($bytes, {
		(int8_t)u'$',
		(int8_t)u')',
		(int8_t)u'A'
	}));
}

ISO2022_CN_GB$Encoder::ISO2022_CN_GB$Encoder() {
}

$Class* ISO2022_CN_GB$Encoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"gb2312", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_CN_GB$Encoder, gb2312)},
		{"SOD", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_CN_GB$Encoder, SOD)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(ISO2022_CN_GB$Encoder, init$, void, $Charset*)},
		{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC, $virtualMethod(ISO2022_CN_GB$Encoder, isLegalReplacement, bool, $bytes*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.ISO2022_CN_GB$Encoder", "sun.nio.cs.ext.ISO2022_CN_GB", "Encoder", $PRIVATE | $STATIC},
		{"sun.nio.cs.ext.ISO2022$Encoder", "sun.nio.cs.ext.ISO2022", "Encoder", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.ISO2022_CN_GB$Encoder",
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
		"sun.nio.cs.ext.ISO2022_CN_GB"
	};
	$loadClass(ISO2022_CN_GB$Encoder, name, initialize, &classInfo$$, ISO2022_CN_GB$Encoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ISO2022_CN_GB$Encoder);
	});
	return class$;
}

$Class* ISO2022_CN_GB$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun