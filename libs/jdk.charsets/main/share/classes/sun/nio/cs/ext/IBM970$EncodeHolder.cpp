#include <sun/nio/cs/ext/IBM970$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM970$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM970.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM970$DecodeHolder = ::sun::nio::cs::ext::IBM970$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM970$EncodeHolder::c2b = nullptr;
$chars* IBM970$EncodeHolder::c2bIndex = nullptr;

void IBM970$EncodeHolder::init$() {
}

void IBM970$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM970$EncodeHolder::c2b, $new($chars, 0x00009300));
	$assignStatic(IBM970$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"ꆤ·ꆩ\u00adꆪ―ꆭ∼ꊦ～ꋁ⊙ꏜ₩"_s);
		$init($IBM970$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM970$DecodeHolder::b2cStr, $IBM970$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 161, 254, IBM970$EncodeHolder::c2b, IBM970$EncodeHolder::c2bIndex);
	}
}

IBM970$EncodeHolder::IBM970$EncodeHolder() {
}

$Class* IBM970$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM970$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM970$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IBM970$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM970$EncodeHolder", "sun.nio.cs.ext.IBM970", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM970$EncodeHolder",
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
		"sun.nio.cs.ext.IBM970"
	};
	$loadClass(IBM970$EncodeHolder, name, initialize, &classInfo$$, IBM970$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM970$EncodeHolder);
	});
	return class$;
}

$Class* IBM970$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun