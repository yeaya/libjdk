#include <sun/font/SunFontManager$6.h>
#include <java/io/File.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

void SunFontManager$6::init$($SunFontManager* this$0, $String* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
}

$Object* SunFontManager$6::run() {
	$useLocalObjectStack();
	for (int32_t p = 0; p < $nc(this->this$0->pathDirs)->length; ++p) {
		$init($File);
		$var($File, f, $new($File, $$str({this->this$0->pathDirs->get(p), $File::separator, this->val$s})));
		if (f->exists()) {
			return $of(f->getAbsolutePath());
		}
	}
	return nullptr;
}

SunFontManager$6::SunFontManager$6() {
}

$Class* SunFontManager$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$6, this$0)},
		{"val$s", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$6, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/SunFontManager;Ljava/lang/String;)V", "()V", 0, $method(SunFontManager$6, init$, void, $SunFontManager*, $String*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SunFontManager$6, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"getPathName",
		"(Ljava/lang/String;)Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$6",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$6);
	});
	return class$;
}

$Class* SunFontManager$6::class$ = nullptr;

	} // font
} // sun