#include <jdk/nio/zipfs/ZipPath$2.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/AccessMode.h>
#include <jdk/nio/zipfs/ZipPath.h>
#include <jcpp.h>

#undef EXECUTE
#undef READ
#undef WRITE

using $AccessModeArray = $Array<::java::nio::file::AccessMode>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $AccessMode = ::java::nio::file::AccessMode;
using $ZipPath = ::jdk::nio::zipfs::ZipPath;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ZipPath$2_FieldInfo_[] = {
	{"$SwitchMap$java$nio$file$AccessMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipPath$2, $SwitchMap$java$nio$file$AccessMode)},
	{}
};

$EnclosingMethodInfo _ZipPath$2_EnclosingMethodInfo_ = {
	"jdk.nio.zipfs.ZipPath",
	nullptr,
	nullptr
};

$InnerClassInfo _ZipPath$2_InnerClassesInfo_[] = {
	{"jdk.nio.zipfs.ZipPath$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ZipPath$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"jdk.nio.zipfs.ZipPath$2",
	"java.lang.Object",
	nullptr,
	_ZipPath$2_FieldInfo_,
	nullptr,
	nullptr,
	&_ZipPath$2_EnclosingMethodInfo_,
	_ZipPath$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.nio.zipfs.ZipPath"
};

$Object* allocate$ZipPath$2($Class* clazz) {
	return $of($alloc(ZipPath$2));
}

$ints* ZipPath$2::$SwitchMap$java$nio$file$AccessMode = nullptr;

void clinit$ZipPath$2($Class* class$) {
	$assignStatic(ZipPath$2::$SwitchMap$java$nio$file$AccessMode, $new($ints, $($AccessMode::values())->length));
	{
		try {
			$nc(ZipPath$2::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipPath$2::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ZipPath$2::$SwitchMap$java$nio$file$AccessMode)->set($AccessMode::EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZipPath$2::ZipPath$2() {
}

$Class* ZipPath$2::load$($String* name, bool initialize) {
	$loadClass(ZipPath$2, name, initialize, &_ZipPath$2_ClassInfo_, clinit$ZipPath$2, allocate$ZipPath$2);
	return class$;
}

$Class* ZipPath$2::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk