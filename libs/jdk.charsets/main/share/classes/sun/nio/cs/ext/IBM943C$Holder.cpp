#include <sun/nio/cs/ext/IBM943C$Holder.h>
#include <java/util/Arrays.h>
#include <sun/nio/cs/ext/IBM943$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM943$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM943C.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $IBM943$DecodeHolder = ::sun::nio::cs::ext::IBM943$DecodeHolder;
using $IBM943$EncodeHolder = ::sun::nio::cs::ext::IBM943$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM943C$Holder::b2cSB = nullptr;
$chars* IBM943C$Holder::c2b = nullptr;
$chars* IBM943C$Holder::c2bIndex = nullptr;

void IBM943C$Holder::init$() {
}

void IBM943C$Holder::clinit$($Class* clazz) {
	{
		$assignStatic(IBM943C$Holder::b2cSB, $new($chars, 256));
		for (int32_t i = 0; i < 128; ++i) {
			IBM943C$Holder::b2cSB->set(i, (char16_t)i);
		}
		for (int32_t i = 128; i < 256; ++i) {
			$init($IBM943$DecodeHolder);
			IBM943C$Holder::b2cSB->set(i, $nc($IBM943$DecodeHolder::b2cSB)->get(i));
		}
		$init($IBM943$EncodeHolder);
		$assignStatic(IBM943C$Holder::c2b, $Arrays::copyOf($IBM943$EncodeHolder::c2b, $nc($IBM943$EncodeHolder::c2b)->length));
		$assignStatic(IBM943C$Holder::c2bIndex, $Arrays::copyOf($IBM943$EncodeHolder::c2bIndex, $nc($IBM943$EncodeHolder::c2bIndex)->length));
		for (char16_t c = u'\0'; c < (char16_t)0x80; ++c) {
			int32_t index = IBM943C$Holder::c2bIndex->get(c >> 8);
			IBM943C$Holder::c2b->set(index + (c & 0xff), c);
		}
	}
}

IBM943C$Holder::IBM943C$Holder() {
}

$Class* IBM943C$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cSB", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM943C$Holder, b2cSB)},
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM943C$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM943C$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM943C$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM943C$Holder", "sun.nio.cs.ext.IBM943C", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM943C$Holder",
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
		"sun.nio.cs.ext.IBM943C"
	};
	$loadClass(IBM943C$Holder, name, initialize, &classInfo$$, IBM943C$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM943C$Holder);
	});
	return class$;
}

$Class* IBM943C$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun