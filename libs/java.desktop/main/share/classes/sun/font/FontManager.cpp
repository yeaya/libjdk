#include <sun/font/FontManager.h>
#include <java/awt/Font.h>
#include <java/io/File.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/Font2D.h>
#include <sun/font/Font2DHandle.h>
#include <jcpp.h>

#undef LOGICAL_FALLBACK
#undef NO_FALLBACK
#undef PHYSICAL_FALLBACK

using $Font2DArray = $Array<::sun::font::Font2D>;
using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $Font2D = ::sun::font::Font2D;
using $Font2DHandle = ::sun::font::Font2DHandle;

namespace sun {
	namespace font {

$Class* FontManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_FALLBACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FontManager, NO_FALLBACK)},
		{"PHYSICAL_FALLBACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FontManager, PHYSICAL_FALLBACK)},
		{"LOGICAL_FALLBACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FontManager, LOGICAL_FALLBACK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"createFont2D", "(Ljava/io/File;IZZLsun/font/CreatedFontTracker;)[Lsun/font/Font2D;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontManager, createFont2D, $Font2DArray*, $File*, int32_t, bool, bool, $CreatedFontTracker*), "java.awt.FontFormatException"},
		{"deRegisterBadFont", "(Lsun/font/Font2D;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontManager, deRegisterBadFont, void, $Font2D*)},
		{"findFont2D", "(Ljava/lang/String;II)Lsun/font/Font2D;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontManager, findFont2D, $Font2D*, $String*, int32_t, int32_t)},
		{"getNewComposite", "(Ljava/lang/String;ILsun/font/Font2DHandle;)Lsun/font/Font2DHandle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontManager, getNewComposite, $Font2DHandle*, $String*, int32_t, $Font2DHandle*)},
		{"preferLocaleFonts", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontManager, preferLocaleFonts, void)},
		{"preferProportionalFonts", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontManager, preferProportionalFonts, void)},
		{"registerFont", "(Ljava/awt/Font;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FontManager, registerFont, bool, $Font*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.font.FontManager",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FontManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontManager);
	});
	return class$;
}

$Class* FontManager::class$ = nullptr;

	} // font
} // sun