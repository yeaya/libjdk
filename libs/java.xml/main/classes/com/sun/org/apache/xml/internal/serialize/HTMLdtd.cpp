#include <com/sun/org/apache/xml/internal/serialize/HTMLdtd.h>

#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef ALLOWED_HEAD
#undef CLOSE_DD_DT
#undef CLOSE_P
#undef CLOSE_SELF
#undef CLOSE_TABLE
#undef CLOSE_TH_TD
#undef ELEM_CONTENT
#undef EMPTY
#undef ENGLISH
#undef ENTITIES_RESOURCE
#undef ONLY_OPENING
#undef OPT_CLOSING
#undef PRESERVE
#undef SERIALIZER_DOMAIN

using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$CompoundAttribute _HTMLdtd_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _HTMLdtd_FieldInfo_[] = {
	{"HTMLPublicId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLdtd, HTMLPublicId)},
	{"HTMLSystemId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLdtd, HTMLSystemId)},
	{"XHTMLPublicId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLdtd, XHTMLPublicId)},
	{"XHTMLSystemId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(HTMLdtd, XHTMLSystemId)},
	{"_byChar", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(HTMLdtd, _byChar)},
	{"_byName", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(HTMLdtd, _byName)},
	{"_boolAttrs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HTMLdtd, _boolAttrs)},
	{"_elemDefs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(HTMLdtd, _elemDefs)},
	{"ENTITIES_RESOURCE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HTMLdtd, ENTITIES_RESOURCE)},
	{"ONLY_OPENING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, ONLY_OPENING)},
	{"ELEM_CONTENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, ELEM_CONTENT)},
	{"PRESERVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, PRESERVE)},
	{"OPT_CLOSING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, OPT_CLOSING)},
	{"EMPTY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, EMPTY)},
	{"ALLOWED_HEAD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, ALLOWED_HEAD)},
	{"CLOSE_P", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, CLOSE_P)},
	{"CLOSE_DD_DT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, CLOSE_DD_DT)},
	{"CLOSE_SELF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, CLOSE_SELF)},
	{"CLOSE_TABLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, CLOSE_TABLE)},
	{"CLOSE_TH_TD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HTMLdtd, CLOSE_TH_TD)},
	{}
};

$MethodInfo _HTMLdtd_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(HTMLdtd, init$, void)},
	{"charFromName", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, charFromName, int32_t, $String*)},
	{"defineBoolean", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(HTMLdtd, defineBoolean, void, $String*, $String*)},
	{"defineBoolean", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(HTMLdtd, defineBoolean, void, $String*, $StringArray*)},
	{"defineElement", "(Ljava/lang/String;I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(HTMLdtd, defineElement, void, $String*, int32_t)},
	{"defineEntity", "(Ljava/lang/String;C)V", nullptr, $PRIVATE | $STATIC, $staticMethod(HTMLdtd, defineEntity, void, $String*, char16_t)},
	{"fromChar", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, fromChar, $String*, int32_t)},
	{"initialize", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(HTMLdtd, initialize, void)},
	{"isBoolean", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, isBoolean, bool, $String*, $String*)},
	{"isClosing", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, isClosing, bool, $String*, $String*)},
	{"isElement", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(HTMLdtd, isElement, bool, $String*, int32_t)},
	{"isElementContent", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, isElementContent, bool, $String*)},
	{"isEmptyTag", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, isEmptyTag, bool, $String*)},
	{"isOnlyOpening", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, isOnlyOpening, bool, $String*)},
	{"isOptionalClosing", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, isOptionalClosing, bool, $String*)},
	{"isPreserveSpace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, isPreserveSpace, bool, $String*)},
	{"isURI", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(HTMLdtd, isURI, bool, $String*, $String*)},
	{}
};

$ClassInfo _HTMLdtd_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.HTMLdtd",
	"java.lang.Object",
	nullptr,
	_HTMLdtd_FieldInfo_,
	_HTMLdtd_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_HTMLdtd_Annotations_
};

$Object* allocate$HTMLdtd($Class* clazz) {
	return $of($alloc(HTMLdtd));
}

$String* HTMLdtd::HTMLPublicId = nullptr;
$String* HTMLdtd::HTMLSystemId = nullptr;
$String* HTMLdtd::XHTMLPublicId = nullptr;
$String* HTMLdtd::XHTMLSystemId = nullptr;
$Map* HTMLdtd::_byChar = nullptr;
$Map* HTMLdtd::_byName = nullptr;
$Map* HTMLdtd::_boolAttrs = nullptr;
$Map* HTMLdtd::_elemDefs = nullptr;
$String* HTMLdtd::ENTITIES_RESOURCE = nullptr;

void HTMLdtd::init$() {
}

bool HTMLdtd::isEmptyTag($String* tagName) {
	$init(HTMLdtd);
	return isElement(tagName, HTMLdtd::EMPTY);
}

bool HTMLdtd::isElementContent($String* tagName) {
	$init(HTMLdtd);
	return isElement(tagName, HTMLdtd::ELEM_CONTENT);
}

bool HTMLdtd::isPreserveSpace($String* tagName) {
	$init(HTMLdtd);
	return isElement(tagName, HTMLdtd::PRESERVE);
}

bool HTMLdtd::isOptionalClosing($String* tagName) {
	$init(HTMLdtd);
	return isElement(tagName, HTMLdtd::OPT_CLOSING);
}

bool HTMLdtd::isOnlyOpening($String* tagName) {
	$init(HTMLdtd);
	return isElement(tagName, HTMLdtd::ONLY_OPENING);
}

bool HTMLdtd::isClosing($String* tagName, $String* openTag) {
	$init(HTMLdtd);
	if ($nc(openTag)->equalsIgnoreCase("HEAD"_s)) {
		return !isElement(tagName, HTMLdtd::ALLOWED_HEAD);
	}
	if ($nc(openTag)->equalsIgnoreCase("P"_s)) {
		return isElement(tagName, HTMLdtd::CLOSE_P);
	}
	bool var$0 = $nc(openTag)->equalsIgnoreCase("DT"_s);
	if (var$0 || $nc(openTag)->equalsIgnoreCase("DD"_s)) {
		return isElement(tagName, HTMLdtd::CLOSE_DD_DT);
	}
	bool var$1 = $nc(openTag)->equalsIgnoreCase("LI"_s);
	if (var$1 || $nc(openTag)->equalsIgnoreCase("OPTION"_s)) {
		return isElement(tagName, HTMLdtd::CLOSE_SELF);
	}
	bool var$5 = $nc(openTag)->equalsIgnoreCase("THEAD"_s);
	bool var$4 = var$5 || $nc(openTag)->equalsIgnoreCase("TFOOT"_s);
	bool var$3 = var$4 || $nc(openTag)->equalsIgnoreCase("TBODY"_s);
	bool var$2 = var$3 || $nc(openTag)->equalsIgnoreCase("TR"_s);
	if (var$2 || $nc(openTag)->equalsIgnoreCase("COLGROUP"_s)) {
		return isElement(tagName, HTMLdtd::CLOSE_TABLE);
	}
	bool var$6 = $nc(openTag)->equalsIgnoreCase("TH"_s);
	if (var$6 || $nc(openTag)->equalsIgnoreCase("TD"_s)) {
		return isElement(tagName, HTMLdtd::CLOSE_TH_TD);
	}
	return false;
}

bool HTMLdtd::isURI($String* tagName, $String* attrName) {
	$init(HTMLdtd);
	bool var$0 = $nc(attrName)->equalsIgnoreCase("href"_s);
	return (var$0 || $nc(attrName)->equalsIgnoreCase("src"_s));
}

bool HTMLdtd::isBoolean($String* tagName, $String* attrName) {
	$init(HTMLdtd);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, attrNames, nullptr);
	$init($Locale);
	$assign(attrNames, $cast($StringArray, $nc(HTMLdtd::_boolAttrs)->get($($nc(tagName)->toUpperCase($Locale::ENGLISH)))));
	if (attrNames == nullptr) {
		return false;
	}
	for (int32_t i = 0; i < $nc(attrNames)->length; ++i) {
		if ($nc(attrNames->get(i))->equalsIgnoreCase(attrName)) {
			return true;
		}
	}
	return false;
}

int32_t HTMLdtd::charFromName($String* name) {
	$init(HTMLdtd);
	$var($Object, value, nullptr);
	initialize();
	$assign(value, $nc(HTMLdtd::_byName)->get(name));
	if (value != nullptr && $instanceOf($Integer, value)) {
		return $nc(($cast($Integer, value)))->intValue();
	} else {
		return -1;
	}
}

$String* HTMLdtd::fromChar(int32_t value) {
	$init(HTMLdtd);
	$useLocalCurrentObjectStackCache();
	if (value > 0x0000FFFF) {
		return nullptr;
	}
	$var($String, name, nullptr);
	initialize();
	$assign(name, $cast($String, $nc(HTMLdtd::_byChar)->get($($Integer::valueOf(value)))));
	return name;
}

void HTMLdtd::initialize() {
	$init(HTMLdtd);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($InputStream, is, nullptr);
	$var($BufferedReader, reader, nullptr);
	int32_t index = 0;
	$var($String, name, nullptr);
	$var($String, value, nullptr);
	int32_t code = 0;
	$var($String, line, nullptr);
	if (HTMLdtd::_byName != nullptr) {
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$assignStatic(HTMLdtd::_byName, $new($HashMap));
				$assignStatic(HTMLdtd::_byChar, $new($HashMap));
				$assign(is, HTMLdtd::class$->getResourceAsStream(HTMLdtd::ENTITIES_RESOURCE));
				if (is == nullptr) {
					$init($DOMMessageFormatter);
					$throwNew($RuntimeException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "ResourceNotFound"_s, $$new($ObjectArray, {$of(HTMLdtd::ENTITIES_RESOURCE)}))));
				}
				$assign(reader, $new($BufferedReader, $$new($InputStreamReader, is, "ASCII"_s)));
				$assign(line, reader->readLine());
				while (line != nullptr) {
					bool var$1 = line->length() == 0;
					if (var$1 || line->charAt(0) == u'#') {
						$assign(line, reader->readLine());
						continue;
					}
					index = line->indexOf((int32_t)u' ');
					if (index > 1) {
						$assign(name, line->substring(0, index));
						++index;
						if (index < line->length()) {
							$assign(value, line->substring(index));
							index = value->indexOf((int32_t)u' ');
							if (index > 0) {
								$assign(value, value->substring(0, index));
							}
							code = $Integer::parseInt(value);
							defineEntity(name, (char16_t)code);
						}
					}
					$assign(line, reader->readLine());
				}
				$nc(is)->close();
			} catch ($Exception& except) {
				$init($DOMMessageFormatter);
				$throwNew($RuntimeException, $($DOMMessageFormatter::formatMessage($DOMMessageFormatter::SERIALIZER_DOMAIN, "ResourceNotLoaded"_s, $$new($ObjectArray, {
					$of(HTMLdtd::ENTITIES_RESOURCE),
					$($of(except->toString()))
				}))));
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			if (is != nullptr) {
				try {
					is->close();
				} catch ($Exception& except) {
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void HTMLdtd::defineEntity($String* name, char16_t value) {
	$init(HTMLdtd);
	$useLocalCurrentObjectStackCache();
	if ($nc(HTMLdtd::_byName)->get(name) == nullptr) {
		$nc(HTMLdtd::_byName)->put(name, $($Integer::valueOf((int32_t)value)));
		$nc(HTMLdtd::_byChar)->put($($Integer::valueOf((int32_t)value)), name);
	}
}

void HTMLdtd::defineElement($String* name, int32_t flags) {
	$init(HTMLdtd);
	$nc(HTMLdtd::_elemDefs)->put(name, $($Integer::valueOf(flags)));
}

void HTMLdtd::defineBoolean($String* tagName, $String* attrName) {
	$init(HTMLdtd);
	defineBoolean(tagName, $$new($StringArray, {attrName}));
}

void HTMLdtd::defineBoolean($String* tagName, $StringArray* attrNames) {
	$init(HTMLdtd);
	$nc(HTMLdtd::_boolAttrs)->put(tagName, attrNames);
}

bool HTMLdtd::isElement($String* name, int32_t flag) {
	$init(HTMLdtd);
	$useLocalCurrentObjectStackCache();
	$var($Integer, flags, nullptr);
	$init($Locale);
	$assign(flags, $cast($Integer, $nc(HTMLdtd::_elemDefs)->get($($nc(name)->toUpperCase($Locale::ENGLISH)))));
	if (flags == nullptr) {
		return false;
	} else {
		return (((int32_t)($nc(flags)->intValue() & (uint32_t)flag)) == flag);
	}
}

void clinit$HTMLdtd($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(HTMLdtd::HTMLPublicId, "-//W3C//DTD HTML 4.01//EN"_s);
	$assignStatic(HTMLdtd::HTMLSystemId, "http://www.w3.org/TR/html4/strict.dtd"_s);
	$assignStatic(HTMLdtd::XHTMLPublicId, "-//W3C//DTD XHTML 1.0 Strict//EN"_s);
	$assignStatic(HTMLdtd::XHTMLSystemId, "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"_s);
	$assignStatic(HTMLdtd::ENTITIES_RESOURCE, "HTMLEntities.res"_s);
	{
		$assignStatic(HTMLdtd::_elemDefs, $new($HashMap));
		HTMLdtd::defineElement("ADDRESS"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("AREA"_s, HTMLdtd::EMPTY);
		HTMLdtd::defineElement("BASE"_s, HTMLdtd::EMPTY | HTMLdtd::ALLOWED_HEAD);
		HTMLdtd::defineElement("BASEFONT"_s, HTMLdtd::EMPTY);
		HTMLdtd::defineElement("BLOCKQUOTE"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("BODY"_s, HTMLdtd::OPT_CLOSING);
		HTMLdtd::defineElement("BR"_s, HTMLdtd::EMPTY);
		HTMLdtd::defineElement("COL"_s, HTMLdtd::EMPTY);
		HTMLdtd::defineElement("COLGROUP"_s, (HTMLdtd::ELEM_CONTENT | HTMLdtd::OPT_CLOSING) | HTMLdtd::CLOSE_TABLE);
		HTMLdtd::defineElement("DD"_s, (HTMLdtd::OPT_CLOSING | HTMLdtd::ONLY_OPENING) | HTMLdtd::CLOSE_DD_DT);
		HTMLdtd::defineElement("DIV"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("DL"_s, HTMLdtd::ELEM_CONTENT | HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("DT"_s, (HTMLdtd::OPT_CLOSING | HTMLdtd::ONLY_OPENING) | HTMLdtd::CLOSE_DD_DT);
		HTMLdtd::defineElement("FIELDSET"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("FORM"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("FRAME"_s, HTMLdtd::EMPTY | HTMLdtd::OPT_CLOSING);
		HTMLdtd::defineElement("H1"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("H2"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("H3"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("H4"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("H5"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("H6"_s, HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("HEAD"_s, HTMLdtd::ELEM_CONTENT | HTMLdtd::OPT_CLOSING);
		HTMLdtd::defineElement("HR"_s, HTMLdtd::EMPTY | HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("HTML"_s, HTMLdtd::ELEM_CONTENT | HTMLdtd::OPT_CLOSING);
		HTMLdtd::defineElement("IMG"_s, HTMLdtd::EMPTY);
		HTMLdtd::defineElement("INPUT"_s, HTMLdtd::EMPTY);
		HTMLdtd::defineElement("ISINDEX"_s, HTMLdtd::EMPTY | HTMLdtd::ALLOWED_HEAD);
		HTMLdtd::defineElement("LI"_s, (HTMLdtd::OPT_CLOSING | HTMLdtd::ONLY_OPENING) | HTMLdtd::CLOSE_SELF);
		HTMLdtd::defineElement("LINK"_s, HTMLdtd::EMPTY | HTMLdtd::ALLOWED_HEAD);
		HTMLdtd::defineElement("MAP"_s, HTMLdtd::ALLOWED_HEAD);
		HTMLdtd::defineElement("META"_s, HTMLdtd::EMPTY | HTMLdtd::ALLOWED_HEAD);
		HTMLdtd::defineElement("OL"_s, HTMLdtd::ELEM_CONTENT | HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("OPTGROUP"_s, HTMLdtd::ELEM_CONTENT);
		HTMLdtd::defineElement("OPTION"_s, (HTMLdtd::OPT_CLOSING | HTMLdtd::ONLY_OPENING) | HTMLdtd::CLOSE_SELF);
		HTMLdtd::defineElement("P"_s, (HTMLdtd::OPT_CLOSING | HTMLdtd::CLOSE_P) | HTMLdtd::CLOSE_SELF);
		HTMLdtd::defineElement("PARAM"_s, HTMLdtd::EMPTY);
		HTMLdtd::defineElement("PRE"_s, HTMLdtd::PRESERVE | HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("SCRIPT"_s, HTMLdtd::ALLOWED_HEAD | HTMLdtd::PRESERVE);
		HTMLdtd::defineElement("NOSCRIPT"_s, HTMLdtd::ALLOWED_HEAD | HTMLdtd::PRESERVE);
		HTMLdtd::defineElement("SELECT"_s, HTMLdtd::ELEM_CONTENT);
		HTMLdtd::defineElement("STYLE"_s, HTMLdtd::ALLOWED_HEAD | HTMLdtd::PRESERVE);
		HTMLdtd::defineElement("TABLE"_s, HTMLdtd::ELEM_CONTENT | HTMLdtd::CLOSE_P);
		HTMLdtd::defineElement("TBODY"_s, (HTMLdtd::ELEM_CONTENT | HTMLdtd::OPT_CLOSING) | HTMLdtd::CLOSE_TABLE);
		HTMLdtd::defineElement("TD"_s, HTMLdtd::OPT_CLOSING | HTMLdtd::CLOSE_TH_TD);
		HTMLdtd::defineElement("TEXTAREA"_s, HTMLdtd::PRESERVE);
		HTMLdtd::defineElement("TFOOT"_s, (HTMLdtd::ELEM_CONTENT | HTMLdtd::OPT_CLOSING) | HTMLdtd::CLOSE_TABLE);
		HTMLdtd::defineElement("TH"_s, HTMLdtd::OPT_CLOSING | HTMLdtd::CLOSE_TH_TD);
		HTMLdtd::defineElement("THEAD"_s, (HTMLdtd::ELEM_CONTENT | HTMLdtd::OPT_CLOSING) | HTMLdtd::CLOSE_TABLE);
		HTMLdtd::defineElement("TITLE"_s, HTMLdtd::ALLOWED_HEAD);
		HTMLdtd::defineElement("TR"_s, (HTMLdtd::ELEM_CONTENT | HTMLdtd::OPT_CLOSING) | HTMLdtd::CLOSE_TABLE);
		HTMLdtd::defineElement("UL"_s, HTMLdtd::ELEM_CONTENT | HTMLdtd::CLOSE_P);
		$assignStatic(HTMLdtd::_boolAttrs, $new($HashMap));
		HTMLdtd::defineBoolean("AREA"_s, "href"_s);
		HTMLdtd::defineBoolean("BUTTON"_s, "disabled"_s);
		HTMLdtd::defineBoolean("DIR"_s, "compact"_s);
		HTMLdtd::defineBoolean("DL"_s, "compact"_s);
		HTMLdtd::defineBoolean("FRAME"_s, "noresize"_s);
		HTMLdtd::defineBoolean("HR"_s, "noshade"_s);
		HTMLdtd::defineBoolean("IMAGE"_s, "ismap"_s);
		HTMLdtd::defineBoolean("INPUT"_s, $$new($StringArray, {
			"defaultchecked"_s,
			"checked"_s,
			"readonly"_s,
			"disabled"_s
		}));
		HTMLdtd::defineBoolean("LINK"_s, "link"_s);
		HTMLdtd::defineBoolean("MENU"_s, "compact"_s);
		HTMLdtd::defineBoolean("OBJECT"_s, "declare"_s);
		HTMLdtd::defineBoolean("OL"_s, "compact"_s);
		HTMLdtd::defineBoolean("OPTGROUP"_s, "disabled"_s);
		HTMLdtd::defineBoolean("OPTION"_s, $$new($StringArray, {
			"default-selected"_s,
			"selected"_s,
			"disabled"_s
		}));
		HTMLdtd::defineBoolean("SCRIPT"_s, "defer"_s);
		HTMLdtd::defineBoolean("SELECT"_s, $$new($StringArray, {
			"multiple"_s,
			"disabled"_s
		}));
		HTMLdtd::defineBoolean("STYLE"_s, "disabled"_s);
		HTMLdtd::defineBoolean("TD"_s, "nowrap"_s);
		HTMLdtd::defineBoolean("TH"_s, "nowrap"_s);
		HTMLdtd::defineBoolean("TEXTAREA"_s, $$new($StringArray, {
			"disabled"_s,
			"readonly"_s
		}));
		HTMLdtd::defineBoolean("UL"_s, "compact"_s);
		HTMLdtd::initialize();
	}
}

HTMLdtd::HTMLdtd() {
}

$Class* HTMLdtd::load$($String* name, bool initialize) {
	$loadClass(HTMLdtd, name, initialize, &_HTMLdtd_ClassInfo_, clinit$HTMLdtd, allocate$HTMLdtd);
	return class$;
}

$Class* HTMLdtd::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com