#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/security/AccessController.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream$1.h>
#include <sun/awt/datatransfer/ClassLoaderObjectOutputStream$2.h>
#include <jcpp.h>

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ClassLoaderObjectOutputStream$1 = ::sun::awt::datatransfer::ClassLoaderObjectOutputStream$1;
using $ClassLoaderObjectOutputStream$2 = ::sun::awt::datatransfer::ClassLoaderObjectOutputStream$2;

namespace sun {
	namespace awt {
		namespace datatransfer {

void ClassLoaderObjectOutputStream::init$($OutputStream* os) {
	$ObjectOutputStream::init$(os);
	$set(this, map, $new($HashMap));
}

void ClassLoaderObjectOutputStream::annotateClass($Class* cl) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, classLoader, $cast($ClassLoader, $AccessController::doPrivileged($$new($ClassLoaderObjectOutputStream$1, this, cl))));
	$var($Set, s, $new($HashSet, 1));
	s->add($($nc(cl)->getName()));
	this->map->put(s, classLoader);
}

void ClassLoaderObjectOutputStream::annotateProxyClass($Class* cl) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, classLoader, $cast($ClassLoader, $AccessController::doPrivileged($$new($ClassLoaderObjectOutputStream$2, this, cl))));
	$var($ClassArray, interfaces, $nc(cl)->getInterfaces());
	$var($Set, s, $new($HashSet, interfaces->length));
	for (int32_t i = 0; i < interfaces->length; ++i) {
		s->add($($nc(interfaces->get(i))->getName()));
	}
	this->map->put(s, classLoader);
}

$Map* ClassLoaderObjectOutputStream::getClassLoaderMap() {
	return $new($HashMap, this->map);
}

ClassLoaderObjectOutputStream::ClassLoaderObjectOutputStream() {
}

$Class* ClassLoaderObjectOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/ClassLoader;>;", $PRIVATE | $FINAL, $field(ClassLoaderObjectOutputStream, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(ClassLoaderObjectOutputStream, init$, void, $OutputStream*), "java.io.IOException"},
		{"annotateClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PROTECTED, $virtualMethod(ClassLoaderObjectOutputStream, annotateClass, void, $Class*), "java.io.IOException"},
		{"annotateProxyClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PROTECTED, $virtualMethod(ClassLoaderObjectOutputStream, annotateProxyClass, void, $Class*), "java.io.IOException"},
		{"getClassLoaderMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/util/Set<Ljava/lang/String;>;Ljava/lang/ClassLoader;>;", 0, $method(ClassLoaderObjectOutputStream, getClassLoaderMap, $Map*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.datatransfer.ClassLoaderObjectOutputStream$2", nullptr, nullptr, 0},
		{"sun.awt.datatransfer.ClassLoaderObjectOutputStream$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.datatransfer.ClassLoaderObjectOutputStream",
		"java.io.ObjectOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.datatransfer.ClassLoaderObjectOutputStream$2,sun.awt.datatransfer.ClassLoaderObjectOutputStream$1"
	};
	$loadClass(ClassLoaderObjectOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ClassLoaderObjectOutputStream));
	});
	return class$;
}

$Class* ClassLoaderObjectOutputStream::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun