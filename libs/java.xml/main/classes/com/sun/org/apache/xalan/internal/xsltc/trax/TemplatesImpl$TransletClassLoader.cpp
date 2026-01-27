#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl$TransletClassLoader.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/TemplatesImpl.h>
#include <java/lang/ClassLoader.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _TemplatesImpl$TransletClassLoader_FieldInfo_[] = {
	{"_loadedExternalExtensionFunctions", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $FINAL, $field(TemplatesImpl$TransletClassLoader, _loadedExternalExtensionFunctions)},
	{}
};

$MethodInfo _TemplatesImpl$TransletClassLoader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", nullptr, 0, $method(TemplatesImpl$TransletClassLoader, init$, void, $ClassLoader*)},
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/util/Map;)V", "(Ljava/lang/ClassLoader;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)V", 0, $method(TemplatesImpl$TransletClassLoader, init$, void, $ClassLoader*, $Map*)},
	{"defineClass", "([B)Ljava/lang/Class;", "([B)Ljava/lang/Class<*>;", 0, $method(TemplatesImpl$TransletClassLoader, defineClass, $Class*, $bytes*)},
	{"defineClass", "([BLjava/security/ProtectionDomain;)Ljava/lang/Class;", "([BLjava/security/ProtectionDomain;)Ljava/lang/Class<*>;", 0, $method(TemplatesImpl$TransletClassLoader, defineClass, $Class*, $bytes*, $ProtectionDomain*)},
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(TemplatesImpl$TransletClassLoader, loadClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _TemplatesImpl$TransletClassLoader_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$TransletClassLoader", "com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl", "TransletClassLoader", $STATIC | $FINAL},
	{}
};

$ClassInfo _TemplatesImpl$TransletClassLoader_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$TransletClassLoader",
	"java.lang.ClassLoader",
	nullptr,
	_TemplatesImpl$TransletClassLoader_FieldInfo_,
	_TemplatesImpl$TransletClassLoader_MethodInfo_,
	nullptr,
	nullptr,
	_TemplatesImpl$TransletClassLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl"
};

$Object* allocate$TemplatesImpl$TransletClassLoader($Class* clazz) {
	return $of($alloc(TemplatesImpl$TransletClassLoader));
}

void TemplatesImpl$TransletClassLoader::init$($ClassLoader* parent) {
	$ClassLoader::init$(parent);
	$set(this, _loadedExternalExtensionFunctions, nullptr);
}

void TemplatesImpl$TransletClassLoader::init$($ClassLoader* parent, $Map* mapEF) {
	$ClassLoader::init$(parent);
	$set(this, _loadedExternalExtensionFunctions, mapEF);
}

$Class* TemplatesImpl$TransletClassLoader::loadClass($String* name) {
	$Class* ret = nullptr;
	if (this->_loadedExternalExtensionFunctions != nullptr) {
		ret = $cast($Class, $nc(this->_loadedExternalExtensionFunctions)->get(name));
	}
	if (ret == nullptr) {
		ret = $ClassLoader::loadClass(name);
	}
	return ret;
}

$Class* TemplatesImpl$TransletClassLoader::defineClass($bytes* b) {
	return defineClass(nullptr, b, 0, $nc(b)->length);
}

$Class* TemplatesImpl$TransletClassLoader::defineClass($bytes* b, $ProtectionDomain* pd) {
	return defineClass(nullptr, b, 0, $nc(b)->length, pd);
}

TemplatesImpl$TransletClassLoader::TemplatesImpl$TransletClassLoader() {
}

$Class* TemplatesImpl$TransletClassLoader::load$($String* name, bool initialize) {
	$loadClass(TemplatesImpl$TransletClassLoader, name, initialize, &_TemplatesImpl$TransletClassLoader_ClassInfo_, allocate$TemplatesImpl$TransletClassLoader);
	return class$;
}

$Class* TemplatesImpl$TransletClassLoader::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com