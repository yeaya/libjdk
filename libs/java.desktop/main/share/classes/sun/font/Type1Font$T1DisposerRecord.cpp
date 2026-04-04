#include <sun/font/Type1Font$T1DisposerRecord.h>
#include <java/security/AccessController.h>
#include <sun/font/Type1Font$T1DisposerRecord$1.h>
#include <sun/font/Type1Font.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Type1Font$T1DisposerRecord$1 = ::sun::font::Type1Font$T1DisposerRecord$1;

namespace sun {
	namespace font {

void Type1Font$T1DisposerRecord::init$($String* name) {
	$set(this, fileName, nullptr);
	$set(this, fileName, name);
}

void Type1Font$T1DisposerRecord::dispose() {
	$synchronized(this) {
		$beforeCallerSensitive();
		$AccessController::doPrivileged($$new($Type1Font$T1DisposerRecord$1, this));
	}
}

Type1Font$T1DisposerRecord::Type1Font$T1DisposerRecord() {
}

$Class* Type1Font$T1DisposerRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fileName", "Ljava/lang/String;", nullptr, 0, $field(Type1Font$T1DisposerRecord, fileName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Type1Font$T1DisposerRecord, init$, void, $String*)},
		{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Type1Font$T1DisposerRecord, dispose, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.Type1Font$T1DisposerRecord", "sun.font.Type1Font", "T1DisposerRecord", $PRIVATE | $STATIC},
		{"sun.font.Type1Font$T1DisposerRecord$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.Type1Font$T1DisposerRecord",
		"java.lang.Object",
		"sun.java2d.DisposerRecord",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.Type1Font"
	};
	$loadClass(Type1Font$T1DisposerRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type1Font$T1DisposerRecord);
	});
	return class$;
}

$Class* Type1Font$T1DisposerRecord::class$ = nullptr;

	} // font
} // sun