#include <com/sun/jmx/mbeanserver/ObjectInputStreamWithLoader.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void ObjectInputStreamWithLoader::init$($InputStream* in, $ClassLoader* theLoader) {
	$ObjectInputStream::init$(in);
	$set(this, loader, theLoader);
}

$Class* ObjectInputStreamWithLoader::resolveClass($ObjectStreamClass* aClass) {
	$beforeCallerSensitive();
	if (this->loader == nullptr) {
		return $ObjectInputStream::resolveClass(aClass);
	} else {
		$var($String, name, $nc(aClass)->getName());
		$ReflectUtil::checkPackageAccess(name);
		return $Class::forName(name, false, this->loader);
	}
}

ObjectInputStreamWithLoader::ObjectInputStreamWithLoader() {
}

$Class* ObjectInputStreamWithLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(ObjectInputStreamWithLoader, loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(ObjectInputStreamWithLoader, init$, void, $InputStream*, $ClassLoader*), "java.io.IOException"},
		{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(ObjectInputStreamWithLoader, resolveClass, $Class*, $ObjectStreamClass*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.ObjectInputStreamWithLoader",
		"java.io.ObjectInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ObjectInputStreamWithLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ObjectInputStreamWithLoader));
	});
	return class$;
}

$Class* ObjectInputStreamWithLoader::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com