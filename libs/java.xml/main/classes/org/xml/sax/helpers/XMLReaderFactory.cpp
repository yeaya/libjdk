#include <org/xml/sax/helpers/XMLReaderFactory.h>

#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/ServiceConfigurationError.h>
#include <java/util/ServiceLoader.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/NewInstance.h>
#include <jcpp.h>

using $AbstractSAXParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $ServiceConfigurationError = ::java::util::ServiceConfigurationError;
using $ServiceLoader = ::java::util::ServiceLoader;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $SAXException = ::org::xml::sax::SAXException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $NewInstance = ::org::xml::sax::helpers::NewInstance;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

class XMLReaderFactory$$Lambda$lambda$findServiceProvider$0 : public $PrivilegedAction {
	$class(XMLReaderFactory$$Lambda$lambda$findServiceProvider$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Class* type, $ClassLoader* cl) {
		this->type = type;
		$set(this, cl, cl);
	}
	virtual $Object* run() override {
		 return XMLReaderFactory::lambda$findServiceProvider$0(type, cl);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XMLReaderFactory$$Lambda$lambda$findServiceProvider$0>());
	}
	$Class* type = nullptr;
	$ClassLoader* cl = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XMLReaderFactory$$Lambda$lambda$findServiceProvider$0::fieldInfos[3] = {
	{"type", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(XMLReaderFactory$$Lambda$lambda$findServiceProvider$0, type)},
	{"cl", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(XMLReaderFactory$$Lambda$lambda$findServiceProvider$0, cl)},
	{}
};
$MethodInfo XMLReaderFactory$$Lambda$lambda$findServiceProvider$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC, $method(XMLReaderFactory$$Lambda$lambda$findServiceProvider$0, init$, void, $Class*, $ClassLoader*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XMLReaderFactory$$Lambda$lambda$findServiceProvider$0, run, $Object*)},
	{}
};
$ClassInfo XMLReaderFactory$$Lambda$lambda$findServiceProvider$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"org.xml.sax.helpers.XMLReaderFactory$$Lambda$lambda$findServiceProvider$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* XMLReaderFactory$$Lambda$lambda$findServiceProvider$0::load$($String* name, bool initialize) {
	$loadClass(XMLReaderFactory$$Lambda$lambda$findServiceProvider$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XMLReaderFactory$$Lambda$lambda$findServiceProvider$0::class$ = nullptr;

$NamedAttribute XMLReaderFactory_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _XMLReaderFactory_Annotations_[] = {
	{"Ljava/lang/Deprecated;", XMLReaderFactory_Attribute_var$0},
	{}
};

$FieldInfo _XMLReaderFactory_FieldInfo_[] = {
	{"property", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLReaderFactory, property)},
	{}
};

$MethodInfo _XMLReaderFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(XMLReaderFactory, init$, void)},
	{"createXMLReader", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLReaderFactory, createXMLReader, $XMLReader*), "org.xml.sax.SAXException"},
	{"createXMLReader", "(Ljava/lang/String;)Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $STATIC, $staticMethod(XMLReaderFactory, createXMLReader, $XMLReader*, $String*), "org.xml.sax.SAXException"},
	{"findServiceProvider", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/ClassLoader;)TT;", $PRIVATE | $STATIC, $staticMethod(XMLReaderFactory, findServiceProvider, $Object*, $Class*, $ClassLoader*), "org.xml.sax.SAXException"},
	{"jarLookup", "(Ljava/lang/ClassLoader;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLReaderFactory, jarLookup, $String*, $ClassLoader*)},
	{"lambda$findServiceProvider$0", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(XMLReaderFactory, lambda$findServiceProvider$0, $Object*, $Class*, $ClassLoader*)},
	{"loadClass", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Lorg/xml/sax/XMLReader;", nullptr, $PRIVATE | $STATIC, $staticMethod(XMLReaderFactory, loadClass, $XMLReader*, $ClassLoader*, $String*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _XMLReaderFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.xml.sax.helpers.XMLReaderFactory",
	"java.lang.Object",
	nullptr,
	_XMLReaderFactory_FieldInfo_,
	_XMLReaderFactory_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_XMLReaderFactory_Annotations_
};

$Object* allocate$XMLReaderFactory($Class* clazz) {
	return $of($alloc(XMLReaderFactory));
}

$String* XMLReaderFactory::property = nullptr;

void XMLReaderFactory::init$() {
}

$XMLReader* XMLReaderFactory::createXMLReader() {
	$init(XMLReaderFactory);
	$useLocalCurrentObjectStackCache();
	$var($String, className, nullptr);
	$var($ClassLoader, cl, $SecuritySupport::getClassLoader());
	try {
		$assign(className, $SecuritySupport::getSystemProperty(XMLReaderFactory::property));
	} catch ($RuntimeException& e) {
	}
	if (className == nullptr) {
		$load($XMLReader);
		$var($XMLReader, provider, $cast($XMLReader, findServiceProvider($XMLReader::class$, cl)));
		if (provider != nullptr) {
			return provider;
		}
	}
	if (className == nullptr) {
		$assign(className, jarLookup(cl));
	}
	if (className == nullptr) {
		return $new($SAXParser);
	}
	return loadClass(cl, className);
}

$XMLReader* XMLReaderFactory::createXMLReader($String* className) {
	$init(XMLReaderFactory);
	return loadClass($($SecuritySupport::getClassLoader()), className);
}

$XMLReader* XMLReaderFactory::loadClass($ClassLoader* loader, $String* className) {
	$init(XMLReaderFactory);
	$useLocalCurrentObjectStackCache();
	try {
		$load($XMLReader);
		return $cast($XMLReader, $NewInstance::newInstance($XMLReader::class$, loader, className));
	} catch ($ClassNotFoundException& e1) {
		$throwNew($SAXException, $$str({"SAX2 driver class "_s, className, " not found"_s}), e1);
	} catch ($IllegalAccessException& e2) {
		$throwNew($SAXException, $$str({"SAX2 driver class "_s, className, " found but cannot be loaded"_s}), e2);
	} catch ($InstantiationException& e3) {
		$throwNew($SAXException, $$str({"SAX2 driver class "_s, className, " loaded but cannot be instantiated (no empty public constructor?)"_s}), e3);
	} catch ($ClassCastException& e4) {
		$throwNew($SAXException, $$str({"SAX2 driver class "_s, className, " does not implement XMLReader"_s}), e4);
	}
	$shouldNotReachHere();
}

$String* XMLReaderFactory::jarLookup($ClassLoader* loader) {
	$init(XMLReaderFactory);
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, cl, $cast($ClassLoader, $Objects::requireNonNull(loader)));
	$var($String, clsFromJar, nullptr);
	$var($String, service, $str({"META-INF/services/"_s, XMLReaderFactory::property}));
	$var($InputStream, in, nullptr);
	$var($BufferedReader, reader, nullptr);
	try {
		$assign(in, $SecuritySupport::getResourceAsStream(cl, service));
		if (in == nullptr) {
			$assign(in, $SecuritySupport::getResourceAsStream(nullptr, service));
		}
		if (in != nullptr) {
			$assign(reader, $new($BufferedReader, $$new($InputStreamReader, in, "UTF8"_s)));
			$assign(clsFromJar, reader->readLine());
			in->close();
		}
	} catch ($IOException& e) {
	}
	return clsFromJar;
}

$Object* XMLReaderFactory::findServiceProvider($Class* type, $ClassLoader* loader) {
	$init(XMLReaderFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, cl, $cast($ClassLoader, $Objects::requireNonNull(loader)));
	try {
		return $of($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(XMLReaderFactory$$Lambda$lambda$findServiceProvider$0, type, cl))));
	} catch ($ServiceConfigurationError& e) {
		$var($RuntimeException, x, $new($RuntimeException, $$str({"Provider for "_s, type, " cannot be created"_s}), e));
		$throwNew($SAXException, $$str({"Provider for "_s, type, " cannot be created"_s}), x);
	}
	$shouldNotReachHere();
}

$Object* XMLReaderFactory::lambda$findServiceProvider$0($Class* type, $ClassLoader* cl) {
	$init(XMLReaderFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ServiceLoader, serviceLoader, nullptr);
	$assign(serviceLoader, $ServiceLoader::load(type, cl));
	$var($Iterator, iterator, $nc(serviceLoader)->iterator());
	if ($nc(iterator)->hasNext()) {
		return $of(iterator->next());
	} else {
		return $of(nullptr);
	}
}

XMLReaderFactory::XMLReaderFactory() {
}

void clinit$XMLReaderFactory($Class* class$) {
	$assignStatic(XMLReaderFactory::property, "org.xml.sax.driver"_s);
}

$Class* XMLReaderFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(XMLReaderFactory$$Lambda$lambda$findServiceProvider$0::classInfo$.name)) {
			return XMLReaderFactory$$Lambda$lambda$findServiceProvider$0::load$(name, initialize);
		}
	}
	$loadClass(XMLReaderFactory, name, initialize, &_XMLReaderFactory_ClassInfo_, clinit$XMLReaderFactory, allocate$XMLReaderFactory);
	return class$;
}

$Class* XMLReaderFactory::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org