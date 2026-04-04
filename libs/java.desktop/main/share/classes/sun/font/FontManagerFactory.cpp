#include <sun/font/FontManagerFactory.h>
#include <java/security/AccessController.h>
#include <sun/font/FontManager.h>
#include <sun/font/FontManagerFactory$1.h>
#include <sun/font/FontUtilities.h>
#include <jcpp.h>

#undef DEFAULT_CLASS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $FontManager = ::sun::font::FontManager;
using $FontManagerFactory$1 = ::sun::font::FontManagerFactory$1;
using $FontUtilities = ::sun::font::FontUtilities;

namespace sun {
	namespace font {

$FontManager* FontManagerFactory::instance = nullptr;
$String* FontManagerFactory::DEFAULT_CLASS = nullptr;

void FontManagerFactory::init$() {
}

$FontManager* FontManagerFactory::getInstance() {
	$init(FontManagerFactory);
	$synchronized(class$) {
		$beforeCallerSensitive();
		if (FontManagerFactory::instance != nullptr) {
			return FontManagerFactory::instance;
		}
		$AccessController::doPrivileged($$new($FontManagerFactory$1));
		return FontManagerFactory::instance;
	}
}

void FontManagerFactory::clinit$($Class* clazz) {
	$assignStatic(FontManagerFactory::instance, nullptr);
	{
		$init($FontUtilities);
		if ($FontUtilities::isWindows) {
			$assignStatic(FontManagerFactory::DEFAULT_CLASS, "sun.awt.Win32FontManager"_s);
		} else if ($FontUtilities::isMacOSX) {
			$assignStatic(FontManagerFactory::DEFAULT_CLASS, "sun.font.CFontManager"_s);
		} else {
			$assignStatic(FontManagerFactory::DEFAULT_CLASS, "sun.awt.X11FontManager"_s);
		}
	}
}

FontManagerFactory::FontManagerFactory() {
}

$Class* FontManagerFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lsun/font/FontManager;", nullptr, $PRIVATE | $STATIC, $staticField(FontManagerFactory, instance)},
		{"DEFAULT_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontManagerFactory, DEFAULT_CLASS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontManagerFactory, init$, void)},
		{"getInstance", "()Lsun/font/FontManager;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(FontManagerFactory, getInstance, $FontManager*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FontManagerFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.font.FontManagerFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.font.FontManagerFactory$1"
	};
	$loadClass(FontManagerFactory, name, initialize, &classInfo$$, FontManagerFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FontManagerFactory);
	});
	return class$;
}

$Class* FontManagerFactory::class$ = nullptr;

	} // font
} // sun