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
using $IBM943C = ::sun::nio::cs::ext::IBM943C;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM943C$Holder_FieldInfo_[] = {
	{"b2cSB", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM943C$Holder, b2cSB)},
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM943C$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM943C$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM943C$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM943C$Holder::*)()>(&IBM943C$Holder::init$))},
	{}
};

$InnerClassInfo _IBM943C$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM943C$Holder", "sun.nio.cs.ext.IBM943C", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM943C$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM943C$Holder",
	"java.lang.Object",
	nullptr,
	_IBM943C$Holder_FieldInfo_,
	_IBM943C$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM943C$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM943C"
};

$Object* allocate$IBM943C$Holder($Class* clazz) {
	return $of($alloc(IBM943C$Holder));
}

$chars* IBM943C$Holder::b2cSB = nullptr;
$chars* IBM943C$Holder::c2b = nullptr;
$chars* IBM943C$Holder::c2bIndex = nullptr;

void IBM943C$Holder::init$() {
}

void clinit$IBM943C$Holder($Class* class$) {
	{
		$assignStatic(IBM943C$Holder::b2cSB, $new($chars, 256));
		for (int32_t i = 0; i < 128; ++i) {
			$nc(IBM943C$Holder::b2cSB)->set(i, (char16_t)i);
		}
		for (int32_t i = 128; i < 256; ++i) {
			$init($IBM943$DecodeHolder);
			$nc(IBM943C$Holder::b2cSB)->set(i, $nc($IBM943$DecodeHolder::b2cSB)->get(i));
		}
		$init($IBM943$EncodeHolder);
		$assignStatic(IBM943C$Holder::c2b, $Arrays::copyOf($IBM943$EncodeHolder::c2b, $nc($IBM943$EncodeHolder::c2b)->length));
		$assignStatic(IBM943C$Holder::c2bIndex, $Arrays::copyOf($IBM943$EncodeHolder::c2bIndex, $nc($IBM943$EncodeHolder::c2bIndex)->length));
		for (char16_t c = u'\0'; c < (char16_t)0x80; ++c) {
			int32_t index = $nc(IBM943C$Holder::c2bIndex)->get(c >> 8);
			$nc(IBM943C$Holder::c2b)->set(index + ((int32_t)(c & (uint32_t)255)), c);
		}
	}
}

IBM943C$Holder::IBM943C$Holder() {
}

$Class* IBM943C$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM943C$Holder, name, initialize, &_IBM943C$Holder_ClassInfo_, clinit$IBM943C$Holder, allocate$IBM943C$Holder);
	return class$;
}

$Class* IBM943C$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun