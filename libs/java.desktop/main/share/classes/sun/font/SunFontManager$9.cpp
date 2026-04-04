#include <sun/font/SunFontManager$9.h>
#include <java/util/HashSet.h>
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

void SunFontManager$9::init$($SunFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SunFontManager$9::run() {
	if (this->this$0->fontPath == nullptr) {
		$set(this->this$0, fontPath, this->this$0->getPlatformFontPath($SunFontManager::noType1Font));
		this->this$0->registerFontDirs(this->this$0->fontPath);
	}
	if (this->this$0->fontPath != nullptr) {
		if (!this->this$0->gotFontsFromPlatform()) {
			this->this$0->registerFontsOnPath(this->this$0->fontPath, false, $Font2D::UNKNOWN_RANK, false, true);
			this->this$0->loadedAllFontFiles = true;
		}
	}
	this->this$0->registerOtherFontFiles(this->this$0->registeredFontFiles);
	this->this$0->discoveredAllFonts = true;
	return nullptr;
}

SunFontManager$9::SunFontManager$9() {
}

$Class* SunFontManager$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/font/SunFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(SunFontManager$9, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/font/SunFontManager;)V", nullptr, 0, $method(SunFontManager$9, init$, void, $SunFontManager*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SunFontManager$9, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"loadFonts",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$9", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$9",
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
	$loadClass(SunFontManager$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$9);
	});
	return class$;
}

$Class* SunFontManager$9::class$ = nullptr;

	} // font
} // sun