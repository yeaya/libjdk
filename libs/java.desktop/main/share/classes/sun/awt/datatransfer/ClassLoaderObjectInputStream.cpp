#include <sun/awt/datatransfer/ClassLoaderObjectInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessError.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef PUBLIC

using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessError = ::java::lang::IllegalAccessError;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;

namespace sun {
	namespace awt {
		namespace datatransfer {

void ClassLoaderObjectInputStream::init$($InputStream* is, $Map* map) {
	$ObjectInputStream::init$(is);
	if (map == nullptr) {
		$throwNew($NullPointerException, "Null map"_s);
	}
	$set(this, map, map);
}

$Class* ClassLoaderObjectInputStream::resolveClass($ObjectStreamClass* classDesc) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, className, $nc(classDesc)->getName());
	$var($Set, s, $new($HashSet, 1));
	s->add(className);
	$var($ClassLoader, classLoader, $cast($ClassLoader, $nc(this->map)->get(s)));
	if (classLoader != nullptr) {
		return $Class::forName(className, false, classLoader);
	} else {
		return $ObjectInputStream::resolveClass(classDesc);
	}
}

$Class* ClassLoaderObjectInputStream::resolveProxyClass($StringArray* interfaces) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Set, s, $new($HashSet, $nc(interfaces)->length));
	for (int32_t i = 0; i < interfaces->length; ++i) {
		s->add(interfaces->get(i));
	}
	$var($ClassLoader, classLoader, $cast($ClassLoader, $nc(this->map)->get(s)));
	if (classLoader == nullptr) {
		return $ObjectInputStream::resolveProxyClass(interfaces);
	}
	$var($ClassLoader, nonPublicLoader, nullptr);
	bool hasNonPublicInterface = false;
	$var($ClassArray, classObjs, $new($ClassArray, interfaces->length));
	for (int32_t i = 0; i < interfaces->length; ++i) {
		$Class* cl = $Class::forName(interfaces->get(i), false, classLoader);
		if ((cl->getModifiers() & $Modifier::PUBLIC) == 0) {
			if (hasNonPublicInterface) {
				if (nonPublicLoader != cl->getClassLoader()) {
					$throwNew($IllegalAccessError, "conflicting non-public interface class loaders"_s);
				}
			} else {
				$assign(nonPublicLoader, cl->getClassLoader());
				hasNonPublicInterface = true;
			}
		}
		classObjs->set(i, cl);
	}
	try {
		$Class* proxyClass = $Proxy::getProxyClass(hasNonPublicInterface ? nonPublicLoader : classLoader, classObjs);
		return proxyClass;
	} catch ($IllegalArgumentException& e) {
		$throwNew($ClassNotFoundException, nullptr, e);
	}
	$shouldNotReachHere();
}

ClassLoaderObjectInputStream::ClassLoaderObjectInputStream() {
}

$Class* ClassLoaderObjectInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/ClassLoader;>;", $PRIVATE | $FINAL, $field(ClassLoaderObjectInputStream, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;Ljava/util/Map;)V", "(Ljava/io/InputStream;Ljava/util/Map<Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/ClassLoader;>;)V", 0, $method(ClassLoaderObjectInputStream, init$, void, $InputStream*, $Map*), "java.io.IOException"},
		{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(ClassLoaderObjectInputStream, resolveClass, $Class*, $ObjectStreamClass*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;", "([Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(ClassLoaderObjectInputStream, resolveProxyClass, $Class*, $StringArray*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.datatransfer.ClassLoaderObjectInputStream",
		"java.io.ObjectInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassLoaderObjectInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ClassLoaderObjectInputStream));
	});
	return class$;
}

$Class* ClassLoaderObjectInputStream::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun