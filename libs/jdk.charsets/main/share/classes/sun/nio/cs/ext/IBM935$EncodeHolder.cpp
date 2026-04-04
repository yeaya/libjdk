#include <sun/nio/cs/ext/IBM935$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM935$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM935.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM935$DecodeHolder = ::sun::nio::cs::ext::IBM935$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM935$EncodeHolder::c2b = nullptr;
$chars* IBM935$EncodeHolder::c2bIndex = nullptr;

void IBM935$EncodeHolder::init$() {
}

void IBM935$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM935$EncodeHolder::c2b, $new($chars, 27392));
	$assignStatic(IBM935$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, "%\n"_s);
		$var($String, c2bNR, u"\u0015\u0085"_s);
		$init($IBM935$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM935$DecodeHolder::b2cStr, $IBM935$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM935$EncodeHolder::c2b, IBM935$EncodeHolder::c2bIndex);
	}
}

IBM935$EncodeHolder::IBM935$EncodeHolder() {
}

$Class* IBM935$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM935$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM935$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IBM935$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM935$EncodeHolder", "sun.nio.cs.ext.IBM935", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM935$EncodeHolder",
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
		"sun.nio.cs.ext.IBM935"
	};
	$loadClass(IBM935$EncodeHolder, name, initialize, &classInfo$$, IBM935$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM935$EncodeHolder);
	});
	return class$;
}

$Class* IBM935$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun