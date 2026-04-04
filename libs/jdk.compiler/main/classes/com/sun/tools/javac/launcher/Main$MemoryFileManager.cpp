#include <com/sun/tools/javac/launcher/Main$MemoryFileManager.h>
#include <com/sun/tools/javac/launcher/Main$MemoryFileManager$1.h>
#include <com/sun/tools/javac/launcher/Main.h>
#include <java/net/URI.h>
#include <java/util/Map.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS
#undef CLASS_OUTPUT

using $Main$MemoryFileManager$1 = ::com::sun::tools::javac::launcher::Main$MemoryFileManager$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $Map = ::java::util::Map;
using $FileObject = ::javax::tools::FileObject;
using $ForwardingJavaFileManager = ::javax::tools::ForwardingJavaFileManager;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

void Main$MemoryFileManager::init$($Map* map, $JavaFileManager* delegate) {
	$ForwardingJavaFileManager::init$(delegate);
	$set(this, map, map);
}

$JavaFileObject* Main$MemoryFileManager::getJavaFileForOutput($JavaFileManager$Location* location, $String* className, $JavaFileObject$Kind* kind, $FileObject* sibling) {
	$init($StandardLocation);
	$init($JavaFileObject$Kind);
	if ($equals(location, $StandardLocation::CLASS_OUTPUT) && kind == $JavaFileObject$Kind::CLASS) {
		return createInMemoryClassFile(className);
	} else {
		return $ForwardingJavaFileManager::getJavaFileForOutput(location, className, kind, sibling);
	}
}

$JavaFileObject* Main$MemoryFileManager::createInMemoryClassFile($String* className) {
	$useLocalObjectStack();
	$var($URI, uri, $URI::create($$str({"memory:///"_s, $($nc(className)->replace(u'.', u'/')), ".class"_s})));
	$init($JavaFileObject$Kind);
	return $new($Main$MemoryFileManager$1, this, uri, $JavaFileObject$Kind::CLASS, className);
}

Main$MemoryFileManager::Main$MemoryFileManager() {
}

$Class* Main$MemoryFileManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[B>;", $PRIVATE | $FINAL, $field(Main$MemoryFileManager, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljavax/tools/JavaFileManager;)V", "(Ljava/util/Map<Ljava/lang/String;[B>;Ljavax/tools/JavaFileManager;)V", 0, $method(Main$MemoryFileManager, init$, void, $Map*, $JavaFileManager*)},
		{"createInMemoryClassFile", "(Ljava/lang/String;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $method(Main$MemoryFileManager, createInMemoryClassFile, $JavaFileObject*, $String*)},
		{"getJavaFileForOutput", "(Ljavax/tools/JavaFileManager$Location;Ljava/lang/String;Ljavax/tools/JavaFileObject$Kind;Ljavax/tools/FileObject;)Ljavax/tools/JavaFileObject;", nullptr, $PUBLIC, $virtualMethod(Main$MemoryFileManager, getJavaFileForOutput, $JavaFileObject*, $JavaFileManager$Location*, $String*, $JavaFileObject$Kind*, $FileObject*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.launcher.Main$MemoryFileManager", "com.sun.tools.javac.launcher.Main", "MemoryFileManager", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$MemoryFileManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.launcher.Main$MemoryFileManager",
		"javax.tools.ForwardingJavaFileManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/tools/ForwardingJavaFileManager<Ljavax/tools/JavaFileManager;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.launcher.Main"
	};
	$loadClass(Main$MemoryFileManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Main$MemoryFileManager));
	});
	return class$;
}

$Class* Main$MemoryFileManager::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com