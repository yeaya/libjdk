#include <com/sun/tools/javac/platform/PlatformDescription.h>
#include <java/util/List.h>
#include <javax/tools/JavaFileManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $JavaFileManager = ::javax::tools::JavaFileManager;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace platform {

$Class* PlatformDescription::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"getAdditionalOptions", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription, getAdditionalOptions, $List*)},
		{"getAnnotationProcessors", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/platform/PlatformDescription$PluginInfo<Ljavax/annotation/processing/Processor;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription, getAnnotationProcessors, $List*)},
		{"getFileManager", "()Ljavax/tools/JavaFileManager;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription, getFileManager, $JavaFileManager*)},
		{"getPlugins", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/tools/javac/platform/PlatformDescription$PluginInfo<Lcom/sun/source/util/Plugin;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription, getPlugins, $List*)},
		{"getSourceVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription, getSourceVersion, $String*)},
		{"getTargetVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformDescription, getTargetVersion, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.platform.PlatformDescription$PluginInfo", "com.sun.tools.javac.platform.PlatformDescription", "PluginInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.platform.PlatformDescription",
		nullptr,
		"java.io.Closeable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.platform.PlatformDescription$PluginInfo"
	};
	$loadClass(PlatformDescription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformDescription);
	});
	return class$;
}

$Class* PlatformDescription::class$ = nullptr;

				} // platform
			} // javac
		} // tools
	} // sun
} // com