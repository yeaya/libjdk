#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/ClassLoaderUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <jcpp.h>

#undef LOG

using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace keyresolver {

$Logger* ClassLoaderUtils::LOG = nullptr;

void ClassLoaderUtils::init$() {
}

$Class* ClassLoaderUtils::loadClass($String* className, $Class* callingClass) {
	$init(ClassLoaderUtils);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($ClassLoader, cl, $($Thread::currentThread())->getContextClassLoader());
		if (cl != nullptr) {
			return cl->loadClass(className);
		}
	} catch ($ClassNotFoundException& e) {
		$nc(ClassLoaderUtils::LOG)->debug($(e->getMessage()), e);
	}
	return loadClass2(className, callingClass);
}

$Class* ClassLoaderUtils::loadClass2($String* className, $Class* callingClass) {
	$init(ClassLoaderUtils);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		return $Class::forName(className);
	} catch ($ClassNotFoundException& ex) {
		try {
			if (ClassLoaderUtils::class$->getClassLoader() != nullptr) {
				return $$nc(ClassLoaderUtils::class$->getClassLoader())->loadClass(className);
			}
		} catch ($ClassNotFoundException& exc) {
			if (callingClass != nullptr && callingClass->getClassLoader() != nullptr) {
				return $$nc(callingClass->getClassLoader())->loadClass(className);
			}
		}
		$nc(ClassLoaderUtils::LOG)->debug($(ex->getMessage()), ex);
		$throw(ex);
	}
	$shouldNotReachHere();
}

void ClassLoaderUtils::clinit$($Class* clazz) {
	$assignStatic(ClassLoaderUtils::LOG, $LoggerFactory::getLogger(ClassLoaderUtils::class$));
}

ClassLoaderUtils::ClassLoaderUtils() {
}

$Class* ClassLoaderUtils::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassLoaderUtils, LOG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ClassLoaderUtils, init$, void)},
		{"loadClass", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $STATIC, $staticMethod(ClassLoaderUtils, loadClass, $Class*, $String*, $Class*), "java.lang.ClassNotFoundException"},
		{"loadClass2", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(ClassLoaderUtils, loadClass2, $Class*, $String*, $Class*), "java.lang.ClassNotFoundException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.keys.keyresolver.ClassLoaderUtils",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassLoaderUtils, name, initialize, &classInfo$$, ClassLoaderUtils::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoaderUtils);
	});
	return class$;
}

$Class* ClassLoaderUtils::class$ = nullptr;

								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com