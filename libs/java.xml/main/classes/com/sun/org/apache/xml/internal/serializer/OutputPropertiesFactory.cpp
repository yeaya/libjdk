#include <com/sun/org/apache/xml/internal/serializer/OutputPropertiesFactory.h>

#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/OutputKeys.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ENCODING
#undef PROP_HTML
#undef PROP_HTML_VALUE
#undef PROP_TEXT
#undef PROP_TEXT_VALUE
#undef PROP_UNKNOWN
#undef PROP_UNKNOWN_VALUE
#undef PROP_XML
#undef PROP_XML_VALUE
#undef S_BUILTIN_EXTENSIONS_UNIVERSAL
#undef S_BUILTIN_EXTENSIONS_URL
#undef S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL
#undef S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN
#undef S_BUILTIN_OLD_EXTENSIONS_URL
#undef S_KEY_CONTENT_HANDLER
#undef S_KEY_ENTITIES
#undef S_KEY_INDENT_AMOUNT
#undef S_KEY_LINE_SEPARATOR
#undef S_OMIT_META_TAG
#undef S_USE_URL_ESCAPING

using $Encodings = ::com::sun::org::apache::xml::internal::serializer::Encodings;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Properties = ::java::util::Properties;
using $OutputKeys = ::javax::xml::transform::OutputKeys;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _OutputPropertiesFactory_FieldInfo_[] = {
	{"S_BUILTIN_EXTENSIONS_URL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_BUILTIN_EXTENSIONS_URL)},
	{"S_BUILTIN_OLD_EXTENSIONS_URL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_BUILTIN_OLD_EXTENSIONS_URL)},
	{"S_BUILTIN_EXTENSIONS_UNIVERSAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_BUILTIN_EXTENSIONS_UNIVERSAL)},
	{"S_KEY_INDENT_AMOUNT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_KEY_INDENT_AMOUNT)},
	{"S_KEY_LINE_SEPARATOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_KEY_LINE_SEPARATOR)},
	{"S_KEY_CONTENT_HANDLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_KEY_CONTENT_HANDLER)},
	{"S_KEY_ENTITIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_KEY_ENTITIES)},
	{"S_USE_URL_ESCAPING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_USE_URL_ESCAPING)},
	{"S_OMIT_META_TAG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_OMIT_META_TAG)},
	{"S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL)},
	{"S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN)},
	{"PROP_XML", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, PROP_XML)},
	{"PROP_XML_VALUE", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, PROP_XML_VALUE)},
	{"PROP_HTML", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, PROP_HTML)},
	{"PROP_HTML_VALUE", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, PROP_HTML_VALUE)},
	{"PROP_TEXT", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, PROP_TEXT)},
	{"PROP_TEXT_VALUE", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, PROP_TEXT_VALUE)},
	{"PROP_UNKNOWN", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, PROP_UNKNOWN)},
	{"PROP_UNKNOWN_VALUE", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputPropertiesFactory, PROP_UNKNOWN_VALUE)},
	{"m_xml_properties", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(OutputPropertiesFactory, m_xml_properties)},
	{"m_html_properties", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(OutputPropertiesFactory, m_html_properties)},
	{"m_text_properties", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(OutputPropertiesFactory, m_text_properties)},
	{"m_unknown_properties", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(OutputPropertiesFactory, m_unknown_properties)},
	{}
};

$MethodInfo _OutputPropertiesFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OutputPropertiesFactory, init$, void)},
	{"getDefaultMethodProperties", "(Ljava/lang/String;)Ljava/util/Properties;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(OutputPropertiesFactory, getDefaultMethodProperties, $Properties*, $String*)},
	{"initProperties", "([Ljava/lang/String;[Ljava/lang/String;Ljava/util/Properties;)Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticMethod(OutputPropertiesFactory, initProperties, $Properties*, $StringArray*, $StringArray*, $Properties*)},
	{}
};

$ClassInfo _OutputPropertiesFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.OutputPropertiesFactory",
	"java.lang.Object",
	nullptr,
	_OutputPropertiesFactory_FieldInfo_,
	_OutputPropertiesFactory_MethodInfo_
};

$Object* allocate$OutputPropertiesFactory($Class* clazz) {
	return $of($alloc(OutputPropertiesFactory));
}

$String* OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_URL = nullptr;
$String* OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_URL = nullptr;
$String* OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL = nullptr;
$String* OutputPropertiesFactory::S_KEY_INDENT_AMOUNT = nullptr;
$String* OutputPropertiesFactory::S_KEY_LINE_SEPARATOR = nullptr;
$String* OutputPropertiesFactory::S_KEY_CONTENT_HANDLER = nullptr;
$String* OutputPropertiesFactory::S_KEY_ENTITIES = nullptr;
$String* OutputPropertiesFactory::S_USE_URL_ESCAPING = nullptr;
$String* OutputPropertiesFactory::S_OMIT_META_TAG = nullptr;
$String* OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL = nullptr;
int32_t OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN = 0;
$StringArray* OutputPropertiesFactory::PROP_XML = nullptr;
$StringArray* OutputPropertiesFactory::PROP_XML_VALUE = nullptr;
$StringArray* OutputPropertiesFactory::PROP_HTML = nullptr;
$StringArray* OutputPropertiesFactory::PROP_HTML_VALUE = nullptr;
$StringArray* OutputPropertiesFactory::PROP_TEXT = nullptr;
$StringArray* OutputPropertiesFactory::PROP_TEXT_VALUE = nullptr;
$StringArray* OutputPropertiesFactory::PROP_UNKNOWN = nullptr;
$StringArray* OutputPropertiesFactory::PROP_UNKNOWN_VALUE = nullptr;
$Properties* OutputPropertiesFactory::m_xml_properties = nullptr;
$Properties* OutputPropertiesFactory::m_html_properties = nullptr;
$Properties* OutputPropertiesFactory::m_text_properties = nullptr;
$Properties* OutputPropertiesFactory::m_unknown_properties = nullptr;

void OutputPropertiesFactory::init$() {
}

$Properties* OutputPropertiesFactory::getDefaultMethodProperties($String* method) {
	$init(OutputPropertiesFactory);
	$useLocalCurrentObjectStackCache();
	$var($Properties, defaultProperties, nullptr);
	if (nullptr == OutputPropertiesFactory::m_xml_properties) {
		$assignStatic(OutputPropertiesFactory::m_xml_properties, initProperties(OutputPropertiesFactory::PROP_XML, OutputPropertiesFactory::PROP_XML_VALUE, nullptr));
	}
	{
		$var($String, s10707$, method);
		int32_t tmp10707$ = -1;
		switch ($nc(s10707$)->hashCode()) {
		case 0x0001D017:
			{
				if (s10707$->equals("xml"_s)) {
					tmp10707$ = 0;
				}
				break;
			}
		case 0x003107AB:
			{
				if (s10707$->equals("html"_s)) {
					tmp10707$ = 1;
				}
				break;
			}
		case 0x0036452D:
			{
				if (s10707$->equals("text"_s)) {
					tmp10707$ = 2;
				}
				break;
			}
		case 0:
			{
				if (s10707$->equals(""_s)) {
					tmp10707$ = 3;
				}
				break;
			}
		}
		switch (tmp10707$) {
		case 0:
			{
				$assign(defaultProperties, OutputPropertiesFactory::m_xml_properties);
				break;
			}
		case 1:
			{
				if (nullptr == OutputPropertiesFactory::m_html_properties) {
					$assignStatic(OutputPropertiesFactory::m_html_properties, initProperties(OutputPropertiesFactory::PROP_HTML, OutputPropertiesFactory::PROP_HTML_VALUE, OutputPropertiesFactory::m_xml_properties));
				}
				$assign(defaultProperties, OutputPropertiesFactory::m_html_properties);
				break;
			}
		case 2:
			{
				if (nullptr == OutputPropertiesFactory::m_text_properties) {
					$assignStatic(OutputPropertiesFactory::m_text_properties, initProperties(OutputPropertiesFactory::PROP_TEXT, OutputPropertiesFactory::PROP_TEXT_VALUE, OutputPropertiesFactory::m_xml_properties));
					$init($OutputKeys);
					if (nullptr == $nc(OutputPropertiesFactory::m_text_properties)->getProperty($OutputKeys::ENCODING)) {
						$var($String, mimeEncoding, $Encodings::getMimeEncoding(nullptr));
						$nc(OutputPropertiesFactory::m_text_properties)->put($OutputKeys::ENCODING, mimeEncoding);
					}
				}
				$assign(defaultProperties, OutputPropertiesFactory::m_text_properties);
				break;
			}
		case 3:
			{
				if (nullptr == OutputPropertiesFactory::m_unknown_properties) {
					$assignStatic(OutputPropertiesFactory::m_unknown_properties, initProperties(OutputPropertiesFactory::PROP_UNKNOWN, OutputPropertiesFactory::PROP_UNKNOWN_VALUE, OutputPropertiesFactory::m_xml_properties));
				}
				$assign(defaultProperties, OutputPropertiesFactory::m_unknown_properties);
				break;
			}
		default:
			{
				$assign(defaultProperties, OutputPropertiesFactory::m_xml_properties);
				break;
			}
		}
	}
	return $new($Properties, defaultProperties);
}

$Properties* OutputPropertiesFactory::initProperties($StringArray* keys, $StringArray* values, $Properties* defaults) {
	$init(OutputPropertiesFactory);
	$useLocalCurrentObjectStackCache();
	$var($Properties, props, $new($Properties, defaults));
	for (int32_t i = 0; i < $nc(keys)->length; ++i) {
		$var($String, sys, $SecuritySupport::getSystemProperty(keys->get(i)));
		props->put(keys->get(i), (sys == nullptr) ? $of($nc(values)->get(i)) : $of(sys));
	}
	return props;
}

void clinit$OutputPropertiesFactory($Class* class$) {
	$assignStatic(OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_URL, "http://xml.apache.org/xalan"_s);
	$assignStatic(OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_URL, "http://xml.apache.org/xslt"_s);
	$assignStatic(OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL, $str({"{"_s, OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_URL, "}"_s}));
	$assignStatic(OutputPropertiesFactory::S_KEY_INDENT_AMOUNT, $str({OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL, "indent-amount"_s}));
	$assignStatic(OutputPropertiesFactory::S_KEY_LINE_SEPARATOR, $str({OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL, "line-separator"_s}));
	$assignStatic(OutputPropertiesFactory::S_KEY_CONTENT_HANDLER, $str({OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL, "content-handler"_s}));
	$assignStatic(OutputPropertiesFactory::S_KEY_ENTITIES, $str({OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL, "entities"_s}));
	$assignStatic(OutputPropertiesFactory::S_USE_URL_ESCAPING, $str({OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL, "use-url-escaping"_s}));
	$assignStatic(OutputPropertiesFactory::S_OMIT_META_TAG, $str({OutputPropertiesFactory::S_BUILTIN_EXTENSIONS_UNIVERSAL, "omit-meta-tag"_s}));
	$assignStatic(OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL, $str({"{"_s, OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_URL, "}"_s}));
	OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL_LEN = $nc(OutputPropertiesFactory::S_BUILTIN_OLD_EXTENSIONS_UNIVERSAL)->length();
	$assignStatic(OutputPropertiesFactory::PROP_XML, $new($StringArray, {
		"method"_s,
		"version"_s,
		"encoding"_s,
		"indent"_s,
		"omit-xml-declaration"_s,
		"standalone"_s,
		"media-type"_s,
		"{http://xml.apache.org/xalan}indent-amount"_s,
		"{http://xml.apache.org/xalan}content-handler"_s,
		"{http://xml.apache.org/xalan}entities"_s
	}));
	$assignStatic(OutputPropertiesFactory::PROP_XML_VALUE, $new($StringArray, {
		"xml"_s,
		"1.0"_s,
		"UTF-8"_s,
		"no"_s,
		"no"_s,
		"no"_s,
		"text/xml"_s,
		"0"_s,
		"com.sun.org.apache.xml.internal.serializer.ToXMLStream"_s,
		"com/sun/org/apache/xml/internal/serializer/XMLEntities"_s
	}));
	$assignStatic(OutputPropertiesFactory::PROP_HTML, $new($StringArray, {
		"method"_s,
		"indent"_s,
		"media-type"_s,
		"version"_s,
		"{http://xml.apache.org/xalan}indent-amount"_s,
		"{http://xml.apache.org/xalan}content-handler"_s,
		"{http://xml.apache.org/xalan}entities"_s,
		"{http://xml.apache.org/xalan}use-url-escaping"_s,
		"{http://xml.apache.org/xalan}omit-meta-tag"_s
	}));
	$assignStatic(OutputPropertiesFactory::PROP_HTML_VALUE, $new($StringArray, {
		"html"_s,
		"yes"_s,
		"text/html"_s,
		"4.0"_s,
		"4"_s,
		"com.sun.org.apache.xml.internal.serializer.ToHTMLStream"_s,
		"com/sun/org/apache/xml/internal/serializer/HTMLEntities"_s,
		"yes"_s,
		"no"_s
	}));
	$assignStatic(OutputPropertiesFactory::PROP_TEXT, $new($StringArray, {
		"method"_s,
		"media-type"_s,
		"{http://xml.apache.org/xalan}content-handler"_s
	}));
	$assignStatic(OutputPropertiesFactory::PROP_TEXT_VALUE, $new($StringArray, {
		"text"_s,
		"text/plain"_s,
		"com.sun.org.apache.xml.internal.serializer.ToTextStream"_s
	}));
	$assignStatic(OutputPropertiesFactory::PROP_UNKNOWN, $new($StringArray, {
		"method"_s,
		"version"_s,
		"encoding"_s,
		"indent"_s,
		"omit-xml-declaration"_s,
		"standalone"_s,
		"media-type"_s,
		"{http://xml.apache.org/xalan}indent-amount"_s,
		"{http://xml.apache.org/xalan}content-handler"_s
	}));
	$assignStatic(OutputPropertiesFactory::PROP_UNKNOWN_VALUE, $new($StringArray, {
		"xml"_s,
		"1.0"_s,
		"UTF-8"_s,
		"no"_s,
		"no"_s,
		"no"_s,
		"text/xml"_s,
		"0"_s,
		"com.sun.org.apache.xml.internal.serializer.ToUnknownStream"_s
	}));
	$assignStatic(OutputPropertiesFactory::m_xml_properties, nullptr);
	$assignStatic(OutputPropertiesFactory::m_html_properties, nullptr);
	$assignStatic(OutputPropertiesFactory::m_text_properties, nullptr);
	$assignStatic(OutputPropertiesFactory::m_unknown_properties, nullptr);
}

OutputPropertiesFactory::OutputPropertiesFactory() {
}

$Class* OutputPropertiesFactory::load$($String* name, bool initialize) {
	$loadClass(OutputPropertiesFactory, name, initialize, &_OutputPropertiesFactory_ClassInfo_, clinit$OutputPropertiesFactory, allocate$OutputPropertiesFactory);
	return class$;
}

$Class* OutputPropertiesFactory::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com