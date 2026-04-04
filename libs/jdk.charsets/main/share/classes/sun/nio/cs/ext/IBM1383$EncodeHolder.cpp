#include <sun/nio/cs/ext/IBM1383$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM1383$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1383.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM1383$DecodeHolder = ::sun::nio::cs::ext::IBM1383$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM1383$EncodeHolder::c2b = nullptr;
$chars* IBM1383$EncodeHolder::c2bIndex = nullptr;

void IBM1383$EncodeHolder::init$() {
}

void IBM1383$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM1383$EncodeHolder::c2b, $new($chars, 26880));
	$assignStatic(IBM1383$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"ﻴ仝ﻮ￥"_s);
		$var($String, c2bNR, u"ꆪ—ꆤ·ꆤ躢ﻮ\uf83dﻴ\uf83e"_s);
		$init($IBM1383$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM1383$DecodeHolder::b2cStr, $IBM1383$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 161, 254, IBM1383$EncodeHolder::c2b, IBM1383$EncodeHolder::c2bIndex);
	}
}

IBM1383$EncodeHolder::IBM1383$EncodeHolder() {
}

$Class* IBM1383$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1383$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1383$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IBM1383$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM1383$EncodeHolder", "sun.nio.cs.ext.IBM1383", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM1383$EncodeHolder",
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
		"sun.nio.cs.ext.IBM1383"
	};
	$loadClass(IBM1383$EncodeHolder, name, initialize, &classInfo$$, IBM1383$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM1383$EncodeHolder);
	});
	return class$;
}

$Class* IBM1383$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun