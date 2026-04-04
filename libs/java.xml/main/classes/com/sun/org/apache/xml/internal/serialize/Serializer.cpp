#include <com/sun/org/apache/xml/internal/serialize/Serializer.h>
#include <com/sun/org/apache/xml/internal/serialize/DOMSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <jcpp.h>

using $DOMSerializer = ::com::sun::org::apache::xml::internal::serialize::DOMSerializer;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$Class* Serializer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"asContentHandler", "()Lorg/xml/sax/ContentHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Serializer, asContentHandler, $ContentHandler*), "java.io.IOException"},
		{"asDOMSerializer", "()Lcom/sun/org/apache/xml/internal/serialize/DOMSerializer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Serializer, asDOMSerializer, $DOMSerializer*), "java.io.IOException"},
		{"asDocumentHandler", "()Lorg/xml/sax/DocumentHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Serializer, asDocumentHandler, $DocumentHandler*), "java.io.IOException"},
		{"setOutputByteStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Serializer, setOutputByteStream, void, $OutputStream*)},
		{"setOutputCharStream", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Serializer, setOutputCharStream, void, $Writer*)},
		{"setOutputFormat", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Serializer, setOutputFormat, void, $OutputFormat*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.serialize.Serializer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Serializer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Serializer);
	});
	return class$;
}

$Class* Serializer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com