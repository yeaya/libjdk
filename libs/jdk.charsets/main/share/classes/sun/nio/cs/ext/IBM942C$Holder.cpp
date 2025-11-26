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
using $IBM942C = ::sun::nio::cs::ext::IBM942C;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM942C$Holder_FieldInfo_[] = {
	{"b2cSB", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942C$Holder, b2cSB)},
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942C$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM942C$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM942C$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM942C$Holder::*)()>(&IBM942C$Holder::init$))},
	{}
};

$InnerClassInfo _IBM942C$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM942C$Holder", "sun.nio.cs.ext.IBM942C", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM942C$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM942C$Holder",
	"java.lang.Object",
	nullptr,
	_IBM942C$Holder_FieldInfo_,
	_IBM942C$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM942C$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM942C"
};

$Object* allocate$IBM942C$Holder($Class* clazz) {
	return $of($alloc(IBM942C$Holder));
}

$chars* IBM942C$Holder::b2cSB = nullptr;
$chars* IBM942C$Holder::c2b = nullptr;
$chars* IBM942C$Holder::c2bIndex = nullptr;

void IBM942C$Holder::init$() {
}

void clinit$IBM942C$Holder($Class* class$) {
	{
		$init($IBM942$DecodeHolder);
		$assignStatic(IBM942C$Holder::b2cSB, $Arrays::copyOf($IBM942$DecodeHolder::b2cSB, $nc($IBM942$DecodeHolder::b2cSB)->length));
		$nc(IBM942C$Holder::b2cSB)->set(26, (char16_t)26);
		$nc(IBM942C$Holder::b2cSB)->set(28, (char16_t)28);
		$nc(IBM942C$Holder::b2cSB)->set(92, (char16_t)92);
		$nc(IBM942C$Holder::b2cSB)->set(126, (char16_t)126);
		$nc(IBM942C$Holder::b2cSB)->set(127, (char16_t)127);
		$init($IBM942$EncodeHolder);
		$assignStatic(IBM942C$Holder::c2b, $Arrays::copyOf($IBM942$EncodeHolder::c2b, $nc($IBM942$EncodeHolder::c2b)->length));
		$assignStatic(IBM942C$Holder::c2bIndex, $Arrays::copyOf($IBM942$EncodeHolder::c2bIndex, $nc($IBM942$EncodeHolder::c2bIndex)->length));
		$nc(IBM942C$Holder::c2b)->set($nc(IBM942C$Holder::c2bIndex)->get(0) + 26, (char16_t)26);
		$nc(IBM942C$Holder::c2b)->set($nc(IBM942C$Holder::c2bIndex)->get(0) + 28, (char16_t)28);
		$nc(IBM942C$Holder::c2b)->set($nc(IBM942C$Holder::c2bIndex)->get(0) + 92, (char16_t)92);
		$nc(IBM942C$Holder::c2b)->set($nc(IBM942C$Holder::c2bIndex)->get(0) + 126, (char16_t)126);
		$nc(IBM942C$Holder::c2b)->set($nc(IBM942C$Holder::c2bIndex)->get(0) + 127, (char16_t)127);
	}
}

IBM942C$Holder::IBM942C$Holder() {
}

$Class* IBM942C$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM942C$Holder, name, initialize, &_IBM942C$Holder_ClassInfo_, clinit$IBM942C$Holder, allocate$IBM942C$Holder);
	return class$;
}

$Class* IBM942C$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun