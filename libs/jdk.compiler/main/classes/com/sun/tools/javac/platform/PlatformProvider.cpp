#include <com/sun/tools/javac/platform/PlatformProvider.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <java/lang/Iterable.h>
#include <jcpp.h>

using $PlatformDescription = ::com::sun::tools::javac::platform::PlatformDescription;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

$Class* PlatformProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPlatform", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/tools/javac/platform/PlatformDescription;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformProvider, getPlatform, $PlatformDescription*, $String*, $String*), "com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported"},
		{"getSupportedPlatformNames", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformProvider, getSupportedPlatformNames, $Iterable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported", "com.sun.tools.javac.platform.PlatformProvider", "PlatformNotSupported", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.platform.PlatformProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.platform.PlatformProvider$PlatformNotSupported"
	};
	$loadClass(PlatformProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformProvider);
	});
	return class$;
}

$Class* PlatformProvider::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com