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
using $IBM949C = ::sun::nio::cs::ext::IBM949C;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM949C$Holder_FieldInfo_[] = {
	{"b2cSB", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM949C$Holder, b2cSB)},
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM949C$Holder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM949C$Holder, c2bIndex)},
	{}
};

$MethodInfo _IBM949C$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IBM949C$Holder::*)()>(&IBM949C$Holder::init$))},
	{}
};

$InnerClassInfo _IBM949C$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM949C$Holder", "sun.nio.cs.ext.IBM949C", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM949C$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM949C$Holder",
	"java.lang.Object",
	nullptr,
	_IBM949C$Holder_FieldInfo_,
	_IBM949C$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM949C$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM949C"
};

$Object* allocate$IBM949C$Holder($Class* clazz) {
	return $of($alloc(IBM949C$Holder));
}

$chars* IBM949C$Holder::b2cSB = nullptr;
$chars* IBM949C$Holder::c2b = nullptr;
$chars* IBM949C$Holder::c2bIndex = nullptr;

void IBM949C$Holder::init$() {
}

void clinit$IBM949C$Holder($Class* class$) {
	{
		$assignStatic(IBM949C$Holder::b2cSB, $new($chars, 256));
		for (int32_t i = 0; i < 128; ++i) {
			$nc(IBM949C$Holder::b2cSB)->set(i, (char16_t)i);
		}
		for (int32_t i = 128; i < 256; ++i) {
			$init($IBM949$DecodeHolder);
			$nc(IBM949C$Holder::b2cSB)->set(i, $nc($IBM949$DecodeHolder::b2cSB)->get(i));
		}
		$init($IBM949$EncodeHolder);
		$assignStatic(IBM949C$Holder::c2b, $Arrays::copyOf($IBM949$EncodeHolder::c2b, $nc($IBM949$EncodeHolder::c2b)->length));
		$assignStatic(IBM949C$Holder::c2bIndex, $Arrays::copyOf($IBM949$EncodeHolder::c2bIndex, $nc($IBM949$EncodeHolder::c2bIndex)->length));
		for (char16_t c = u'\0'; c < (char16_t)0x80; ++c) {
			int32_t index = $nc(IBM949C$Holder::c2bIndex)->get(c >> 8);
			$nc(IBM949C$Holder::c2b)->set(index + ((int32_t)(c & (uint32_t)255)), c);
		}
	}
}

IBM949C$Holder::IBM949C$Holder() {
}

$Class* IBM949C$Holder::load$($String* name, bool initialize) {
	$loadClass(IBM949C$Holder, name, initialize, &_IBM949C$Holder_ClassInfo_, clinit$IBM949C$Holder, allocate$IBM949C$Holder);
	return class$;
}

$Class* IBM949C$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun