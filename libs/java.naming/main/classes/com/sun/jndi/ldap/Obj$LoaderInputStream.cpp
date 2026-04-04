#include <com/sun/jndi/ldap/Obj$LoaderInputStream.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessError.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
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
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void Obj$LoaderInputStream::init$($InputStream* in, $ClassLoader* cl) {
	$ObjectInputStream::init$(in);
	$set(this, classLoader, cl);
}

$Class* Obj$LoaderInputStream::resolveClass($ObjectStreamClass* desc) {
	try {
		return $nc(this->classLoader)->loadClass($($nc(desc)->getName()));
	} catch ($ClassNotFoundException& e) {
		return $ObjectInputStream::resolveClass(desc);
	}
	$shouldNotReachHere();
}

$Class* Obj$LoaderInputStream::resolveProxyClass($StringArray* interfaces) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, nonPublicLoader, nullptr);
	bool hasNonPublicInterface = false;
	$var($ClassArray, classObjs, $new($ClassArray, $nc(interfaces)->length));
	for (int32_t i = 0; i < interfaces->length; ++i) {
		$Class* cl = $Class::forName(interfaces->get(i), false, this->classLoader);
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
		$Class* proxyClass = $Proxy::getProxyClass(hasNonPublicInterface ? nonPublicLoader : this->classLoader, classObjs);
		return proxyClass;
	} catch ($IllegalArgumentException& e) {
		$throwNew($ClassNotFoundException, nullptr, e);
	}
	$shouldNotReachHere();
}

Obj$LoaderInputStream::Obj$LoaderInputStream() {
}

$Class* Obj$LoaderInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(Obj$LoaderInputStream, classLoader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(Obj$LoaderInputStream, init$, void, $InputStream*, $ClassLoader*), "java.io.IOException"},
		{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(Obj$LoaderInputStream, resolveClass, $Class*, $ObjectStreamClass*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;", "([Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(Obj$LoaderInputStream, resolveProxyClass, $Class*, $StringArray*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.Obj$LoaderInputStream", "com.sun.jndi.ldap.Obj", "LoaderInputStream", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.Obj$LoaderInputStream",
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
		"com.sun.jndi.ldap.Obj"
	};
	$loadClass(Obj$LoaderInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Obj$LoaderInputStream));
	});
	return class$;
}

$Class* Obj$LoaderInputStream::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com