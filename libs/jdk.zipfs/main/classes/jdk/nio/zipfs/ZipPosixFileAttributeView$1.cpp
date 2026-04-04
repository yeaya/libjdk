#include <jdk/nio/zipfs/ZipPosixFileAttributeView$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/nio/zipfs/ZipFileAttributeView$AttrID.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>
#include <jdk/nio/zipfs/ZipPosixFileAttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ZipFileAttributeView$AttrID = ::jdk::nio::zipfs::ZipFileAttributeView$AttrID;

namespace jdk {
	namespace nio {
		namespace zipfs {

$ints* ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID = nullptr;

void ZipPosixFileAttributeView$1::clinit$($Class* clazz) {
	$assignStatic(ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID, $new($ints, $($ZipFileAttributeView$AttrID::values())->length));
	{
		try {
			ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::owner->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::group->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::permissions->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZipPosixFileAttributeView$1::ZipPosixFileAttributeView$1() {
}

$Class* ZipPosixFileAttributeView$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipPosixFileAttributeView$1, $SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.nio.zipfs.ZipPosixFileAttributeView",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipPosixFileAttributeView$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.nio.zipfs.ZipPosixFileAttributeView$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.nio.zipfs.ZipPosixFileAttributeView"
	};
	$loadClass(ZipPosixFileAttributeView$1, name, initialize, &classInfo$$, ZipPosixFileAttributeView$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ZipPosixFileAttributeView$1);
	});
	return class$;
}

$Class* ZipPosixFileAttributeView$1::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk