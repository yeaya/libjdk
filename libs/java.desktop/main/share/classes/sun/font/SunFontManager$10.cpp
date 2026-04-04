#include <sun/font/SunFontManager$10.h>
#include <sun/font/Font2D.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef UNKNOWN_RANK

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

void SunFontManager$10::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunFontManager$10::run() {
	if (this->this$0->fontPath == nullptr) {
		$set(this->this$0, fontPath, this->this$0->getPlatformFontPath($SunFontManager::noType1Font));
	}
	if (this->this$0->fontPath != nullptr) {
		this->this$0->registerFontsOnPath(this->this$0->fontPath, false, $Font2D::UNKNOWN_RANK, false, true);
	}
	this->this$0->loadedAllFontFiles = true;
	return nullptr;
}

SunFontManager$10::SunFontManager$10() {
}

$Class* SunFontManager$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$10, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(SunFontManager$10, init$, void, $SunFontManager*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SunFontManager$10, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"loadFontFiles",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$10",
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
	$loadClass(SunFontManager$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$10);
	});
	return class$;
}

$Class* SunFontManager$10::class$ = nullptr;

	} // font
} // sun