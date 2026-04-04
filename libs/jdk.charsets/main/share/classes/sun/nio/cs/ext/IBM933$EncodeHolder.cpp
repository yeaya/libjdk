#include <sun/nio/cs/ext/IBM933$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM933$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM933.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM933$DecodeHolder = ::sun::nio::cs::ext::IBM933$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM933$EncodeHolder::c2b = nullptr;
$chars* IBM933$EncodeHolder::c2bIndex = nullptr;

void IBM933$EncodeHolder::init$() {
}

void IBM933$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM933$EncodeHolder::c2b, $new($chars, 0x00009b00));
	$assignStatic(IBM933$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\u0015\u0085"_s);
		$init($IBM933$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM933$DecodeHolder::b2cStr, $IBM933$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM933$EncodeHolder::c2b, IBM933$EncodeHolder::c2bIndex);
	}
}

IBM933$EncodeHolder::IBM933$EncodeHolder() {
}

$Class* IBM933$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM933$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM933$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IBM933$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM933$EncodeHolder", "sun.nio.cs.ext.IBM933", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM933$EncodeHolder",
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
		"sun.nio.cs.ext.IBM933"
	};
	$loadClass(IBM933$EncodeHolder, name, initialize, &classInfo$$, IBM933$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM933$EncodeHolder);
	});
	return class$;
}

$Class* IBM933$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun