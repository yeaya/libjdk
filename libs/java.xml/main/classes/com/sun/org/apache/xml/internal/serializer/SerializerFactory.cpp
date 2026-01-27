#include <com/sun/org/apache/xml/internal/serializer/SerializerFactory.h>

#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xml/internal/serializer/OutputPropertiesFactory.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/Serializer.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/WrappedRuntimeException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/OutputKeys.h>
#include <org/xml/sax/ContentHandler.h>
#include <jcpp.h>

#undef DEFAULT_SAX_SERIALIZER
#undef ER_FACTORY_PROPERTY_MISSING
#undef ER_SERIALIZER_NOT_CONTENTHANDLER
#undef METHOD
#undef S_KEY_CONTENT_HANDLER

using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $OutputPropertiesFactory = ::com::sun::org::apache::xml::internal::serializer::OutputPropertiesFactory;
using $SerializationHandler = ::com::sun::org::apache::xml::internal::serializer::SerializationHandler;
using $Serializer = ::com::sun::org::apache::xml::internal::serializer::Serializer;
using $SerializerConstants = ::com::sun::org::apache::xml::internal::serializer::SerializerConstants;
using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::serializer::utils::WrappedRuntimeException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Properties = ::java::util::Properties;
using $OutputKeys = ::javax::xml::transform::OutputKeys;
using $ContentHandler = ::org::xml::sax::ContentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _SerializerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(SerializerFactory, init$, void)},
	{"getSerializer", "(Ljava/util/Properties;)Lcom/sun/org/apache/xml/internal/serializer/Serializer;", nullptr, $PUBLIC | $STATIC, $staticMethod(SerializerFactory, getSerializer, $Serializer*, $Properties*)},
	{}
};

$ClassInfo _SerializerFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.SerializerFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SerializerFactory_MethodInfo_
};

$Object* allocate$SerializerFactory($Class* clazz) {
	return $of($alloc(SerializerFactory));
}

void SerializerFactory::init$() {
}

$Serializer* SerializerFactory::getSerializer($Properties* format) {
	$load(SerializerFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Serializer, ser, nullptr);
	try {
		$init($OutputKeys);
		$var($String, method, $nc(format)->getProperty($OutputKeys::METHOD));
		if (method == nullptr) {
			$init($Utils);
			$init($MsgKey);
			$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_FACTORY_PROPERTY_MISSING, $$new($ObjectArray, {$of($OutputKeys::METHOD)})));
			$throwNew($IllegalArgumentException, msg);
		}
		$init($OutputPropertiesFactory);
		$var($String, className, format->getProperty($OutputPropertiesFactory::S_KEY_CONTENT_HANDLER));
		if (nullptr == className) {
			$var($Properties, methodDefaults, $OutputPropertiesFactory::getDefaultMethodProperties(method));
			$assign(className, $nc(methodDefaults)->getProperty($OutputPropertiesFactory::S_KEY_CONTENT_HANDLER));
			if (nullptr == className) {
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_FACTORY_PROPERTY_MISSING, $$new($ObjectArray, {$of($OutputPropertiesFactory::S_KEY_CONTENT_HANDLER)})));
				$throwNew($IllegalArgumentException, msg);
			}
		}
		$Class* cls = $ObjectFactory::findProviderClass(className, true);
		$var($Object, obj, $nc($($nc(cls)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		if ($instanceOf($SerializationHandler, obj)) {
			$assign(ser, $cast($Serializer, obj));
			$nc(ser)->setOutputFormat(format);
		} else if ($instanceOf($ContentHandler, obj)) {
			$init($SerializerConstants);
			$assign(className, $SerializerConstants::DEFAULT_SAX_SERIALIZER);
			cls = $ObjectFactory::findProviderClass(className, true);
			$var($SerializationHandler, sh, $cast($SerializationHandler, $nc($(cls->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
			$nc(sh)->setContentHandler($cast($ContentHandler, obj));
			sh->setOutputFormat(format);
			$assign(ser, sh);
		} else {
			$init($Utils);
			$init($MsgKey);
			$throwNew($Exception, $($nc($Utils::messages)->createMessage($MsgKey::ER_SERIALIZER_NOT_CONTENTHANDLER, $$new($ObjectArray, {$of(className)}))));
		}
	} catch ($Exception& e) {
		$throwNew($WrappedRuntimeException, e);
	}
	return ser;
}

SerializerFactory::SerializerFactory() {
}

$Class* SerializerFactory::load$($String* name, bool initialize) {
	$loadClass(SerializerFactory, name, initialize, &_SerializerFactory_ClassInfo_, allocate$SerializerFactory);
	return class$;
}

$Class* SerializerFactory::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com