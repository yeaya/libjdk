#include <sun/tools/jar/Main$ModuleInfoEntry.h>
#include <java/io/InputStream.h>
#include <java/util/Optional.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::java::util::Optional;

namespace sun {
	namespace tools {
		namespace jar {

$Class* Main$ModuleInfoEntry::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"bytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Main$ModuleInfoEntry, bytes, $InputStream*), "java.io.IOException"},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Main$ModuleInfoEntry, name, $String*)},
		{"uriString", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Main$ModuleInfoEntry, uriString, $Optional*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.tools.jar.Main$ModuleInfoEntry", "sun.tools.jar.Main", "ModuleInfoEntry", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.tools.jar.Main$ModuleInfoEntry",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.tools.jar.Main"
	};
	$loadClass(Main$ModuleInfoEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$ModuleInfoEntry);
	});
	return class$;
}

$Class* Main$ModuleInfoEntry::class$ = nullptr;

		} // jar
	} // tools
} // sun