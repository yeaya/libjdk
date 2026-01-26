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

$MethodInfo _PlatformDescription$PluginInfo_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription$PluginInfo, getName, $String*)},
	{"getOptions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription$PluginInfo, getOptions, $Map*)},
	{"getPlugin", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription$PluginInfo, getPlugin, $Object*)},
	{}
};

$InnerClassInfo _PlatformDescription$PluginInfo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.platform.PlatformDescription$PluginInfo", "com.sun.tools.javac.platform.PlatformDescription", "PluginInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PlatformDescription$PluginInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.tools.javac.platform.PlatformDescription$PluginInfo",
	nullptr,
	nullptr,
	nullptr,
	_PlatformDescription$PluginInfo_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_PlatformDescription$PluginInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.platform.PlatformDescription"
};

$Object* allocate$PlatformDescription$PluginInfo($Class* clazz) {
	return $of($alloc(PlatformDescription$PluginInfo));
}

$Class* PlatformDescription$PluginInfo::load$($String* name, bool initialize) {
	$loadClass(PlatformDescription$PluginInfo, name, initialize, &_PlatformDescription$PluginInfo_ClassInfo_, allocate$PlatformDescription$PluginInfo);
	return class$;
}

$Class* PlatformDescription$PluginInfo::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com