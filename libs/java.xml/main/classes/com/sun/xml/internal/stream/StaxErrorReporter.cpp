#include <com/sun/xml/internal/stream/StaxErrorReporter.h>

#include <com/sun/org/apache/xerces/internal/impl/PropertyManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/xml/internal/stream/StaxErrorReporter$1.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Locale.h>
#include <javax/xml/stream/Location.h>
#include <javax/xml/stream/XMLInputFactory.h>
#include <javax/xml/stream/XMLReporter.h>
#include <javax/xml/stream/XMLStreamException.h>
#include <jcpp.h>

#undef REPORTER
#undef SEVERITY_ERROR
#undef SEVERITY_FATAL_ERROR
#undef SEVERITY_WARNING
#undef XML_DOMAIN

using $PropertyManager = ::com::sun::org::apache::xerces::internal::impl::PropertyManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $StaxErrorReporter$1 = ::com::sun::xml::internal::stream::StaxErrorReporter$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Location = ::javax::xml::stream::Location;
using $XMLInputFactory = ::javax::xml::stream::XMLInputFactory;
using $XMLReporter = ::javax::xml::stream::XMLReporter;
using $XMLStreamException = ::javax::xml::stream::XMLStreamException;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _StaxErrorReporter_FieldInfo_[] = {
	{"fXMLReporter", "Ljavax/xml/stream/XMLReporter;", nullptr, $PROTECTED, $field(StaxErrorReporter, fXMLReporter)},
	{}
};

$MethodInfo _StaxErrorReporter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $method(StaxErrorReporter, init$, void, $PropertyManager*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(StaxErrorReporter, init$, void)},
	{"convertToStaxLocation", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;)Ljavax/xml/stream/Location;", nullptr, 0, $virtualMethod(StaxErrorReporter, convertToStaxLocation, $Location*, $XMLLocator*)},
	{"reportError", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;S)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StaxErrorReporter, reportError, $String*, $XMLLocator*, $String*, $String*, $ObjectArray*, int16_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"reset", "(Lcom/sun/org/apache/xerces/internal/impl/PropertyManager;)V", nullptr, $PUBLIC, $virtualMethod(StaxErrorReporter, reset, void, $PropertyManager*)},
	{}
};

$InnerClassInfo _StaxErrorReporter_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.StaxErrorReporter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StaxErrorReporter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.StaxErrorReporter",
	"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter",
	nullptr,
	_StaxErrorReporter_FieldInfo_,
	_StaxErrorReporter_MethodInfo_,
	nullptr,
	nullptr,
	_StaxErrorReporter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.StaxErrorReporter$1"
};

$Object* allocate$StaxErrorReporter($Class* clazz) {
	return $of($alloc(StaxErrorReporter));
}

void StaxErrorReporter::init$($PropertyManager* propertyManager) {
	$XMLErrorReporter::init$();
	$set(this, fXMLReporter, nullptr);
	$init($XMLMessageFormatter);
	putMessageFormatter($XMLMessageFormatter::XML_DOMAIN, $$new($XMLMessageFormatter));
	reset(propertyManager);
}

void StaxErrorReporter::init$() {
	$XMLErrorReporter::init$();
	$set(this, fXMLReporter, nullptr);
	$init($XMLMessageFormatter);
	putMessageFormatter($XMLMessageFormatter::XML_DOMAIN, $$new($XMLMessageFormatter));
}

void StaxErrorReporter::reset($PropertyManager* propertyManager) {
	$init($XMLInputFactory);
	$set(this, fXMLReporter, $cast($XMLReporter, $nc(propertyManager)->getProperty($XMLInputFactory::REPORTER)));
}

$String* StaxErrorReporter::reportError($XMLLocator* location, $String* domain, $String* key, $ObjectArray* arguments, int16_t severity) {
	$useLocalCurrentObjectStackCache();
	$var($MessageFormatter, messageFormatter, getMessageFormatter(domain));
	$var($String, message, nullptr);
	if (messageFormatter != nullptr) {
		$assign(message, messageFormatter->formatMessage(this->fLocale, key, arguments));
	} else {
		$var($StringBuffer, str, $new($StringBuffer));
		str->append(domain);
		str->append(u'#');
		str->append(key);
		int32_t argCount = arguments != nullptr ? $nc(arguments)->length : 0;
		if (argCount > 0) {
			str->append(u'?');
			for (int32_t i = 0; i < argCount; ++i) {
				str->append(arguments->get(i));
				if (i < argCount - 1) {
					str->append(u'&');
				}
			}
		}
		$assign(message, str->toString());
	}
	switch (severity) {
	case $XMLErrorReporter::SEVERITY_WARNING:
		{
			{
				try {
					if (this->fXMLReporter != nullptr) {
						$nc(this->fXMLReporter)->report(message, "WARNING"_s, nullptr, $(convertToStaxLocation(location)));
					}
				} catch ($XMLStreamException& ex) {
					$throwNew($XNIException, static_cast<$Exception*>(ex));
				}
				break;
			}
		}
	case $XMLErrorReporter::SEVERITY_ERROR:
		{
			{
				try {
					if (this->fXMLReporter != nullptr) {
						$nc(this->fXMLReporter)->report(message, "ERROR"_s, nullptr, $(convertToStaxLocation(location)));
					}
				} catch ($XMLStreamException& ex) {
					$throwNew($XNIException, static_cast<$Exception*>(ex));
				}
				break;
			}
		}
	case $XMLErrorReporter::SEVERITY_FATAL_ERROR:
		{
			{
				if (!this->fContinueAfterFatalError) {
					$throwNew($XNIException, message);
				}
				break;
			}
		}
	}
	return message;
}

$Location* StaxErrorReporter::convertToStaxLocation($XMLLocator* location) {
	return $new($StaxErrorReporter$1, this, location);
}

StaxErrorReporter::StaxErrorReporter() {
}

$Class* StaxErrorReporter::load$($String* name, bool initialize) {
	$loadClass(StaxErrorReporter, name, initialize, &_StaxErrorReporter_ClassInfo_, allocate$StaxErrorReporter);
	return class$;
}

$Class* StaxErrorReporter::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com