#include <jdk/nio/zipfs/ZipCoder$UTF8.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jdk/nio/zipfs/ZipCoder.h>
#include <jcpp.h>

#undef UTF_8

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $ZipCoder = ::jdk::nio::zipfs::ZipCoder;

namespace jdk {
	namespace nio {
		namespace zipfs {

$MethodInfo _ZipCoder$UTF8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ZipCoder$UTF8::*)()>(&ZipCoder$UTF8::init$))},
	{"getBytes", "(Ljava/lang/String;)[B", nullptr, 0},
	{"toString", "([B)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _ZipCoder$UTF8_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipCoder$UTF8", "jdk.nio.zipfs.ZipCoder", "UTF8", $STATIC},
	{}
};

$ClassInfo _ZipCoder$UTF8_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.nio.zipfs.ZipCoder$UTF8",
	"jdk.nio.zipfs.ZipCoder",
	nullptr,
	nullptr,
	_ZipCoder$UTF8_MethodInfo_,
	nullptr,
	nullptr,
	_ZipCoder$UTF8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipCoder"
};

$Object* allocate$ZipCoder$UTF8($Class* clazz) {
	return $of($alloc(ZipCoder$UTF8));
}

void ZipCoder$UTF8::init$() {
	$init($StandardCharsets);
	$ZipCoder::init$($StandardCharsets::UTF_8);
}

$bytes* ZipCoder$UTF8::getBytes($String* s) {
	for (int32_t i = 0; i < $nc(s)->length(); ++i) {
		if (s->charAt(i) > 127) {
			return $ZipCoder::getBytes(s);
		}
	}
	$init($StandardCharsets);
	return $nc(s)->getBytes($StandardCharsets::ISO_8859_1);
}

$String* ZipCoder$UTF8::toString($bytes* ba) {
	{
		$var($bytes, arr$, ba);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t b = arr$->get(i$);
			{
				if (b < 0) {
					return $ZipCoder::toString(ba);
				}
			}
		}
	}
	$init($StandardCharsets);
	return $new($String, ba, $StandardCharsets::ISO_8859_1);
}

ZipCoder$UTF8::ZipCoder$UTF8() {
}

$Class* ZipCoder$UTF8::load$($String* name, bool initialize) {
	$loadClass(ZipCoder$UTF8, name, initialize, &_ZipCoder$UTF8_ClassInfo_, allocate$ZipCoder$UTF8);
	return class$;
}

$Class* ZipCoder$UTF8::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk