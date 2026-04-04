#include <sun/nio/cs/ext/IBM942C$Holder.h>
#include <java/util/Arrays.h>
#include <sun/nio/cs/ext/IBM942$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM942$EncodeHolder.h>
#include <sun/nio/cs/ext/IBM942C.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $IBM942$DecodeHolder = ::sun::nio::cs::ext::IBM942$DecodeHolder;
using $IBM942$EncodeHolder = ::sun::nio::cs::ext::IBM942$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM942C$Holder::b2cSB = nullptr;
$chars* IBM942C$Holder::c2b = nullptr;
$chars* IBM942C$Holder::c2bIndex = nullptr;

void IBM942C$Holder::init$() {
}

void IBM942C$Holder::clinit$($Class* clazz) {
	{
		$init($IBM942$DecodeHolder);
		$assignStatic(IBM942C$Holder::b2cSB, $Arrays::copyOf($IBM942$DecodeHolder::b2cSB, $nc($IBM942$DecodeHolder::b2cSB)->length));
		IBM942C$Holder::b2cSB->set(26, 26);
		IBM942C$Holder::b2cSB->set(28, 28);
		IBM942C$Holder::b2cSB->set(92, 92);
		IBM942C$Holder::b2cSB->set(126, 126);
		IBM942C$Holder::b2cSB->set(127, 127);
		$init($IBM942$EncodeHolder);
		$assignStatic(IBM942C$Holder::c2b, $Arrays::copyOf($IBM942$EncodeHolder::c2b, $nc($IBM942$EncodeHolder::c2b)->length));
		$assignStatic(IBM942C$Holder::c2bIndex, $Arrays::copyOf($IBM942$EncodeHolder::c2bIndex, $nc($IBM942$EncodeHolder::c2bIndex)->length));
		IBM942C$Holder::c2b->set(IBM942C$Holder::c2bIndex->get(0) + 26, 26);
		IBM942C$Holder::c2b->set(IBM942C$Holder::c2bIndex->get(0) + 28, 28);
		IBM942C$Holder::c2b->set(IBM942C$Holder::c2bIndex->get(0) + 92, 92);
		IBM942C$Holder::c2b->set(IBM942C$Holder::c2bIndex->get(0) + 126, 126);
		IBM942C$Holder::c2b->set(IBM942C$Holder::c2bIndex->get(0) + 127, 127);
	}
}

IBM942C$Holder::IBM942C$Holder() {
}

$Class* IBM942C$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"b2cSB", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942C$Holder, b2cSB)},
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942C$Holder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942C$Holder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IBM942C$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM942C$Holder", "sun.nio.cs.ext.IBM942C", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM942C$Holder",
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
		"sun.nio.cs.ext.IBM942C"
	};
	$loadClass(IBM942C$Holder, name, initialize, &classInfo$$, IBM942C$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM942C$Holder);
	});
	return class$;
}

$Class* IBM942C$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun