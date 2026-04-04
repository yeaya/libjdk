#include <javax/management/remote/rmi/RMIConnector$ObjectInputStreamWithLoader.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <java/util/Objects.h>
#include <javax/management/remote/rmi/RMIConnector.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void RMIConnector$ObjectInputStreamWithLoader::init$($InputStream* in, $ClassLoader* cl) {
	$ObjectInputStream::init$(in);
	if (cl == nullptr) {
		$throwNew($IllegalArgumentException, "class loader is null"_s);
	}
	$set(this, loader, cl);
}

$Class* RMIConnector$ObjectInputStreamWithLoader::resolveClass($ObjectStreamClass* classDesc) {
	$beforeCallerSensitive();
	$var($String, name, $nc(classDesc)->getName());
	$ReflectUtil::checkPackageAccess(name);
	return $Class::forName(name, false, $cast($ClassLoader, $Objects::requireNonNull(this->loader)));
}

RMIConnector$ObjectInputStreamWithLoader::RMIConnector$ObjectInputStreamWithLoader() {
}

$Class* RMIConnector$ObjectInputStreamWithLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(RMIConnector$ObjectInputStreamWithLoader, loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(RMIConnector$ObjectInputStreamWithLoader, init$, void, $InputStream*, $ClassLoader*), "java.io.IOException,java.lang.IllegalArgumentException"},
		{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(RMIConnector$ObjectInputStreamWithLoader, resolveClass, $Class*, $ObjectStreamClass*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnector$ObjectInputStreamWithLoader", "javax.management.remote.rmi.RMIConnector", "ObjectInputStreamWithLoader", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.management.remote.rmi.RMIConnector$ObjectInputStreamWithLoader",
		"java.io.ObjectInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnector"
	};
	$loadClass(RMIConnector$ObjectInputStreamWithLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RMIConnector$ObjectInputStreamWithLoader));
	});
	return class$;
}

$Class* RMIConnector$ObjectInputStreamWithLoader::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax