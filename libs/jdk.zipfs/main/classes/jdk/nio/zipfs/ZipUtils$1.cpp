#include <jdk/nio/zipfs/ZipUtils$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/attribute/PosixFilePermission.h>
#include <jdk/nio/zipfs/ZipUtils.h>
#include <jcpp.h>

#undef GROUP_EXECUTE
#undef GROUP_READ
#undef GROUP_WRITE
#undef OTHERS_EXECUTE
#undef OTHERS_READ
#undef OTHERS_WRITE
#undef OWNER_EXECUTE
#undef OWNER_READ
#undef OWNER_WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $PosixFilePermission = ::java::nio::file::attribute::PosixFilePermission;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipUtils$1_FieldInfo_[] = {
	{"$SwitchMap$java$nio$file$attribute$PosixFilePermission", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipUtils$1, $SwitchMap$java$nio$file$attribute$PosixFilePermission)},
	{}
};

$EnclosingMethodInfo _ZipUtils$1_EnclosingMethodInfo_ = {
	"jdk.nio.zipfs.ZipUtils",
	nullptr,
	nullptr
};

$InnerClassInfo _ZipUtils$1_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipUtils$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ZipUtils$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.nio.zipfs.ZipUtils$1",
	"java.lang.Object",
	nullptr,
	_ZipUtils$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ZipUtils$1_EnclosingMethodInfo_,
	_ZipUtils$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipUtils"
};

$Object* allocate$ZipUtils$1($Class* clazz) {
	return $of($alloc(ZipUtils$1));
}

$ints* ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission = nullptr;

void clinit$ZipUtils$1($Class* class$) {
	$assignStatic(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission, $new($ints, $($PosixFilePermission::values())->length));
	{
		try {
			$nc(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OWNER_READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OWNER_WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OWNER_EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::GROUP_READ->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::GROUP_WRITE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::GROUP_EXECUTE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OTHERS_READ->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OTHERS_WRITE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission)->set($PosixFilePermission::OTHERS_EXECUTE->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZipUtils$1::ZipUtils$1() {
}

$Class* ZipUtils$1::load$($String* name, bool initialize) {
	$loadClass(ZipUtils$1, name, initialize, &_ZipUtils$1_ClassInfo_, clinit$ZipUtils$1, allocate$ZipUtils$1);
	return class$;
}

$Class* ZipUtils$1::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk