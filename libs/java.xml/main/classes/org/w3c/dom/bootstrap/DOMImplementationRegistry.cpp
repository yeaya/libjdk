#include <org/w3c/dom/bootstrap/DOMImplementationRegistry.h>

#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/StringTokenizer.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DOMImplementationList.h>
#include <org/w3c/dom/DOMImplementationSource.h>
#include <org/w3c/dom/bootstrap/DOMImplementationRegistry$1.h>
#include <org/w3c/dom/bootstrap/DOMImplementationRegistry$2.h>
#include <org/w3c/dom/bootstrap/DOMImplementationRegistry$3.h>
#include <org/w3c/dom/bootstrap/DOMImplementationRegistry$4.h>
#include <jcpp.h>

#undef DEFAULT_LINE_LENGTH
#undef DEFAULT_PACKAGE
#undef FALLBACK_CLASS
#undef PROPERTY

using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $StringTokenizer = ::java::util::StringTokenizer;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DOMImplementationList = ::org::w3c::dom::DOMImplementationList;
using $DOMImplementationSource = ::org::w3c::dom::DOMImplementationSource;
using $DOMImplementationRegistry$1 = ::org::w3c::dom::bootstrap::DOMImplementationRegistry$1;
using $DOMImplementationRegistry$2 = ::org::w3c::dom::bootstrap::DOMImplementationRegistry$2;
using $DOMImplementationRegistry$3 = ::org::w3c::dom::bootstrap::DOMImplementationRegistry$3;
using $DOMImplementationRegistry$4 = ::org::w3c::dom::bootstrap::DOMImplementationRegistry$4;

namespace org {
	namespace w3c {
		namespace dom {
			namespace bootstrap {

$FieldInfo _DOMImplementationRegistry_FieldInfo_[] = {
	{"PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMImplementationRegistry, PROPERTY)},
	{"DEFAULT_LINE_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DOMImplementationRegistry, DEFAULT_LINE_LENGTH)},
	{"sources", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/DOMImplementationSource;>;", $PRIVATE, $field(DOMImplementationRegistry, sources)},
	{"FALLBACK_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMImplementationRegistry, FALLBACK_CLASS)},
	{"DEFAULT_PACKAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMImplementationRegistry, DEFAULT_PACKAGE)},
	{}
};

$MethodInfo _DOMImplementationRegistry_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lorg/w3c/dom/DOMImplementationSource;>;)V", $PRIVATE, $method(DOMImplementationRegistry, init$, void, $List*)},
	{"addSource", "(Lorg/w3c/dom/DOMImplementationSource;)V", nullptr, $PUBLIC, $method(DOMImplementationRegistry, addSource, void, $DOMImplementationSource*)},
	{"getClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMImplementationRegistry, getClassLoader, $ClassLoader*)},
	{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMImplementationRegistry, getContextClassLoader, $ClassLoader*)},
	{"getDOMImplementation", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $method(DOMImplementationRegistry, getDOMImplementation, $DOMImplementation*, $String*)},
	{"getDOMImplementationList", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementationList;", nullptr, $PUBLIC, $method(DOMImplementationRegistry, getDOMImplementationList, $DOMImplementationList*, $String*)},
	{"getResourceAsStream", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMImplementationRegistry, getResourceAsStream, $InputStream*, $ClassLoader*, $String*)},
	{"getServiceValue", "(Ljava/lang/ClassLoader;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMImplementationRegistry, getServiceValue, $String*, $ClassLoader*)},
	{"getSystemProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(DOMImplementationRegistry, getSystemProperty, $String*, $String*)},
	{"newInstance", "()Lorg/w3c/dom/bootstrap/DOMImplementationRegistry;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMImplementationRegistry, newInstance, DOMImplementationRegistry*), "java.lang.ClassNotFoundException,java.lang.InstantiationException,java.lang.IllegalAccessException,java.lang.ClassCastException"},
	{}
};

$InnerClassInfo _DOMImplementationRegistry_InnerClassesInfo_[] = {
	{"org.w3c.dom.bootstrap.DOMImplementationRegistry$4", nullptr, nullptr, 0},
	{"org.w3c.dom.bootstrap.DOMImplementationRegistry$3", nullptr, nullptr, 0},
	{"org.w3c.dom.bootstrap.DOMImplementationRegistry$2", nullptr, nullptr, 0},
	{"org.w3c.dom.bootstrap.DOMImplementationRegistry$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DOMImplementationRegistry_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry",
	"java.lang.Object",
	nullptr,
	_DOMImplementationRegistry_FieldInfo_,
	_DOMImplementationRegistry_MethodInfo_,
	nullptr,
	nullptr,
	_DOMImplementationRegistry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.w3c.dom.bootstrap.DOMImplementationRegistry$4,org.w3c.dom.bootstrap.DOMImplementationRegistry$3,org.w3c.dom.bootstrap.DOMImplementationRegistry$2,org.w3c.dom.bootstrap.DOMImplementationRegistry$1"
};

$Object* allocate$DOMImplementationRegistry($Class* clazz) {
	return $of($alloc(DOMImplementationRegistry));
}

$String* DOMImplementationRegistry::PROPERTY = nullptr;
$String* DOMImplementationRegistry::FALLBACK_CLASS = nullptr;
$String* DOMImplementationRegistry::DEFAULT_PACKAGE = nullptr;

void DOMImplementationRegistry::init$($List* srcs) {
	$set(this, sources, srcs);
}

DOMImplementationRegistry* DOMImplementationRegistry::newInstance() {
	$init(DOMImplementationRegistry);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($List, sources, $new($ArrayList));
	$var($ClassLoader, classLoader, getClassLoader());
	$var($String, p, getSystemProperty(DOMImplementationRegistry::PROPERTY));
	if (p == nullptr) {
		$assign(p, getServiceValue(classLoader));
	}
	if (p == nullptr) {
		$assign(p, DOMImplementationRegistry::FALLBACK_CLASS);
	}
	if (p != nullptr) {
		$var($StringTokenizer, st, $new($StringTokenizer, p));
		while (st->hasMoreTokens()) {
			$var($String, sourceName, st->nextToken());
			bool internal = false;
			if ($System::getSecurityManager() != nullptr) {
				if (sourceName != nullptr && sourceName->startsWith(DOMImplementationRegistry::DEFAULT_PACKAGE)) {
					internal = true;
				}
			}
			$Class* sourceClass = nullptr;
			if (classLoader != nullptr && !internal) {
				sourceClass = classLoader->loadClass(sourceName);
			} else {
				sourceClass = $Class::forName(sourceName);
			}
			try {
				$var($DOMImplementationSource, source, $cast($DOMImplementationSource, $nc($($nc(sourceClass)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
				sources->add(source);
			} catch ($NoSuchMethodException& e) {
				$throwNew($InstantiationException, $(e->getMessage()));
			} catch ($InvocationTargetException& e) {
				$throwNew($InstantiationException, $(e->getMessage()));
			}
		}
	}
	return $new(DOMImplementationRegistry, sources);
}

$DOMImplementation* DOMImplementationRegistry::getDOMImplementation($String* features) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->sources)->size();
	$var($String, name, nullptr);
	for (int32_t i = 0; i < size; ++i) {
		$var($DOMImplementationSource, source, $cast($DOMImplementationSource, $nc(this->sources)->get(i)));
		$var($DOMImplementation, impl, $nc(source)->getDOMImplementation(features));
		if (impl != nullptr) {
			return impl;
		}
	}
	return nullptr;
}

$DOMImplementationList* DOMImplementationRegistry::getDOMImplementationList($String* features) {
	$useLocalCurrentObjectStackCache();
	$var($List, implementations, $new($ArrayList));
	int32_t size = $nc(this->sources)->size();
	for (int32_t i = 0; i < size; ++i) {
		$var($DOMImplementationSource, source, $cast($DOMImplementationSource, $nc(this->sources)->get(i)));
		$var($DOMImplementationList, impls, $nc(source)->getDOMImplementationList(features));
		for (int32_t j = 0; j < $nc(impls)->getLength(); ++j) {
			$var($DOMImplementation, impl, impls->item(j));
			implementations->add(impl);
		}
	}
	return $new($DOMImplementationRegistry$1, this, implementations);
}

void DOMImplementationRegistry::addSource($DOMImplementationSource* s) {
	if (s == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!$nc(this->sources)->contains(s)) {
		$nc(this->sources)->add(s);
	}
}

$ClassLoader* DOMImplementationRegistry::getClassLoader() {
	$init(DOMImplementationRegistry);
	$beforeCallerSensitive();
	try {
		$var($ClassLoader, contextClassLoader, getContextClassLoader());
		if (contextClassLoader != nullptr) {
			return contextClassLoader;
		}
	} catch ($Exception& e) {
		return DOMImplementationRegistry::class$->getClassLoader();
	}
	return DOMImplementationRegistry::class$->getClassLoader();
}

$String* DOMImplementationRegistry::getServiceValue($ClassLoader* classLoader) {
	$init(DOMImplementationRegistry);
	$useLocalCurrentObjectStackCache();
	$var($String, serviceId, $str({"META-INF/services/"_s, DOMImplementationRegistry::PROPERTY}));
	try {
		$var($InputStream, is, getResourceAsStream(classLoader, serviceId));
		if (is != nullptr) {
			$var($BufferedReader, rd, nullptr);
			try {
				$assign(rd, $new($BufferedReader, $$new($InputStreamReader, is, "UTF-8"_s), DOMImplementationRegistry::DEFAULT_LINE_LENGTH));
			} catch ($UnsupportedEncodingException& e) {
				$assign(rd, $new($BufferedReader, $$new($InputStreamReader, is), DOMImplementationRegistry::DEFAULT_LINE_LENGTH));
			}
			$var($String, serviceValue, $nc(rd)->readLine());
			rd->close();
			if (serviceValue != nullptr && serviceValue->length() > 0) {
				return serviceValue;
			}
		}
	} catch ($Exception& ex) {
		return nullptr;
	}
	return nullptr;
}

$ClassLoader* DOMImplementationRegistry::getContextClassLoader() {
	$init(DOMImplementationRegistry);
	$beforeCallerSensitive();
	return $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DOMImplementationRegistry$2))));
}

$String* DOMImplementationRegistry::getSystemProperty($String* name) {
	$init(DOMImplementationRegistry);
	$beforeCallerSensitive();
	return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DOMImplementationRegistry$3, name))));
}

$InputStream* DOMImplementationRegistry::getResourceAsStream($ClassLoader* classLoader, $String* name) {
	$init(DOMImplementationRegistry);
	$beforeCallerSensitive();
	return $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DOMImplementationRegistry$4, classLoader, name))));
}

DOMImplementationRegistry::DOMImplementationRegistry() {
}

void clinit$DOMImplementationRegistry($Class* class$) {
	$assignStatic(DOMImplementationRegistry::PROPERTY, "org.w3c.dom.DOMImplementationSourceList"_s);
	$assignStatic(DOMImplementationRegistry::FALLBACK_CLASS, "com.sun.org.apache.xerces.internal.dom.DOMXSImplementationSourceImpl"_s);
	$assignStatic(DOMImplementationRegistry::DEFAULT_PACKAGE, "com.sun.org.apache.xerces.internal.dom"_s);
}

$Class* DOMImplementationRegistry::load$($String* name, bool initialize) {
	$loadClass(DOMImplementationRegistry, name, initialize, &_DOMImplementationRegistry_ClassInfo_, clinit$DOMImplementationRegistry, allocate$DOMImplementationRegistry);
	return class$;
}

$Class* DOMImplementationRegistry::class$ = nullptr;

			} // bootstrap
		} // dom
	} // w3c
} // org