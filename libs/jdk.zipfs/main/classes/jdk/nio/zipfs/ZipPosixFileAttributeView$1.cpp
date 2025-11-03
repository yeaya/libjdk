#include <jdk/nio/zipfs/ZipPosixFileAttributeView$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <jdk/nio/zipfs/ZipFileAttributeView$AttrID.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>
#include <jdk/nio/zipfs/ZipPosixFileAttributeView.h>
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
using $ZipPosixFileAttributeView = ::jdk::nio::zipfs::ZipPosixFileAttributeView;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipPosixFileAttributeView$1_FieldInfo_[] = {
	{"$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipPosixFileAttributeView$1, $SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)},
	{}
};

$EnclosingMethodInfo _ZipPosixFileAttributeView$1_EnclosingMethodInfo_ = {
	"jdk.nio.zipfs.ZipPosixFileAttributeView",
	nullptr,
	nullptr
};

$InnerClassInfo _ZipPosixFileAttributeView$1_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipPosixFileAttributeView$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ZipPosixFileAttributeView$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.nio.zipfs.ZipPosixFileAttributeView$1",
	"java.lang.Object",
	nullptr,
	_ZipPosixFileAttributeView$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ZipPosixFileAttributeView$1_EnclosingMethodInfo_,
	_ZipPosixFileAttributeView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipPosixFileAttributeView"
};

$Object* allocate$ZipPosixFileAttributeView$1($Class* clazz) {
	return $of($alloc(ZipPosixFileAttributeView$1));
}

$ints* ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID = nullptr;

void clinit$ZipPosixFileAttributeView$1($Class* class$) {
	$assignStatic(ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID, $new($ints, $($ZipFileAttributeView$AttrID::values())->length));
	{
		try {
			$nc(ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::owner->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::group->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipPosixFileAttributeView$1::$SwitchMap$jdk$nio$zipfs$ZipFileAttributeView$AttrID)->set($ZipFileAttributeView$AttrID::permissions->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZipPosixFileAttributeView$1::ZipPosixFileAttributeView$1() {
}

$Class* ZipPosixFileAttributeView$1::load$($String* name, bool initialize) {
	$loadClass(ZipPosixFileAttributeView$1, name, initialize, &_ZipPosixFileAttributeView$1_ClassInfo_, clinit$ZipPosixFileAttributeView$1, allocate$ZipPosixFileAttributeView$1);
	return class$;
}

$Class* ZipPosixFileAttributeView$1::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk