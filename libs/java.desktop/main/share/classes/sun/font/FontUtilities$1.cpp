#include <sun/font/FontUtilities$1.h>
#include <java/lang/CharSequence.h>
#include <java/lang/NumberFormatException.h>
#include <sun/font/FontUtilities.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef SEVERE
#undef WARNING

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $FontUtilities = ::sun::font::FontUtilities;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace font {

void FontUtilities$1::init$() {
}

$Object* FontUtilities$1::run() {
	$useLocalObjectStack();
	$var($String, osName, $System::getProperty("os.name"_s, "unknownOS"_s));
	$init($FontUtilities);
	$FontUtilities::isLinux = $nc(osName)->startsWith("Linux"_s);
	$FontUtilities::isMacOSX = osName->contains("OS X"_s);
	if ($FontUtilities::isMacOSX) {
		$FontUtilities::isMacOSX14 = true;
		$var($String, version, $System::getProperty("os.version"_s, ""_s));
		if ($nc(version)->startsWith("10."_s)) {
			$assign(version, version->substring(3));
			int32_t periodIndex = version->indexOf(u'.');
			if (periodIndex != -1) {
				$assign(version, version->substring(0, periodIndex));
			}
			try {
				int32_t v = $Integer::parseInt(version);
				$FontUtilities::isMacOSX14 = (v >= 14);
			} catch ($NumberFormatException& e) {
			}
		}
	}
	$var($String, scalerStr, $System::getProperty("sun.java2d.font.scaler"_s));
	if (scalerStr != nullptr) {
		$FontUtilities::useJDKScaler = "jdk"_s->equals(scalerStr);
	} else {
		$FontUtilities::useJDKScaler = false;
	}
	$FontUtilities::isWindows = osName->startsWith("Windows"_s);
	$var($String, debugLevel, $System::getProperty("sun.java2d.debugfonts"_s));
	if (debugLevel != nullptr && !debugLevel->equals("false"_s)) {
		$FontUtilities::debugFonts$ = true;
		$assignStatic($FontUtilities::logger, $PlatformLogger::getLogger("sun.java2d"_s));
		if (debugLevel->equals("warning"_s)) {
			$init($PlatformLogger$Level);
			$nc($FontUtilities::logger)->setLevel($PlatformLogger$Level::WARNING);
		} else if (debugLevel->equals("severe"_s)) {
			$init($PlatformLogger$Level);
			$nc($FontUtilities::logger)->setLevel($PlatformLogger$Level::SEVERE);
		}
		$FontUtilities::logging = $nc($FontUtilities::logger)->isEnabled();
	}
	return nullptr;
}

FontUtilities$1::FontUtilities$1() {
}

$Class* FontUtilities$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FontUtilities$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FontUtilities$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.FontUtilities",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FontUtilities$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.FontUtilities$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.FontUtilities"
	};
	$loadClass(FontUtilities$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontUtilities$1);
	});
	return class$;
}

$Class* FontUtilities$1::class$ = nullptr;

	} // font
} // sun