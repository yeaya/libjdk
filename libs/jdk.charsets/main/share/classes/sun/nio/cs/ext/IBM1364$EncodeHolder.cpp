#include <sun/nio/cs/ext/IBM1364$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM1364$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1364.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM1364$DecodeHolder = ::sun::nio::cs::ext::IBM1364$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM1364$EncodeHolder::c2b = nullptr;
$chars* IBM1364$EncodeHolder::c2bIndex = nullptr;

void IBM1364$EncodeHolder::init$() {
}

void IBM1364$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM1364$EncodeHolder::c2b, $new($chars, 0x00009c00));
	$assignStatic(IBM1364$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"䅈\u00ad䅃·䅉―䊡∼䥯⊙䥔～"_s);
		$init($IBM1364$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM1364$DecodeHolder::b2cStr, $IBM1364$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM1364$EncodeHolder::c2b, IBM1364$EncodeHolder::c2bIndex);
	}
}

IBM1364$EncodeHolder::IBM1364$EncodeHolder() {
}

$Class* IBM1364$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1364$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1364$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IBM1364$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM1364$EncodeHolder", "sun.nio.cs.ext.IBM1364", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM1364$EncodeHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.IBM1364"
	};
	$loadClass(IBM1364$EncodeHolder, name, initialize, &classInfo$$, IBM1364$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM1364$EncodeHolder);
	});
	return class$;
}

$Class* IBM1364$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun