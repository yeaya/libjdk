#include <com/sun/org/apache/xml/internal/serialize/SerializerFactoryImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/HTMLSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/Serializer.h>
#include <com/sun/org/apache/xml/internal/serialize/SerializerFactory.h>
#include <com/sun/org/apache/xml/internal/serialize/TextSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/XHTMLSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/XMLSerializer.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

#undef HTML
#undef SERIALIZER_DOMAIN
#undef TEXT
#undef XHTML
#undef XML

using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $BaseMarkupSerializer = ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer;
using $HTMLSerializer = ::com::sun::org::apache::xml::internal::serialize::HTMLSerializer;
using $Method = ::com::sun::org::apache::xml::internal::serialize::Method;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $Serializer = ::com::sun::org::apache::xml::internal::serialize::Serializer;
using $SerializerFactory = ::com::sun::org::apache::xml::internal::serialize::SerializerFactory;
using $TextSerializer = ::com::sun::org::apache::xml::internal::serialize::TextSerializer;
using $XHTMLSerializer = ::com::sun::org::apache::xml::internal::serialize::XHTMLSerializer;
using $XMLSerializer = ::com::sun::org::apache::xml::internal::serialize::XMLSerializer;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _SerializerFactoryImpl_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _SerializerFactoryImpl_FieldInfo_[] = {
	{"_method", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SerializerFactoryImpl, _method)},
	{}
};

$MethodInfo _SerializerFactoryImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(SerializerFactoryImpl, init$, void, $String*)},
	{"getSerializer", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)Lcom/sun/org/apache/xml/internal/serialize/Serializer;", nullptr, $PRIVATE, $method(SerializerFactoryImpl, getSerializer, $Serializer*, $OutputFormat*)},
	{"getSupportedMethod", "()Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(SerializerFactoryImpl, getSupportedMethod, $String*)},
	{"makeSerializer", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)Lcom/sun/org/apache/xml/internal/serialize/Serializer;", nullptr, $PUBLIC, $virtualMethod(SerializerFactoryImpl, makeSerializer, $Serializer*, $OutputFormat*)},
	{"makeSerializer", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)Lcom/sun/org/apache/xml/internal/serialize/Serializer;", nullptr, $PUBLIC, $virtualMethod(SerializerFactoryImpl, makeSerializer, $Serializer*, $Writer*, $OutputFormat*)},
	{"makeSerializer", "(Ljava/io/OutputStream;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)Lcom/sun/org/apache/xml/internal/serialize/Serializer;", nullptr, $PUBLIC, $virtualMethod(SerializerFactoryImpl, makeSerializer, $Serializer*, $OutputStream*, $OutputFormat*), "java.io.UnsupportedEncodingException"},
	{}
};

$ClassInfo _SerializerFactoryImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.SerializerFactoryImpl",
	"com.sun.org.apache.xml.internal.serialize.SerializerFactory",
	nullptr,
	_SerializerFactoryImpl_FieldInfo_,
	_SerializerFactoryImpl_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_SerializerFactoryImpl_Annotations_
};

$Object* allocate$SerializerFactoryImpl($Class* clazz) {
	return $of($alloc(SerializerFactoryImpl));
}

void SerializerFactoryImpl::init$($String* method) {
	$useLocalCurrentObjectStackCache();
	$SerializerFactory::init$();
	$set(this, _method, method);
	$init($Method);
	bool var$2 = !$nc(this->_method)->equals($Method::XML);
	bool var$1 = var$2 && !$nc(this->_method)->equals($Method::HTML);
	bool var$0 = var$1 && !$nc(this->_method)->equals($Method::XHTML);
	if (var$0 && !$nc(this->_method)->equals($Method::TEXT)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "MethodNotSupported"_s, $$new($ObjectArray, {$of(method)})));
		$throwNew($IllegalArgumentException, msg);
	}
}

$Serializer* SerializerFactoryImpl::makeSerializer($OutputFormat* format) {
	$var($Serializer, serializer, nullptr);
	$assign(serializer, getSerializer(format));
	$nc(serializer)->setOutputFormat(format);
	return serializer;
}

$Serializer* SerializerFactoryImpl::makeSerializer($Writer* writer, $OutputFormat* format) {
	$var($Serializer, serializer, nullptr);
	$assign(serializer, getSerializer(format));
	$nc(serializer)->setOutputCharStream(writer);
	return serializer;
}

$Serializer* SerializerFactoryImpl::makeSerializer($OutputStream* output, $OutputFormat* format) {
	$var($Serializer, serializer, nullptr);
	$assign(serializer, getSerializer(format));
	$nc(serializer)->setOutputByteStream(output);
	return serializer;
}

$Serializer* SerializerFactoryImpl::getSerializer($OutputFormat* format) {
	$useLocalCurrentObjectStackCache();
	$init($Method);
	if ($nc(this->_method)->equals($Method::XML)) {
		return $new($XMLSerializer, format);
	} else {
		if ($nc(this->_method)->equals($Method::HTML)) {
			return $new($HTMLSerializer, format);
		} else {
			if ($nc(this->_method)->equals($Method::XHTML)) {
				return $new($XHTMLSerializer, format);
			} else {
				if ($nc(this->_method)->equals($Method::TEXT)) {
					return $new($TextSerializer);
				} else {
					$init($DOMMessageFormatter);
					$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "MethodNotSupported"_s, $$new($ObjectArray, {$of(this->_method)})));
					$throwNew($IllegalStateException, msg);
				}
			}
		}
	}
}

$String* SerializerFactoryImpl::getSupportedMethod() {
	return this->_method;
}

SerializerFactoryImpl::SerializerFactoryImpl() {
}

$Class* SerializerFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(SerializerFactoryImpl, name, initialize, &_SerializerFactoryImpl_ClassInfo_, allocate$SerializerFactoryImpl);
	return class$;
}

$Class* SerializerFactoryImpl::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com