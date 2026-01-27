#include <com/sun/org/apache/xml/internal/serialize/SerializerFactory.h>

#include <com/sun/org/apache/xerces/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/Serializer.h>
#include <com/sun/org/apache/xml/internal/serialize/SerializerFactoryImpl.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef HTML
#undef TEXT
#undef XHTML
#undef XML

using $ObjectFactory = ::com::sun::org::apache::xerces::internal::utils::ObjectFactory;
using $Method = ::com::sun::org::apache::xml::internal::serialize::Method;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $Serializer = ::com::sun::org::apache::xml::internal::serialize::Serializer;
using $SerializerFactoryImpl = ::com::sun::org::apache::xml::internal::serialize::SerializerFactoryImpl;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $StringTokenizer = ::java::util::StringTokenizer;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _SerializerFactory_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _SerializerFactory_FieldInfo_[] = {
	{"FactoriesProperty", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SerializerFactory, FactoriesProperty)},
	{"_factories", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serialize/SerializerFactory;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SerializerFactory, _factories)},
	{}
};

$MethodInfo _SerializerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SerializerFactory, init$, void)},
	{"getSerializerFactory", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serialize/SerializerFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(SerializerFactory, getSerializerFactory, SerializerFactory*, $String*)},
	{"getSupportedMethod", "()Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(SerializerFactory, getSupportedMethod, $String*)},
	{"makeSerializer", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)Lcom/sun/org/apache/xml/internal/serialize/Serializer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SerializerFactory, makeSerializer, $Serializer*, $OutputFormat*)},
	{"makeSerializer", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)Lcom/sun/org/apache/xml/internal/serialize/Serializer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SerializerFactory, makeSerializer, $Serializer*, $Writer*, $OutputFormat*)},
	{"makeSerializer", "(Ljava/io/OutputStream;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)Lcom/sun/org/apache/xml/internal/serialize/Serializer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SerializerFactory, makeSerializer, $Serializer*, $OutputStream*, $OutputFormat*), "java.io.UnsupportedEncodingException"},
	{"registerSerializerFactory", "(Lcom/sun/org/apache/xml/internal/serialize/SerializerFactory;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SerializerFactory, registerSerializerFactory, void, SerializerFactory*)},
	{}
};

$ClassInfo _SerializerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serialize.SerializerFactory",
	"java.lang.Object",
	nullptr,
	_SerializerFactory_FieldInfo_,
	_SerializerFactory_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SerializerFactory_Annotations_
};

$Object* allocate$SerializerFactory($Class* clazz) {
	return $of($alloc(SerializerFactory));
}

$String* SerializerFactory::FactoriesProperty = nullptr;
$Map* SerializerFactory::_factories = nullptr;

void SerializerFactory::init$() {
}

void SerializerFactory::registerSerializerFactory(SerializerFactory* factory) {
	$init(SerializerFactory);
	$var($String, method, nullptr);
	$synchronized(SerializerFactory::_factories) {
		$assign(method, $nc(factory)->getSupportedMethod());
		$nc(SerializerFactory::_factories)->put(method, factory);
	}
}

SerializerFactory* SerializerFactory::getSerializerFactory($String* method) {
	$init(SerializerFactory);
	return $cast(SerializerFactory, $nc(SerializerFactory::_factories)->get(method));
}

void clinit$SerializerFactory($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(SerializerFactory::FactoriesProperty, "com.sun.org.apache.xml.internal.serialize.factories"_s);
	$assignStatic(SerializerFactory::_factories, $Collections::synchronizedMap($$new($HashMap)));
	{
		$var(SerializerFactory, factory, nullptr);
		$var($String, list, nullptr);
		$var($StringTokenizer, token, nullptr);
		$var($String, className, nullptr);
		$init($Method);
		$assign(factory, $new($SerializerFactoryImpl, $Method::XML));
		SerializerFactory::registerSerializerFactory(factory);
		$assign(factory, $new($SerializerFactoryImpl, $Method::HTML));
		SerializerFactory::registerSerializerFactory(factory);
		$assign(factory, $new($SerializerFactoryImpl, $Method::XHTML));
		SerializerFactory::registerSerializerFactory(factory);
		$assign(factory, $new($SerializerFactoryImpl, $Method::TEXT));
		SerializerFactory::registerSerializerFactory(factory);
		$assign(list, $SecuritySupport::getSystemProperty(SerializerFactory::FactoriesProperty));
		if (list != nullptr) {
			$assign(token, $new($StringTokenizer, list, " ;,:"_s));
			while (token->hasMoreTokens()) {
				$assign(className, token->nextToken());
				try {
					$assign(factory, $cast(SerializerFactory, $ObjectFactory::newInstance(className, true)));
					if ($nc(SerializerFactory::_factories)->containsKey($($nc(factory)->getSupportedMethod()))) {
						$nc(SerializerFactory::_factories)->put($($nc(factory)->getSupportedMethod()), factory);
					}
				} catch ($Exception& except) {
				}
			}
		}
	}
}

SerializerFactory::SerializerFactory() {
}

$Class* SerializerFactory::load$($String* name, bool initialize) {
	$loadClass(SerializerFactory, name, initialize, &_SerializerFactory_ClassInfo_, clinit$SerializerFactory, allocate$SerializerFactory);
	return class$;
}

$Class* SerializerFactory::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com