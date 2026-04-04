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

$ints* ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission = nullptr;

void ZipUtils$1::clinit$($Class* clazz) {
	$assignStatic(ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission, $new($ints, $($PosixFilePermission::values())->length));
	{
		try {
			ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission->set($PosixFilePermission::OWNER_READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission->set($PosixFilePermission::OWNER_WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission->set($PosixFilePermission::OWNER_EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission->set($PosixFilePermission::GROUP_READ->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission->set($PosixFilePermission::GROUP_WRITE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission->set($PosixFilePermission::GROUP_EXECUTE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission->set($PosixFilePermission::OTHERS_READ->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission->set($PosixFilePermission::OTHERS_WRITE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipUtils$1::$SwitchMap$java$nio$file$attribute$PosixFilePermission->set($PosixFilePermission::OTHERS_EXECUTE->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZipUtils$1::ZipUtils$1() {
}

$Class* ZipUtils$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$nio$file$attribute$PosixFilePermission", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipUtils$1, $SwitchMap$java$nio$file$attribute$PosixFilePermission)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.nio.zipfs.ZipUtils",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipUtils$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.nio.zipfs.ZipUtils$1",
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
		"jdk.nio.zipfs.ZipUtils"
	};
	$loadClass(ZipUtils$1, name, initialize, &classInfo$$, ZipUtils$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ZipUtils$1);
	});
	return class$;
}

$Class* ZipUtils$1::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk