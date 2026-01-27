#include <javax/xml/transform/OutputKeys.h>

#include <jcpp.h>

#undef CDATA_SECTION_ELEMENTS
#undef DOCTYPE_PUBLIC
#undef DOCTYPE_SYSTEM
#undef ENCODING
#undef INDENT
#undef MEDIA_TYPE
#undef METHOD
#undef OMIT_XML_DECLARATION
#undef STANDALONE
#undef VERSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace transform {

$FieldInfo _OutputKeys_FieldInfo_[] = {
	{"METHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, METHOD)},
	{"VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, VERSION)},
	{"ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, ENCODING)},
	{"OMIT_XML_DECLARATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, OMIT_XML_DECLARATION)},
	{"STANDALONE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, STANDALONE)},
	{"DOCTYPE_PUBLIC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, DOCTYPE_PUBLIC)},
	{"DOCTYPE_SYSTEM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, DOCTYPE_SYSTEM)},
	{"CDATA_SECTION_ELEMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, CDATA_SECTION_ELEMENTS)},
	{"INDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, INDENT)},
	{"MEDIA_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputKeys, MEDIA_TYPE)},
	{}
};

$MethodInfo _OutputKeys_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(OutputKeys, init$, void)},
	{}
};

$ClassInfo _OutputKeys_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.transform.OutputKeys",
	"java.lang.Object",
	nullptr,
	_OutputKeys_FieldInfo_,
	_OutputKeys_MethodInfo_
};

$Object* allocate$OutputKeys($Class* clazz) {
	return $of($alloc(OutputKeys));
}

$String* OutputKeys::METHOD = nullptr;
$String* OutputKeys::VERSION = nullptr;
$String* OutputKeys::ENCODING = nullptr;
$String* OutputKeys::OMIT_XML_DECLARATION = nullptr;
$String* OutputKeys::STANDALONE = nullptr;
$String* OutputKeys::DOCTYPE_PUBLIC = nullptr;
$String* OutputKeys::DOCTYPE_SYSTEM = nullptr;
$String* OutputKeys::CDATA_SECTION_ELEMENTS = nullptr;
$String* OutputKeys::INDENT = nullptr;
$String* OutputKeys::MEDIA_TYPE = nullptr;

void OutputKeys::init$() {
}

OutputKeys::OutputKeys() {
}

void clinit$OutputKeys($Class* class$) {
	$assignStatic(OutputKeys::METHOD, "method"_s);
	$assignStatic(OutputKeys::VERSION, "version"_s);
	$assignStatic(OutputKeys::ENCODING, "encoding"_s);
	$assignStatic(OutputKeys::OMIT_XML_DECLARATION, "omit-xml-declaration"_s);
	$assignStatic(OutputKeys::STANDALONE, "standalone"_s);
	$assignStatic(OutputKeys::DOCTYPE_PUBLIC, "doctype-public"_s);
	$assignStatic(OutputKeys::DOCTYPE_SYSTEM, "doctype-system"_s);
	$assignStatic(OutputKeys::CDATA_SECTION_ELEMENTS, "cdata-section-elements"_s);
	$assignStatic(OutputKeys::INDENT, "indent"_s);
	$assignStatic(OutputKeys::MEDIA_TYPE, "media-type"_s);
}

$Class* OutputKeys::load$($String* name, bool initialize) {
	$loadClass(OutputKeys, name, initialize, &_OutputKeys_ClassInfo_, clinit$OutputKeys, allocate$OutputKeys);
	return class$;
}

$Class* OutputKeys::class$ = nullptr;

		} // transform
	} // xml
} // javax