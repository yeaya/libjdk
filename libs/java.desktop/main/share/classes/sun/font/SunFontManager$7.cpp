#include <sun/font/SunFontManager$7.h>
#include <java/io/File.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

void SunFontManager$7::init$($SunFontManager* this$0, $CreatedFontTracker* val$_tracker, $File* val$fFile) {
	$set(this, this$0, this$0);
	$set(this, val$_tracker, val$_tracker);
	$set(this, val$fFile, val$fFile);
}

$Object* SunFontManager$7::run() {
	if (this->val$_tracker != nullptr) {
		this->val$_tracker->subBytes((int32_t)$nc(this->val$fFile)->length());
	}
	$nc(this->val$fFile)->delete$();
	return nullptr;
}

SunFontManager$7::SunFontManager$7() {
}

$Class* SunFontManager$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$7, this$0)},
		{"val$fFile", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$7, val$fFile)},
		{"val$_tracker", "Lsun/font/CreatedFontTracker;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$7, val$_tracker)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/SunFontManager;Lsun/font/CreatedFontTracker;Ljava/io/File;)V", "()V", 0, $method(SunFontManager$7, init$, void, $SunFontManager*, $CreatedFontTracker*, $File*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SunFontManager$7, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"createFont2D",
		"(Ljava/io/File;IZZLsun/font/CreatedFontTracker;)[Lsun/font/Font2D;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$7",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$7);
	});
	return class$;
}

$Class* SunFontManager$7::class$ = nullptr;

	} // font
} // sun