#include <com/sun/org/apache/xml/internal/serialize/XHTMLSerializer.h>

#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/HTMLSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <jcpp.h>

#undef XHTML

using $HTMLSerializer = ::com::sun::org::apache::xml::internal::serialize::HTMLSerializer;
using $Method = ::com::sun::org::apache::xml::internal::serialize::Method;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _XHTMLSerializer_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _XHTMLSerializer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XHTMLSerializer, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XHTMLSerializer, init$, void, $OutputFormat*)},
	{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XHTMLSerializer, init$, void, $Writer*, $OutputFormat*)},
	{"<init>", "(Ljava/io/OutputStream;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XHTMLSerializer, init$, void, $OutputStream*, $OutputFormat*)},
	{"setOutputFormat", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $virtualMethod(XHTMLSerializer, setOutputFormat, void, $OutputFormat*)},
	{}
};

$ClassInfo _XHTMLSerializer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.XHTMLSerializer",
	"com.sun.org.apache.xml.internal.serialize.HTMLSerializer",
	nullptr,
	nullptr,
	_XHTMLSerializer_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_XHTMLSerializer_Annotations_
};

$Object* allocate$XHTMLSerializer($Class* clazz) {
	return $of($alloc(XHTMLSerializer));
}

void XHTMLSerializer::init$() {
	$init($Method);
	$HTMLSerializer::init$(true, $$new($OutputFormat, $Method::XHTML, nullptr, false));
}

void XHTMLSerializer::init$($OutputFormat* format) {
	$init($Method);
	$HTMLSerializer::init$(true, format != nullptr ? format : $$new($OutputFormat, $Method::XHTML, nullptr, false));
}

void XHTMLSerializer::init$($Writer* writer, $OutputFormat* format) {
	$init($Method);
	$HTMLSerializer::init$(true, format != nullptr ? format : $$new($OutputFormat, $Method::XHTML, nullptr, false));
	setOutputCharStream(writer);
}

void XHTMLSerializer::init$($OutputStream* output, $OutputFormat* format) {
	$init($Method);
	$HTMLSerializer::init$(true, format != nullptr ? format : $$new($OutputFormat, $Method::XHTML, nullptr, false));
	setOutputByteStream(output);
}

void XHTMLSerializer::setOutputFormat($OutputFormat* format) {
	$init($Method);
	$HTMLSerializer::setOutputFormat(format != nullptr ? format : $$new($OutputFormat, $Method::XHTML, nullptr, false));
}

XHTMLSerializer::XHTMLSerializer() {
}

$Class* XHTMLSerializer::load$($String* name, bool initialize) {
	$loadClass(XHTMLSerializer, name, initialize, &_XHTMLSerializer_ClassInfo_, allocate$XHTMLSerializer);
	return class$;
}

$Class* XHTMLSerializer::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com