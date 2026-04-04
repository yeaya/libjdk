#include <jdk/nio/zipfs/ZipFileAttributeView$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/nio/zipfs/ZipFileAttributeView$AttrID.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>
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

$ints* ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID = nullptr;

void ZipFileAttributeView$1::clinit$($Class* clazz) {
	$assignStatic(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID, $new($ints, $($ZipFileAttributeView$AttrID::values())->length));
	{
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::size->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::creationTime->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::lastAccessTime->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::lastModifiedTime->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::isDirectory->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::isRegularFile->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::isSymbolicLink->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::isOther->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::fileKey->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::compressedSize->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::crc->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::method->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID->set($ZipFileAttributeView$AttrID::permissions->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZipFileAttributeView$1::ZipFileAttributeView$1() {
}

$Class* ZipFileAttributeView$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipFileAttributeView$1, $SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.nio.zipfs.ZipFileAttributeView",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipFileAttributeView$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.nio.zipfs.ZipFileAttributeView$1",
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
		"jdk.nio.zipfs.ZipFileAttributeView"
	};
	$loadClass(ZipFileAttributeView$1, name, initialize, &classInfo$$, ZipFileAttributeView$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ZipFileAttributeView$1);
	});
	return class$;
}

$Class* ZipFileAttributeView$1::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk