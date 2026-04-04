#include <jdk/nio/zipfs/ZipPath$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/nio/file/AccessMode.h>
#include <jdk/nio/zipfs/ZipPath.h>
#include <jcpp.h>

#undef EXECUTE
#undef READ
#undef WRITE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $AccessMode = ::java::nio::file::AccessMode;

namespace jdk {
	namespace nio {
		namespace zipfs {

$ints* ZipPath$2::$SwitchMap$java$nio$file$AccessMode = nullptr;

void ZipPath$2::clinit$($Class* clazz) {
	$assignStatic(ZipPath$2::$SwitchMap$java$nio$file$AccessMode, $new($ints, $($AccessMode::values())->length));
	{
		try {
			ZipPath$2::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipPath$2::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ZipPath$2::$SwitchMap$java$nio$file$AccessMode->set($AccessMode::EXECUTE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ZipPath$2::ZipPath$2() {
}

$Class* ZipPath$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$nio$file$AccessMode", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ZipPath$2, $SwitchMap$java$nio$file$AccessMode)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.nio.zipfs.ZipPath",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.nio.zipfs.ZipPath$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.nio.zipfs.ZipPath$2",
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
		"jdk.nio.zipfs.ZipPath"
	};
	$loadClass(ZipPath$2, name, initialize, &classInfo$$, ZipPath$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ZipPath$2);
	});
	return class$;
}

$Class* ZipPath$2::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk