#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader.h>
#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$1.h>
#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$MemoryURLStreamHandler.h>
#include <com/sun/tools/javac/launcher/Main.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <java/nio/file/Path.h>
#include <java/security/CodeSigner.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Principal.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DOT_CLASS_LENGTH
#undef PROTOCOL

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $PrincipalArray = $Array<::java::security::Principal>;
using $Main$MemoryClassLoader$1 = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader$1;
using $Main$MemoryClassLoader$MemoryURLStreamHandler = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader$MemoryURLStreamHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLStreamHandler = ::java::net::URLStreamHandler;
using $Path = ::java::nio::file::Path;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

int32_t Main$MemoryClassLoader::DOT_CLASS_LENGTH = 0;

void Main$MemoryClassLoader::init$($Map* sourceFileClasses, $ClassLoader* parent, $Path* file) {
	$useLocalObjectStack();
	$ClassLoader::init$(parent);
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("sourcelauncher-"_s);
	var$0->append($($of(this)->getClass()->getSimpleName()));
	var$0->append(hashCode());
	$set(this, PROTOCOL, $str(var$0));
	$set(this, sourceFileClasses, sourceFileClasses);
	$var($CodeSource, codeSource, nullptr);
	try {
		$assign(codeSource, $new($CodeSource, $($$nc($nc(file)->toUri())->toURL()), ($CodeSignerArray*)nullptr));
	} catch ($MalformedURLException& e) {
		$assign(codeSource, nullptr);
	}
	$set(this, domain, $new($ProtectionDomain, codeSource, nullptr, this, nullptr));
}

$Class* Main$MemoryClassLoader::loadClass($String* name, bool resolve) {
	$beforeCallerSensitive();
	$synchronized(getClassLoadingLock(name)) {
		$Class* c = findLoadedClass(name);
		if (c == nullptr) {
			if ($nc(this->sourceFileClasses)->containsKey(name)) {
				c = findClass(name);
			} else {
				c = $$nc(getParent())->loadClass(name);
			}
			if (resolve) {
				resolveClass(c);
			}
		}
		return c;
	}
}

$URL* Main$MemoryClassLoader::getResource($String* name) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if ($nc(this->sourceFileClasses)->containsKey($(toBinaryName(name)))) {
		return findResource(name);
	} else {
		return $$nc(getParent())->getResource(name);
	}
}

$Enumeration* Main$MemoryClassLoader::getResources($String* name) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($URL, u, findResource(name));
	$var($Enumeration, e, $$nc(getParent())->getResources(name));
	if (u == nullptr) {
		return e;
	} else {
		$var($List, list, $new($ArrayList));
		list->add(u);
		while ($nc(e)->hasMoreElements()) {
			list->add($$cast($URL, e->nextElement()));
		}
		return $Collections::enumeration(list);
	}
}

$Class* Main$MemoryClassLoader::findClass($String* name) {
	$var($bytes, bytes, $cast($bytes, $nc(this->sourceFileClasses)->get(name)));
	if (bytes == nullptr) {
		$throwNew($ClassNotFoundException, name);
	}
	return defineClass(name, bytes, 0, $nc(bytes)->length, this->domain);
}

$URL* Main$MemoryClassLoader::findResource($String* name) {
	$useLocalObjectStack();
	$var($String, binaryName, toBinaryName(name));
	if (binaryName == nullptr || $nc(this->sourceFileClasses)->get(binaryName) == nullptr) {
		return nullptr;
	}
	$var($URLStreamHandler, handler, this->handler);
	if (handler == nullptr) {
		$set(this, handler, $assign(handler, $new($Main$MemoryClassLoader$MemoryURLStreamHandler, this)));
	}
	try {
		return $new($URL, this->PROTOCOL, nullptr, -1, name, handler);
	} catch ($MalformedURLException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Enumeration* Main$MemoryClassLoader::findResources($String* name) {
	return $new($Main$MemoryClassLoader$1, this, name);
}

$String* Main$MemoryClassLoader::toBinaryName($String* name) {
	if (!$nc(name)->endsWith(".class"_s)) {
		return nullptr;
	}
	return $(name->substring(0, name->length() - Main$MemoryClassLoader::DOT_CLASS_LENGTH))->replace(u'/', u'.');
}

void Main$MemoryClassLoader::clinit$($Class* clazz) {
	Main$MemoryClassLoader::DOT_CLASS_LENGTH = ".class"_s->length();
}

Main$MemoryClassLoader::Main$MemoryClassLoader() {
}

$Class* Main$MemoryClassLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sourceFileClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[B>;", $PRIVATE | $FINAL, $field(Main$MemoryClassLoader, sourceFileClasses)},
		{"domain", "Ljava/security/ProtectionDomain;", nullptr, $PRIVATE | $FINAL, $field(Main$MemoryClassLoader, domain)},
		{"DOT_CLASS_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main$MemoryClassLoader, DOT_CLASS_LENGTH)},
		{"PROTOCOL", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Main$MemoryClassLoader, PROTOCOL)},
		{"handler", "Ljava/net/URLStreamHandler;", nullptr, $PRIVATE, $field(Main$MemoryClassLoader, handler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljava/lang/ClassLoader;Ljava/nio/file/Path;)V", "(Ljava/util/Map<Ljava/lang/String;[B>;Ljava/lang/ClassLoader;Ljava/nio/file/Path;)V", 0, $method(Main$MemoryClassLoader, init$, void, $Map*, $ClassLoader*, $Path*)},
		{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(Main$MemoryClassLoader, findClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"findResource", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(Main$MemoryClassLoader, findResource, $URL*, $String*)},
		{"findResources", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC, $virtualMethod(Main$MemoryClassLoader, findResources, $Enumeration*, $String*)},
		{"getResource", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(Main$MemoryClassLoader, getResource, $URL*, $String*)},
		{"getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;", "(Ljava/lang/String;)Ljava/util/Enumeration<Ljava/net/URL;>;", $PUBLIC, $virtualMethod(Main$MemoryClassLoader, getResources, $Enumeration*, $String*), "java.io.IOException"},
		{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(Main$MemoryClassLoader, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
		{"toBinaryName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(Main$MemoryClassLoader, toBinaryName, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.launcher.Main$MemoryClassLoader", "com.sun.tools.javac.launcher.Main", "MemoryClassLoader", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLConnection", "com.sun.tools.javac.launcher.Main$MemoryClassLoader", "MemoryURLConnection", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLStreamHandler", "com.sun.tools.javac.launcher.Main$MemoryClassLoader", "MemoryURLStreamHandler", $PRIVATE},
		{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.launcher.Main$MemoryClassLoader",
		"java.lang.ClassLoader",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.launcher.Main"
	};
	$loadClass(Main$MemoryClassLoader, name, initialize, &classInfo$$, Main$MemoryClassLoader::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Main$MemoryClassLoader);
	});
	return class$;
}

$Class* Main$MemoryClassLoader::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com