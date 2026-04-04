#include <com/sun/tools/javac/platform/PlatformDescription$PluginInfo.h>
#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

$Class* PlatformDescription$PluginInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription$PluginInfo, getName, $String*)},
		{"getOptions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription$PluginInfo, getOptions, $Map*)},
		{"getPlugin", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription$PluginInfo, getPlugin, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.platform.PlatformDescription$PluginInfo", "com.sun.tools.javac.platform.PlatformDescription", "PluginInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.platform.PlatformDescription$PluginInfo",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.platform.PlatformDescription"
	};
	$loadClass(PlatformDescription$PluginInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformDescription$PluginInfo);
	});
	return class$;
}

$Class* PlatformDescription$PluginInfo::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com