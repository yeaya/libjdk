#include <com/sun/org/apache/xalan/internal/lib/ExsltStrings.h>

#include <com/sun/org/apache/xalan/internal/lib/ExsltBase.h>
#include <com/sun/org/apache/xpath/internal/NodeSet.h>
#include <java/lang/StringBuffer.h>
#include <java/util/StringTokenizer.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

using $ExsltBase = ::com::sun::org::apache::xalan::internal::lib::ExsltBase;
using $NodeSet = ::com::sun::org::apache::xpath::internal::NodeSet;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringTokenizer = ::java::util::StringTokenizer;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Text = ::org::w3c::dom::Text;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

$MethodInfo _ExsltStrings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExsltStrings, init$, void)},
	{"align", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltStrings, align, $String*, $String*, $String*, $String*)},
	{"align", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltStrings, align, $String*, $String*, $String*)},
	{"concat", "(Lorg/w3c/dom/NodeList;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltStrings, concat, $String*, $NodeList*)},
	{"padding", "(DLjava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltStrings, padding, $String*, double, $String*)},
	{"padding", "(D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltStrings, padding, $String*, double)},
	{"split", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltStrings, split, $NodeList*, $String*, $String*)},
	{"split", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltStrings, split, $NodeList*, $String*)},
	{"tokenize", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltStrings, tokenize, $NodeList*, $String*, $String*)},
	{"tokenize", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltStrings, tokenize, $NodeList*, $String*)},
	{}
};

$ClassInfo _ExsltStrings_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.lib.ExsltStrings",
	"com.sun.org.apache.xalan.internal.lib.ExsltBase",
	nullptr,
	nullptr,
	_ExsltStrings_MethodInfo_
};

$Object* allocate$ExsltStrings($Class* clazz) {
	return $of($alloc(ExsltStrings));
}

void ExsltStrings::init$() {
	$ExsltBase::init$();
}

$String* ExsltStrings::align($String* targetStr, $String* paddingStr, $String* type) {
	$init(ExsltStrings);
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(targetStr)->length();
	if (var$0 >= $nc(paddingStr)->length()) {
		return targetStr->substring(0, paddingStr->length());
	}
	if ($nc(type)->equals("right"_s)) {
		int32_t var$2 = paddingStr->length();
		$var($String, var$1, $($nc(paddingStr)->substring(0, var$2 - $nc(targetStr)->length())));
		return $concat(var$1, targetStr);
	} else if (type->equals("center"_s)) {
		int32_t var$3 = $nc(paddingStr)->length();
		int32_t startIndex = (var$3 - $nc(targetStr)->length()) / 2;
		$var($String, var$4, $$str({$(paddingStr->substring(0, startIndex)), targetStr}));
		return $concat(var$4, $(paddingStr->substring(startIndex + targetStr->length())));
	} else {
		return $str({targetStr, $($nc(paddingStr)->substring($nc(targetStr)->length()))});
	}
}

$String* ExsltStrings::align($String* targetStr, $String* paddingStr) {
	$init(ExsltStrings);
	return align(targetStr, paddingStr, "left"_s);
}

$String* ExsltStrings::concat($NodeList* nl) {
	$init(ExsltStrings);
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer));
	for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
		$var($Node, node, nl->item(i));
		$var($String, value, toString(node));
		if (value != nullptr && value->length() > 0) {
			sb->append(value);
		}
	}
	return sb->toString();
}

$String* ExsltStrings::padding(double length, $String* pattern) {
	$init(ExsltStrings);
	if (pattern == nullptr || $nc(pattern)->length() == 0) {
		return ""_s;
	}
	$var($StringBuffer, sb, $new($StringBuffer));
	int32_t len = $cast(int32_t, length);
	int32_t numAdded = 0;
	int32_t index = 0;
	while (numAdded < len) {
		if (index == $nc(pattern)->length()) {
			index = 0;
		}
		sb->append($nc(pattern)->charAt(index));
		++index;
		++numAdded;
	}
	return sb->toString();
}

$String* ExsltStrings::padding(double length) {
	$init(ExsltStrings);
	return padding(length, " "_s);
}

$NodeList* ExsltStrings::split($String* str, $String* pattern) {
	$init(ExsltStrings);
	$useLocalCurrentObjectStackCache();
	$var($NodeSet, resultSet, $new($NodeSet));
	resultSet->setShouldCacheNodes(true);
	bool done = false;
	int32_t fromIndex = 0;
	int32_t matchIndex = 0;
	$var($String, token, nullptr);
	while (!done && fromIndex < $nc(str)->length()) {
		matchIndex = str->indexOf(pattern, fromIndex);
		if (matchIndex >= 0) {
			$assign(token, str->substring(fromIndex, matchIndex));
			fromIndex = matchIndex + $nc(pattern)->length();
		} else {
			done = true;
			$assign(token, str->substring(fromIndex));
		}
		$var($Document, doc, $JdkXmlUtils::getDOMDocument());
		$synchronized(doc) {
			$var($Element, element, $nc(doc)->createElement("token"_s));
			$var($Text, text, doc->createTextNode(token));
			$nc(element)->appendChild(text);
			resultSet->addNode(element);
		}
	}
	return resultSet;
}

$NodeList* ExsltStrings::split($String* str) {
	$init(ExsltStrings);
	return split(str, " "_s);
}

$NodeList* ExsltStrings::tokenize($String* toTokenize, $String* delims) {
	$init(ExsltStrings);
	$useLocalCurrentObjectStackCache();
	$var($NodeSet, resultSet, $new($NodeSet));
	if (delims != nullptr && delims->length() > 0) {
		$var($StringTokenizer, lTokenizer, $new($StringTokenizer, toTokenize, delims));
		$var($Document, doc, $JdkXmlUtils::getDOMDocument());
		$synchronized(doc) {
			while (lTokenizer->hasMoreTokens()) {
				$var($Element, element, $nc(doc)->createElement("token"_s));
				$nc(element)->appendChild($(doc->createTextNode($(lTokenizer->nextToken()))));
				resultSet->addNode(element);
			}
		}
	} else {
		$var($Document, doc, $JdkXmlUtils::getDOMDocument());
		$synchronized(doc) {
			for (int32_t i = 0; i < $nc(toTokenize)->length(); ++i) {
				$var($Element, element, $nc(doc)->createElement("token"_s));
				$nc(element)->appendChild($(doc->createTextNode($(toTokenize->substring(i, i + 1)))));
				resultSet->addNode(element);
			}
		}
	}
	return resultSet;
}

$NodeList* ExsltStrings::tokenize($String* toTokenize) {
	$init(ExsltStrings);
	return tokenize(toTokenize, " \t\n\r"_s);
}

ExsltStrings::ExsltStrings() {
}

$Class* ExsltStrings::load$($String* name, bool initialize) {
	$loadClass(ExsltStrings, name, initialize, &_ExsltStrings_ClassInfo_, allocate$ExsltStrings);
	return class$;
}

$Class* ExsltStrings::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com