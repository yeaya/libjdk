#include <sun/font/SunFontManager$5.h>
#include <java/io/File.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

void SunFontManager$5::init$($SunFontManager* this$0, $StringArray* val$files) {
	$set(this, this$0, this$0);
	$set(this, val$files, val$files);
}

$Object* SunFontManager$5::run() {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->val$files)->length; ++i) {
		if (this->val$files->get(i) == nullptr) {
			continue;
		}
		$var($File, f, $new($File, this->val$files->get(i)));
		if (!f->exists()) {
			return $of($Boolean::TRUE);
		}
	}
	return $of($Boolean::FALSE);
}

SunFontManager$5::SunFontManager$5() {
}

$Class* SunFontManager$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$5, this$0)},
		{"val$files", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$5, val$files)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/SunFontManager;[Ljava/lang/String;)V", "()V", 0, $method(SunFontManager$5, init$, void, $SunFontManager*, $StringArray*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(SunFontManager$5, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"findFontFromPlatformMap",
		"(Ljava/lang/String;I)Lsun/font/Font2D;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$5",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$5);
	});
	return class$;
}

$Class* SunFontManager$5::class$ = nullptr;

	} // font
} // sun