#include <sun/nio/cs/ext/IBM949C$Holder.h>
#include <java/util/Arrays.h>
#include <sun/nio/cs/ext/IBM949$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM949$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM949C.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $IBM949$DecodeHolder = ::sun::nio::cs::ext::IBM949$DecodeHolder;
using $IBM949$EncodeHolder = ::sun::nio::cs::ext::IBM949$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM949C$Holder::b2cSB = nullptr;
$chars* IBM949C$Holder::c2b = nullptr;
$chars* IBM949C$Holder::c2bIndex = nullptr;

void IBM949C$Holder::init$() {
}

void IBM949C$Holder::clinit$($Class* clazz) {
	{
		$assignStatic(IBM949C$Holder::b2cSB, $new($chars, 256));
		for (int32_t i = 0; i < 128; ++i) {
			IBM949C$Holder::b2cSB->set(i, (char16_t)i);
		}
		for (int32_t i = 128; i < 256; ++i) {
			$init($IBM949$DecodeHolder);
			IBM949C$Holder::b2cSB->set(i, $nc($IBM949$DecodeHolder::b2cSB)->get(i));
		}
		$init($IBM949$EncodeHolder);
		$assignStatic(IBM949C$Holder::c2b, $Arrays::copyOf($IBM949$EncodeHolder::c2b, $nc($IBM949$EncodeHolder::c2b)->length));
		$assignStatic(IBM949C$Holder::c2bIndex, $Arrays::copyOf($IBM949$EncodeHolder::c2bIndex, $nc($IBM949$EncodeHolder::c2bIndex)->length));
		for (char16_t c = u'\0'; c < (char16_t)0x80; ++c) {
			int32_t index = IBM949C$Holder::c2bIndex->get(c >> 8);
			IBM949C$Holder::c2b->set(index + (c & 0xff), c);
		}
	}
}

IBM949C$Holder::IBM949C$Holder() {
}

$Class* IBM949C$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cSB", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM949C$Holder, b2cSB)},
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM949C$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM949C$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM949C$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM949C$Holder", "sun.nio.cs.ext.IBM949C", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM949C$Holder",
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
		"sun.nio.cs.ext.IBM949C"
	};
	$loadClass(IBM949C$Holder, name, initialize, &classInfo$$, IBM949C$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM949C$Holder);
	});
	return class$;
}

$Class* IBM949C$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun