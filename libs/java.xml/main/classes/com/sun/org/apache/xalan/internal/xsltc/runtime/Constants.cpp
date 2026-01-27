#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Constants.h>

#include <jcpp.h>

#undef ANY
#undef ATTRIBUTE
#undef COMMENT
#undef ELEMENT
#undef EMPTYSTRING
#undef NAMESPACE_FEATURE
#undef PROCESSING_INSTRUCTION
#undef ROOT
#undef TEXT
#undef XMLNS_PREFIX
#undef XMLNS_STRING
#undef XMLNS_URI
#undef XML_PREFIX
#undef XSLT_URI

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

$FieldInfo _Constants_FieldInfo_[] = {
	{"ANY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ANY)},
	{"ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ATTRIBUTE)},
	{"ROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ROOT)},
	{"TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, TEXT)},
	{"ELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, ELEMENT)},
	{"COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, COMMENT)},
	{"PROCESSING_INSTRUCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Constants, PROCESSING_INSTRUCTION)},
	{"XSLT_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XSLT_URI)},
	{"NAMESPACE_FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NAMESPACE_FEATURE)},
	{"EMPTYSTRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, EMPTYSTRING)},
	{"XML_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XML_PREFIX)},
	{"XMLNS_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XMLNS_PREFIX)},
	{"XMLNS_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XMLNS_STRING)},
	{"XMLNS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XMLNS_URI)},
	{}
};

$ClassInfo _Constants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.Constants",
	nullptr,
	nullptr,
	_Constants_FieldInfo_
};

$Object* allocate$Constants($Class* clazz) {
	return $of($alloc(Constants));
}

$String* Constants::XSLT_URI = nullptr;
$String* Constants::NAMESPACE_FEATURE = nullptr;
$String* Constants::EMPTYSTRING = nullptr;
$String* Constants::XML_PREFIX = nullptr;
$String* Constants::XMLNS_PREFIX = nullptr;
$String* Constants::XMLNS_STRING = nullptr;
$String* Constants::XMLNS_URI = nullptr;

void clinit$Constants($Class* class$) {
	$assignStatic(Constants::XSLT_URI, "http://www.w3.org/1999/XSL/Transform"_s);
	$assignStatic(Constants::NAMESPACE_FEATURE, "http://xml.org/sax/features/namespaces"_s);
	$assignStatic(Constants::EMPTYSTRING, ""_s);
	$assignStatic(Constants::XML_PREFIX, "xml"_s);
	$assignStatic(Constants::XMLNS_PREFIX, "xmlns"_s);
	$assignStatic(Constants::XMLNS_STRING, "xmlns:"_s);
	$assignStatic(Constants::XMLNS_URI, "http://www.w3.org/2000/xmlns/"_s);
}

$Class* Constants::load$($String* name, bool initialize) {
	$loadClass(Constants, name, initialize, &_Constants_ClassInfo_, clinit$Constants, allocate$Constants);
	return class$;
}

$Class* Constants::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com