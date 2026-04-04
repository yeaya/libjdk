#include <sun/nio/cs/ext/IBM1381$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM1381$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1381.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM1381$DecodeHolder = ::sun::nio::cs::ext::IBM1381$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM1381$EncodeHolder::c2b = nullptr;
$chars* IBM1381$EncodeHolder::c2bIndex = nullptr;

void IBM1381$EncodeHolder::init$() {
}

void IBM1381$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM1381$EncodeHolder::c2b, $new($chars, 27392));
	$assignStatic(IBM1381$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"ꆪ—ꆤ·ꆤ竂"_s);
		$init($IBM1381$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM1381$DecodeHolder::b2cStr, $IBM1381$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 161, 254, IBM1381$EncodeHolder::c2b, IBM1381$EncodeHolder::c2bIndex);
	}
}

IBM1381$EncodeHolder::IBM1381$EncodeHolder() {
}

$Class* IBM1381$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1381$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1381$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IBM1381$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM1381$EncodeHolder", "sun.nio.cs.ext.IBM1381", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM1381$EncodeHolder",
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
		"sun.nio.cs.ext.IBM1381"
	};
	$loadClass(IBM1381$EncodeHolder, name, initialize, &classInfo$$, IBM1381$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM1381$EncodeHolder);
	});
	return class$;
}

$Class* IBM1381$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun