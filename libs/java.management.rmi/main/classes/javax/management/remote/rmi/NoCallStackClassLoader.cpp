#include <javax/management/remote/rmi/NoCallStackClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $byteArray2 = $Array<int8_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

void NoCallStackClassLoader::init$($String* className, $bytes* byteCode, $StringArray* referencedClassNames, $ClassLoader* referencedClassLoader, $ProtectionDomain* protectionDomain) {
	$useLocalObjectStack();
	NoCallStackClassLoader::init$($$new($StringArray, {className}), $$new($byteArray2, {byteCode}), referencedClassNames, referencedClassLoader, protectionDomain);
}

void NoCallStackClassLoader::init$($StringArray* classNames, $byteArray2* byteCodes, $StringArray* referencedClassNames, $ClassLoader* referencedClassLoader, $ProtectionDomain* protectionDomain) {
	$ClassLoader::init$(nullptr);
	if (classNames == nullptr || classNames->length == 0 || byteCodes == nullptr || classNames->length != byteCodes->length || referencedClassNames == nullptr || protectionDomain == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	for (int32_t i = 0; i < $nc(classNames)->length; ++i) {
		if (classNames->get(i) == nullptr || $nc(byteCodes)->get(i) == nullptr) {
			$throwNew($IllegalArgumentException);
		}
	}
	for (int32_t i = 0; i < $nc(referencedClassNames)->length; ++i) {
		if (referencedClassNames->get(i) == nullptr) {
			$throwNew($IllegalArgumentException);
		}
	}
	$set(this, classNames, classNames);
	$set(this, byteCodes, byteCodes);
	$set(this, referencedClassNames, referencedClassNames);
	$set(this, referencedClassLoader, referencedClassLoader);
	$set(this, protectionDomain, protectionDomain);
}

$Class* NoCallStackClassLoader::findClass($String* name) {
	for (int32_t i = 0; i < $nc(this->classNames)->length; ++i) {
		if ($nc(name)->equals(this->classNames->get(i))) {
			return defineClass(this->classNames->get(i), $nc(this->byteCodes)->get(i), 0, $nc($nc(this->byteCodes)->get(i))->length, this->protectionDomain);
		}
	}
	if (this->referencedClassLoader != nullptr) {
		for (int32_t i = 0; i < $nc(this->referencedClassNames)->length; ++i) {
			if ($nc(name)->equals(this->referencedClassNames->get(i))) {
				return this->referencedClassLoader->loadClass(name);
			}
		}
	}
	$throwNew($ClassNotFoundException, name);
}

$bytes* NoCallStackClassLoader::stringToBytes($String* s) {
	$init(NoCallStackClassLoader);
	int32_t slen = $nc(s)->length();
	$var($bytes, bytes, $new($bytes, slen));
	for (int32_t i = 0; i < slen; ++i) {
		bytes->set(i, (int8_t)s->charAt(i));
	}
	return bytes;
}

NoCallStackClassLoader::NoCallStackClassLoader() {
}

$Class* NoCallStackClassLoader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NoCallStackClassLoader, classNames)},
		{"byteCodes", "[[B", nullptr, $PRIVATE | $FINAL, $field(NoCallStackClassLoader, byteCodes)},
		{"referencedClassNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NoCallStackClassLoader, referencedClassNames)},
		{"referencedClassLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(NoCallStackClassLoader, referencedClassLoader)},
		{"protectionDomain", "Ljava/security/ProtectionDomain;", nullptr, $PRIVATE | $FINAL, $field(NoCallStackClassLoader, protectionDomain)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[B[Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/security/ProtectionDomain;)V", nullptr, $PUBLIC, $method(NoCallStackClassLoader, init$, void, $String*, $bytes*, $StringArray*, $ClassLoader*, $ProtectionDomain*)},
		{"<init>", "([Ljava/lang/String;[[B[Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/security/ProtectionDomain;)V", nullptr, $PUBLIC, $method(NoCallStackClassLoader, init$, void, $StringArray*, $byteArray2*, $StringArray*, $ClassLoader*, $ProtectionDomain*)},
		{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(NoCallStackClassLoader, findClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"stringToBytes", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(NoCallStackClassLoader, stringToBytes, $bytes*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.remote.rmi.NoCallStackClassLoader",
		"java.lang.ClassLoader",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoCallStackClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoCallStackClassLoader);
	});
	return class$;
}

$Class* NoCallStackClassLoader::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax