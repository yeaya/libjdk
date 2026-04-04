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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XHTMLSerializer, init$, void)},
		{"<init>", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XHTMLSerializer, init$, void, $OutputFormat*)},
		{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XHTMLSerializer, init$, void, $Writer*, $OutputFormat*)},
		{"<init>", "(Ljava/io/OutputStream;Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $method(XHTMLSerializer, init$, void, $OutputStream*, $OutputFormat*)},
		{"setOutputFormat", "(Lcom/sun/org/apache/xml/internal/serialize/OutputFormat;)V", nullptr, $PUBLIC, $virtualMethod(XHTMLSerializer, setOutputFormat, void, $OutputFormat*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serialize.XHTMLSerializer",
		"com.sun.org.apache.xml.internal.serialize.HTMLSerializer",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(XHTMLSerializer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XHTMLSerializer));
	});
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