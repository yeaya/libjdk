#include <com/sun/org/apache/xml/internal/serializer/CharInfo.h>

#include <com/sun/org/apache/xml/internal/serializer/CharInfo$CharKey.h>
#include <com/sun/org/apache/xml/internal/serializer/Method.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/SystemIDResolver.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/WrappedRuntimeException.h>
#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/ClassLoader.h>
#include <java/net/URL.h>
#include <java/util/AbstractMap.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/PropertyResourceBundle.h>
#include <java/util/ResourceBundle.h>
#include <javax/xml/transform/TransformerException.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ASCII_MAX
#undef ER_RESOURCE_COULD_NOT_FIND
#undef ER_RESOURCE_COULD_NOT_LOAD
#undef HTML_ENTITIES_RESOURCE
#undef LOW_ORDER_BITMASK
#undef SHIFT_PER_WORD
#undef S_CARRIAGERETURN
#undef S_HORIZONAL_TAB
#undef S_LINEFEED
#undef XML
#undef XML_ENTITIES_RESOURCE

using $CharInfo$CharKey = ::com::sun::org::apache::xml::internal::serializer::CharInfo$CharKey;
using $Method = ::com::sun::org::apache::xml::internal::serializer::Method;
using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::serializer::utils::SystemIDResolver;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::serializer::utils::WrappedRuntimeException;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $AbstractMap = ::java::util::AbstractMap;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $PropertyResourceBundle = ::java::util::PropertyResourceBundle;
using $ResourceBundle = ::java::util::ResourceBundle;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _CharInfo_FieldInfo_[] = {
	{"m_charToString", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xml/internal/serializer/CharInfo$CharKey;Ljava/lang/String;>;", $PRIVATE, $field(CharInfo, m_charToString)},
	{"HTML_ENTITIES_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CharInfo, HTML_ENTITIES_RESOURCE)},
	{"XML_ENTITIES_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CharInfo, XML_ENTITIES_RESOURCE)},
	{"S_HORIZONAL_TAB", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharInfo, S_HORIZONAL_TAB)},
	{"S_LINEFEED", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharInfo, S_LINEFEED)},
	{"S_CARRIAGERETURN", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharInfo, S_CARRIAGERETURN)},
	{"onlyQuotAmpLtGt", "Z", nullptr, $FINAL, $field(CharInfo, onlyQuotAmpLtGt)},
	{"ASCII_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharInfo, ASCII_MAX)},
	{"isSpecialAttrASCII", "[Z", nullptr, $PRIVATE, $field(CharInfo, isSpecialAttrASCII)},
	{"isSpecialTextASCII", "[Z", nullptr, $PRIVATE, $field(CharInfo, isSpecialTextASCII)},
	{"isCleanTextASCII", "[Z", nullptr, $PRIVATE, $field(CharInfo, isCleanTextASCII)},
	{"array_of_bits", "[I", nullptr, $PRIVATE, $field(CharInfo, array_of_bits)},
	{"SHIFT_PER_WORD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharInfo, SHIFT_PER_WORD)},
	{"LOW_ORDER_BITMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CharInfo, LOW_ORDER_BITMASK)},
	{"firstWordNotUsed", "I", nullptr, $PRIVATE, $field(CharInfo, firstWordNotUsed)},
	{"m_getCharInfoCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serializer/CharInfo;>;", $PRIVATE | $STATIC, $staticField(CharInfo, m_getCharInfoCache)},
	{}
};

$MethodInfo _CharInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(CharInfo, init$, void, $String*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(CharInfo, init$, void, $String*, $String*, bool)},
	{"arrayIndex", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(CharInfo, arrayIndex, int32_t, int32_t)},
	{"bit", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(CharInfo, bit, int32_t, int32_t)},
	{"createEmptySetOfIntegers", "(I)[I", nullptr, $PRIVATE, $method(CharInfo, createEmptySetOfIntegers, $ints*, int32_t)},
	{"defineChar2StringMapping", "(Ljava/lang/String;C)V", nullptr, $PRIVATE, $method(CharInfo, defineChar2StringMapping, void, $String*, char16_t)},
	{"defineEntity", "(Ljava/lang/String;C)V", nullptr, $PRIVATE, $method(CharInfo, defineEntity, void, $String*, char16_t)},
	{"extraEntity", "(I)Z", nullptr, $PRIVATE, $method(CharInfo, extraEntity, bool, int32_t)},
	{"get", "(I)Z", nullptr, $PRIVATE | $FINAL, $method(CharInfo, get, bool, int32_t)},
	{"getCharInfo", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/CharInfo;", nullptr, $STATIC, $staticMethod(CharInfo, getCharInfo, CharInfo*, $String*, $String*)},
	{"getCharInfoInternal", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/CharInfo;", nullptr, $STATIC, $staticMethod(CharInfo, getCharInfoInternal, CharInfo*, $String*, $String*)},
	{"getOutputStringForChar", "(C)Ljava/lang/String;", nullptr, 0, $method(CharInfo, getOutputStringForChar, $String*, char16_t)},
	{"isSpecialAttrChar", "(I)Z", nullptr, $FINAL, $method(CharInfo, isSpecialAttrChar, bool, int32_t)},
	{"isSpecialTextChar", "(I)Z", nullptr, $FINAL, $method(CharInfo, isSpecialTextChar, bool, int32_t)},
	{"isTextASCIIClean", "(I)Z", nullptr, $FINAL, $method(CharInfo, isTextASCIIClean, bool, int32_t)},
	{"set", "(I)V", nullptr, $PRIVATE | $FINAL, $method(CharInfo, set, void, int32_t)},
	{"setASCIIclean", "(I)V", nullptr, $PRIVATE, $method(CharInfo, setASCIIclean, void, int32_t)},
	{"setASCIIdirty", "(I)V", nullptr, $PRIVATE, $method(CharInfo, setASCIIdirty, void, int32_t)},
	{}
};

$InnerClassInfo _CharInfo_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.serializer.CharInfo$CharKey", "com.sun.org.apache.xml.internal.serializer.CharInfo", "CharKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CharInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.CharInfo",
	"java.lang.Object",
	nullptr,
	_CharInfo_FieldInfo_,
	_CharInfo_MethodInfo_,
	nullptr,
	nullptr,
	_CharInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.serializer.CharInfo$CharKey"
};

$Object* allocate$CharInfo($Class* clazz) {
	return $of($alloc(CharInfo));
}

$String* CharInfo::HTML_ENTITIES_RESOURCE = nullptr;
$String* CharInfo::XML_ENTITIES_RESOURCE = nullptr;
$Map* CharInfo::m_getCharInfoCache = nullptr;

void CharInfo::init$($String* entitiesResource, $String* method) {
	CharInfo::init$(entitiesResource, method, false);
}

void CharInfo::init$($String* entitiesResource, $String* method, bool internal) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, m_charToString, $new($HashMap));
	$set(this, isSpecialAttrASCII, $new($booleans, CharInfo::ASCII_MAX));
	$set(this, isSpecialTextASCII, $new($booleans, CharInfo::ASCII_MAX));
	$set(this, isCleanTextASCII, $new($booleans, CharInfo::ASCII_MAX));
	$set(this, array_of_bits, createEmptySetOfIntegers(0x0000FFFF));
	$var($ResourceBundle, entities, nullptr);
	bool noExtraEntities = true;
	try {
		if (internal) {
			$assign(entities, $PropertyResourceBundle::getBundle(entitiesResource));
		} else {
			$var($ClassLoader, cl, $SecuritySupport::getContextClassLoader());
			if (cl != nullptr) {
				$assign(entities, $PropertyResourceBundle::getBundle(entitiesResource, $($Locale::getDefault()), cl));
			}
		}
	} catch ($Exception& e) {
	}
	if (entities != nullptr) {
		$var($Enumeration, keys, entities->getKeys());
		while ($nc(keys)->hasMoreElements()) {
			$var($String, name, $cast($String, keys->nextElement()));
			$var($String, value, entities->getString(name));
			int32_t code = $Integer::parseInt(value);
			defineEntity(name, (char16_t)code);
			if (extraEntity(code)) {
				noExtraEntities = false;
			}
		}
		set(CharInfo::S_LINEFEED);
		set(CharInfo::S_CARRIAGERETURN);
	} else {
		$var($InputStream, is, nullptr);
		$var($String, err, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					if (internal) {
						$assign(is, CharInfo::class$->getResourceAsStream(entitiesResource));
					} else {
						$var($ClassLoader, cl, $SecuritySupport::getContextClassLoader());
						if (cl != nullptr) {
							try {
								$assign(is, cl->getResourceAsStream(entitiesResource));
							} catch ($Exception& e) {
								$assign(err, e->getMessage());
							}
						}
						if (is == nullptr) {
							try {
								$var($URL, url, $new($URL, entitiesResource));
								$assign(is, url->openStream());
							} catch ($Exception& e) {
								$assign(err, e->getMessage());
							}
						}
					}
					if (is == nullptr) {
						$init($Utils);
						$init($MsgKey);
						$throwNew($RuntimeException, $($nc($Utils::messages)->createMessage($MsgKey::ER_RESOURCE_COULD_NOT_FIND, $$new($ObjectArray, {
							$of(entitiesResource),
							$of(err)
						}))));
					}
					$var($BufferedReader, reader, nullptr);
					try {
						$assign(reader, $new($BufferedReader, $$new($InputStreamReader, is, "UTF-8"_s)));
					} catch ($UnsupportedEncodingException& e) {
						$assign(reader, $new($BufferedReader, $$new($InputStreamReader, is)));
					}
					$var($String, line, $nc(reader)->readLine());
					while (line != nullptr) {
						bool var$1 = line->length() == 0;
						if (var$1 || line->charAt(0) == u'#') {
							$assign(line, reader->readLine());
							continue;
						}
						int32_t index = line->indexOf((int32_t)u' ');
						if (index > 1) {
							$var($String, name, line->substring(0, index));
							++index;
							if (index < line->length()) {
								$var($String, value, line->substring(index));
								index = value->indexOf((int32_t)u' ');
								if (index > 0) {
									$assign(value, value->substring(0, index));
								}
								int32_t code = $Integer::parseInt(value);
								defineEntity(name, (char16_t)code);
								if (extraEntity(code)) {
									noExtraEntities = false;
								}
							}
						}
						$assign(line, reader->readLine());
					}
					$nc(is)->close();
					set(CharInfo::S_LINEFEED);
					set(CharInfo::S_CARRIAGERETURN);
				} catch ($Exception& e) {
					$init($Utils);
					$init($MsgKey);
					$throwNew($RuntimeException, $($nc($Utils::messages)->createMessage($MsgKey::ER_RESOURCE_COULD_NOT_LOAD, $$new($ObjectArray, {
						$of(entitiesResource),
						$($of(e->toString())),
						$of(entitiesResource),
						$($of(e->toString()))
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
	for (int32_t ch = 0; ch < CharInfo::ASCII_MAX; ++ch) {
		if (((32 <= ch || (10 == ch || 13 == ch || 9 == ch)) && (!get(ch))) || (u'\"' == ch)) {
			$nc(this->isCleanTextASCII)->set(ch, true);
			$nc(this->isSpecialTextASCII)->set(ch, false);
		} else {
			$nc(this->isCleanTextASCII)->set(ch, false);
			$nc(this->isSpecialTextASCII)->set(ch, true);
		}
	}
	this->onlyQuotAmpLtGt = noExtraEntities;
	for (int32_t i = 0; i < CharInfo::ASCII_MAX; ++i) {
		$nc(this->isSpecialAttrASCII)->set(i, get(i));
	}
	$init($Method);
	if ($nc($Method::XML)->equals(method)) {
		$nc(this->isSpecialAttrASCII)->set(CharInfo::S_HORIZONAL_TAB, true);
	}
}

void CharInfo::defineEntity($String* name, char16_t value) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "&"_s));
	sb->append(name);
	sb->append(u';');
	$var($String, entityString, sb->toString());
	defineChar2StringMapping(entityString, value);
}

$String* CharInfo::getOutputStringForChar(char16_t value) {
	$var($CharInfo$CharKey, charKey, $new($CharInfo$CharKey));
	charKey->setChar(value);
	return $cast($String, $nc(this->m_charToString)->get(charKey));
}

bool CharInfo::isSpecialAttrChar(int32_t value) {
	if (value < CharInfo::ASCII_MAX) {
		return $nc(this->isSpecialAttrASCII)->get(value);
	}
	return get(value);
}

bool CharInfo::isSpecialTextChar(int32_t value) {
	if (value < CharInfo::ASCII_MAX) {
		return $nc(this->isSpecialTextASCII)->get(value);
	}
	return get(value);
}

bool CharInfo::isTextASCIIClean(int32_t value) {
	return $nc(this->isCleanTextASCII)->get(value);
}

CharInfo* CharInfo::getCharInfoInternal($String* entitiesFileName, $String* method) {
	$init(CharInfo);
	$var(CharInfo, charInfo, $cast(CharInfo, $nc(CharInfo::m_getCharInfoCache)->get(entitiesFileName)));
	if (charInfo != nullptr) {
		return charInfo;
	}
	$assign(charInfo, $new(CharInfo, entitiesFileName, method, true));
	$nc(CharInfo::m_getCharInfoCache)->put(entitiesFileName, charInfo);
	return charInfo;
}

CharInfo* CharInfo::getCharInfo($String* entitiesFileName, $String* method) {
	$init(CharInfo);
	try {
		return $new(CharInfo, entitiesFileName, method, false);
	} catch ($Exception& e) {
	}
	$var($String, absoluteEntitiesFileName, nullptr);
	if ($nc(entitiesFileName)->indexOf((int32_t)u':') < 0) {
		$assign(absoluteEntitiesFileName, $SystemIDResolver::getAbsoluteURIFromRelative(entitiesFileName));
	} else {
		try {
			$assign(absoluteEntitiesFileName, $SystemIDResolver::getAbsoluteURI(entitiesFileName, nullptr));
		} catch ($TransformerException& te) {
			$throwNew($WrappedRuntimeException, te);
		}
	}
	return $new(CharInfo, absoluteEntitiesFileName, method, false);
}

int32_t CharInfo::arrayIndex(int32_t i) {
	$init(CharInfo);
	return ($sr(i, CharInfo::SHIFT_PER_WORD));
}

int32_t CharInfo::bit(int32_t i) {
	$init(CharInfo);
	int32_t ret = ($sl(1, (int32_t)(i & (uint32_t)CharInfo::LOW_ORDER_BITMASK)));
	return ret;
}

$ints* CharInfo::createEmptySetOfIntegers(int32_t max) {
	this->firstWordNotUsed = 0;
	$var($ints, arr, $new($ints, arrayIndex(max - 1) + 1));
	return arr;
}

void CharInfo::set(int32_t i) {
	setASCIIdirty(i);
	int32_t j = ($sr(i, CharInfo::SHIFT_PER_WORD));
	int32_t k = j + 1;
	if (this->firstWordNotUsed < k) {
		this->firstWordNotUsed = k;
	}
	(*$nc(this->array_of_bits))[j] |= ($sl(1, (int32_t)(i & (uint32_t)CharInfo::LOW_ORDER_BITMASK)));
}

bool CharInfo::get(int32_t i) {
	bool in_the_set = false;
	int32_t j = ($sr(i, CharInfo::SHIFT_PER_WORD));
	if (j < this->firstWordNotUsed) {
		in_the_set = ((int32_t)($nc(this->array_of_bits)->get(j) & (uint32_t)($sl(1, (int32_t)(i & (uint32_t)CharInfo::LOW_ORDER_BITMASK))))) != 0;
	}
	return in_the_set;
}

bool CharInfo::extraEntity(int32_t entityValue) {
	bool extra = false;
	if (entityValue < 128) {
		switch (entityValue) {
		case 34:
			{}
		case 38:
			{}
		case 60:
			{}
		case 62:
			{
				break;
			}
		default:
			{
				extra = true;
			}
		}
	}
	return extra;
}

void CharInfo::setASCIIdirty(int32_t j) {
	if (0 <= j && j < CharInfo::ASCII_MAX) {
		$nc(this->isCleanTextASCII)->set(j, false);
		$nc(this->isSpecialTextASCII)->set(j, true);
	}
}

void CharInfo::setASCIIclean(int32_t j) {
	if (0 <= j && j < CharInfo::ASCII_MAX) {
		$nc(this->isCleanTextASCII)->set(j, true);
		$nc(this->isSpecialTextASCII)->set(j, false);
	}
}

void CharInfo::defineChar2StringMapping($String* outputString, char16_t inputChar) {
	$var($CharInfo$CharKey, character, $new($CharInfo$CharKey, inputChar));
	$nc(this->m_charToString)->put(character, outputString);
	set(inputChar);
}

void clinit$CharInfo($Class* class$) {
	$assignStatic(CharInfo::HTML_ENTITIES_RESOURCE, "com.sun.org.apache.xml.internal.serializer.HTMLEntities"_s);
	$assignStatic(CharInfo::XML_ENTITIES_RESOURCE, "com.sun.org.apache.xml.internal.serializer.XMLEntities"_s);
	$assignStatic(CharInfo::m_getCharInfoCache, $new($HashMap));
}

CharInfo::CharInfo() {
}

$Class* CharInfo::load$($String* name, bool initialize) {
	$loadClass(CharInfo, name, initialize, &_CharInfo_ClassInfo_, clinit$CharInfo, allocate$CharInfo);
	return class$;
}

$Class* CharInfo::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com