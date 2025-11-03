#include <jdk/nio/zipfs/ZipFileAttributeView$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <jdk/nio/zipfs/ZipFileAttributeView$AttrID.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>
#include <jcpp.h>

using $ZipFileAttributeView$AttrIDArray = $Array<::jdk::nio::zipfs::ZipFileAttributeView$AttrID>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ZipFileAttributeView = ::jdk::nio::zipfs::ZipFileAttributeView;
using $ZipFileAttributeView$AttrID = ::jdk::nio::zipfs::ZipFileAttributeView$AttrID;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipFileAttributeView$1_FieldInfo_[] = {
	{"$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipFileAttributeView$1, $SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)},
	{}
};

$EnclosingMethodInfo _ZipFileAttributeView$1_EnclosingMethodInfo_ = {
	"jdk.nio.zipfs.ZipFileAttributeView",
	nullptr,
	nullptr
};

$InnerClassInfo _ZipFileAttributeView$1_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipFileAttributeView$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ZipFileAttributeView$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.nio.zipfs.ZipFileAttributeView$1",
	"java.lang.Object",
	nullptr,
	_ZipFileAttributeView$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ZipFileAttributeView$1_EnclosingMethodInfo_,
	_ZipFileAttributeView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipFileAttributeView"
};

$Object* allocate$ZipFileAttributeView$1($Class* clazz) {
	return $of($alloc(ZipFileAttributeView$1));
}

$ints* ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID = nullptr;

void clinit$ZipFileAttributeView$1($Class* class$) {
	$assignStatic(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID, $new($ints, $($ZipFileAttributeView$AttrID::values())->length));
	{
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::size->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::creationTime->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::lastAccessTime->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::lastModifiedTime->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::isDirectory->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::isRegularFile->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::isSymbolicLink->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::isOther->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::fileKey->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::compressedSize->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::crc->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::method->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::permissions->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZipFileAttributeView$1::ZipFileAttributeView$1() {
}

$Class* ZipFileAttributeView$1::load$($String* name, bool initialize) {
	$loadClass(ZipFileAttributeView$1, name, initialize, &_ZipFileAttributeView$1_ClassInfo_, clinit$ZipFileAttributeView$1, allocate$ZipFileAttributeView$1);
	return class$;
}

$Class* ZipFileAttributeView$1::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk