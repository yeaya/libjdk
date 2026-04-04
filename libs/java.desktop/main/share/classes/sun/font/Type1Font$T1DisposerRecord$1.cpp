#include <sun/font/Type1Font$T1DisposerRecord$1.h>
#include <java/io/File.h>
#include <sun/font/Type1Font$T1DisposerRecord.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type1Font$T1DisposerRecord = ::sun::font::Type1Font$T1DisposerRecord;

namespace sun {
	namespace font {

void Type1Font$T1DisposerRecord$1::init$($Type1Font$T1DisposerRecord* this$0) {
	$set(this, this$0, this$0);
}

$Object* Type1Font$T1DisposerRecord$1::run() {
	if (this->this$0->fileName != nullptr) {
		($$new($File, this->this$0->fileName))->delete$();
	}
	return nullptr;
}

Type1Font$T1DisposerRecord$1::Type1Font$T1DisposerRecord$1() {
}

$Class* Type1Font$T1DisposerRecord$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/Type1Font$T1DisposerRecord;", nullptr, $FINAL | $SYNTHETIC, $field(Type1Font$T1DisposerRecord$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/Type1Font$T1DisposerRecord;)V", nullptr, 0, $method(Type1Font$T1DisposerRecord$1, init$, void, $Type1Font$T1DisposerRecord*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Type1Font$T1DisposerRecord$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.Type1Font$T1DisposerRecord",
		"dispose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.Type1Font$T1DisposerRecord", "sun.font.Type1Font", "T1DisposerRecord", $PRIVATE | $STATIC},
		{"sun.font.Type1Font$T1DisposerRecord$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.Type1Font$T1DisposerRecord$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.Type1Font"
	};
	$loadClass(Type1Font$T1DisposerRecord$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Type1Font$T1DisposerRecord$1);
	});
	return class$;
}

$Class* Type1Font$T1DisposerRecord$1::class$ = nullptr;

	} // font
} // sun