#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef END
#undef FIRST_TYPE
#undef MAX_VALUE
#undef MIN_VALUE

using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _NodeCounter_FieldInfo_[] = {
	{"END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeCounter, END)},
	{"_node", "I", nullptr, $PROTECTED, $field(NodeCounter, _node)},
	{"_nodeType", "I", nullptr, $PROTECTED, $field(NodeCounter, _nodeType)},
	{"_value", "D", nullptr, $PROTECTED, $field(NodeCounter, _value)},
	{"_document", "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PUBLIC | $FINAL, $field(NodeCounter, _document)},
	{"_iterator", "Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC | $FINAL, $field(NodeCounter, _iterator)},
	{"_translet", "Lcom/sun/org/apache/xalan/internal/xsltc/Translet;", nullptr, $PUBLIC | $FINAL, $field(NodeCounter, _translet)},
	{"_format", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NodeCounter, _format)},
	{"_lang", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NodeCounter, _lang)},
	{"_letterValue", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NodeCounter, _letterValue)},
	{"_groupSep", "Ljava/lang/String;", nullptr, $PROTECTED, $field(NodeCounter, _groupSep)},
	{"_groupSize", "I", nullptr, $PROTECTED, $field(NodeCounter, _groupSize)},
	{"_separFirst", "Z", nullptr, $PRIVATE, $field(NodeCounter, _separFirst)},
	{"_separLast", "Z", nullptr, $PRIVATE, $field(NodeCounter, _separLast)},
	{"_separToks", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(NodeCounter, _separToks)},
	{"_formatToks", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(NodeCounter, _formatToks)},
	{"_nSepars", "I", nullptr, $PRIVATE, $field(NodeCounter, _nSepars)},
	{"_nFormats", "I", nullptr, $PRIVATE, $field(NodeCounter, _nFormats)},
	{"Thousands", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NodeCounter, Thousands)},
	{"Hundreds", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NodeCounter, Hundreds)},
	{"Tens", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NodeCounter, Tens)},
	{"Ones", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NodeCounter, Ones)},
	{"_tempBuffer", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(NodeCounter, _tempBuffer)},
	{"_hasFrom", "Z", nullptr, $PROTECTED, $field(NodeCounter, _hasFrom)},
	{}
};

$MethodInfo _NodeCounter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;)V", nullptr, $PROTECTED, $method(NodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*)},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/Translet;Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;Z)V", nullptr, $PROTECTED, $method(NodeCounter, init$, void, $Translet*, $DOM*, $DTMAxisIterator*, bool)},
	{"alphaValue", "(III)Ljava/lang/String;", nullptr, $PRIVATE, $method(NodeCounter, alphaValue, $String*, int32_t, int32_t, int32_t)},
	{"formatNumbers", "(I)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(NodeCounter, formatNumbers, $String*, int32_t)},
	{"formatNumbers", "([I)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(NodeCounter, formatNumbers, $String*, $ints*)},
	{"formatValue", "(ILjava/lang/String;Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE, $method(NodeCounter, formatValue, void, int32_t, $String*, $StringBuilder*)},
	{"getCounter", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeCounter, getCounter, $String*)},
	{"getCounter", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeCounter, getCounter, $String*, $String*, $String*, $String*, $String*, $String*)},
	{"matchesCount", "(I)Z", nullptr, $PUBLIC, $virtualMethod(NodeCounter, matchesCount, bool, int32_t)},
	{"matchesFrom", "(I)Z", nullptr, $PUBLIC, $virtualMethod(NodeCounter, matchesFrom, bool, int32_t)},
	{"parseStringToAnInt", "(Ljava/lang/String;)I", nullptr, $PRIVATE, $method(NodeCounter, parseStringToAnInt, int32_t, $String*)},
	{"romanValue", "(I)Ljava/lang/String;", nullptr, $PRIVATE, $method(NodeCounter, romanValue, $String*, int32_t)},
	{"setDefaultFormatting", "()Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC, $virtualMethod(NodeCounter, setDefaultFormatting, NodeCounter*)},
	{"setFormatting", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(NodeCounter, setFormatting, void, $String*, $String*, $String*, $String*, $String*)},
	{"setStartNode", "(I)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeCounter, setStartNode, NodeCounter*, int32_t)},
	{"setTokens", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $FINAL, $method(NodeCounter, setTokens, void, $String*)},
	{"setValue", "(D)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter;", nullptr, $PUBLIC, $virtualMethod(NodeCounter, setValue, NodeCounter*, double)},
	{}
};

$ClassInfo _NodeCounter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.NodeCounter",
	"java.lang.Object",
	nullptr,
	_NodeCounter_FieldInfo_,
	_NodeCounter_MethodInfo_
};

$Object* allocate$NodeCounter($Class* clazz) {
	return $of($alloc(NodeCounter));
}

$StringArray* NodeCounter::Thousands = nullptr;
$StringArray* NodeCounter::Hundreds = nullptr;
$StringArray* NodeCounter::Tens = nullptr;
$StringArray* NodeCounter::Ones = nullptr;

void NodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator) {
	this->_node = NodeCounter::END;
	this->_nodeType = $DOM::FIRST_TYPE - 1;
	this->_value = (double)$Integer::MIN_VALUE;
	this->_separFirst = true;
	this->_separLast = false;
	$set(this, _separToks, $new($ArrayList));
	$set(this, _formatToks, $new($ArrayList));
	this->_nSepars = 0;
	this->_nFormats = 0;
	$set(this, _tempBuffer, $new($StringBuilder));
	$set(this, _translet, translet);
	$set(this, _document, document);
	$set(this, _iterator, iterator);
}

void NodeCounter::init$($Translet* translet, $DOM* document, $DTMAxisIterator* iterator, bool hasFrom) {
	this->_node = NodeCounter::END;
	this->_nodeType = $DOM::FIRST_TYPE - 1;
	this->_value = (double)$Integer::MIN_VALUE;
	this->_separFirst = true;
	this->_separLast = false;
	$set(this, _separToks, $new($ArrayList));
	$set(this, _formatToks, $new($ArrayList));
	this->_nSepars = 0;
	this->_nFormats = 0;
	$set(this, _tempBuffer, $new($StringBuilder));
	$set(this, _translet, translet);
	$set(this, _document, document);
	$set(this, _iterator, iterator);
	this->_hasFrom = hasFrom;
}

NodeCounter* NodeCounter::setValue(double value) {
	this->_value = value;
	return this;
}

void NodeCounter::setFormatting($String* format, $String* lang, $String* letterValue, $String* groupSep, $String* groupSize) {
	$set(this, _lang, lang);
	$set(this, _groupSep, groupSep);
	$set(this, _letterValue, letterValue);
	this->_groupSize = parseStringToAnInt(groupSize);
	setTokens(format);
}

int32_t NodeCounter::parseStringToAnInt($String* s) {
	if (s == nullptr) {
		return 0;
	}
	int32_t result = 0;
	bool negative = false;
	int32_t radix = 10;
	int32_t i = 0;
	int32_t max = $nc(s)->length();
	int32_t limit = 0;
	int32_t multmin = 0;
	int32_t digit = 0;
	if (max > 0) {
		if (s->charAt(0) == u'-') {
			negative = true;
			limit = $Integer::MIN_VALUE;
			++i;
		} else {
			limit = -$Integer::MAX_VALUE;
		}
		multmin = $div(limit, radix);
		if (i < max) {
			digit = $Character::digit(s->charAt(i++), radix);
			if (digit < 0) {
				return 0;
			} else {
				result = -digit;
			}
		}
		while (i < max) {
			digit = $Character::digit(s->charAt(i++), radix);
			if (digit < 0) {
				return 0;
			}
			if (result < multmin) {
				return 0;
			}
			result *= radix;
			if (result < limit + digit) {
				return 0;
			}
			result -= digit;
		}
	} else {
		return 0;
	}
	if (negative) {
		if (i > 1) {
			return result;
		} else {
			return 0;
		}
	} else {
		return -result;
	}
}

void NodeCounter::setTokens($String* format) {
	$useLocalCurrentObjectStackCache();
	if ((this->_format != nullptr) && ($nc(format)->equals(this->_format))) {
		return;
	}
	$set(this, _format, format);
	int32_t length = $nc(this->_format)->length();
	bool isFirst = true;
	this->_separFirst = true;
	this->_separLast = false;
	this->_nSepars = 0;
	this->_nFormats = 0;
	$nc(this->_separToks)->clear();
	$nc(this->_formatToks)->clear();
	{
		int32_t j = 0;
		int32_t i = 0;
		for (; i < length;) {
			char16_t c = $nc(format)->charAt(i);
			for (j = i; $Character::isLetterOrDigit(c);) {
				if (++i == length) {
					break;
				}
				c = format->charAt(i);
			}
			if (i > j) {
				if (isFirst) {
					$nc(this->_separToks)->add("."_s);
					isFirst = (this->_separFirst = false);
				}
				$nc(this->_formatToks)->add($(format->substring(j, i)));
			}
			if (i == length) {
				break;
			}
			c = format->charAt(i);
			for (j = i; !$Character::isLetterOrDigit(c);) {
				if (++i == length) {
					break;
				}
				c = format->charAt(i);
				isFirst = false;
			}
			if (i > j) {
				$nc(this->_separToks)->add($(format->substring(j, i)));
			}
		}
	}
	this->_nSepars = $nc(this->_separToks)->size();
	this->_nFormats = $nc(this->_formatToks)->size();
	if (this->_nSepars > this->_nFormats) {
		this->_separLast = true;
	}
	if (this->_separFirst) {
		--this->_nSepars;
	}
	if (this->_separLast) {
		--this->_nSepars;
	}
	if (this->_nSepars == 0) {
		$nc(this->_separToks)->add(1, "."_s);
		++this->_nSepars;
	}
	if (this->_separFirst) {
		++this->_nSepars;
	}
}

NodeCounter* NodeCounter::setDefaultFormatting() {
	setFormatting("1"_s, "en"_s, "alphabetic"_s, nullptr, nullptr);
	return this;
}

$String* NodeCounter::getCounter($String* format, $String* lang, $String* letterValue, $String* groupSep, $String* groupSize) {
	setFormatting(format, lang, letterValue, groupSep, groupSize);
	return getCounter();
}

bool NodeCounter::matchesCount(int32_t node) {
	return this->_nodeType == $nc(this->_document)->getExpandedTypeID(node);
}

bool NodeCounter::matchesFrom(int32_t node) {
	return false;
}

$String* NodeCounter::formatNumbers(int32_t value) {
	return formatNumbers($$new($ints, {value}));
}

$String* NodeCounter::formatNumbers($ints* values) {
	$useLocalCurrentObjectStackCache();
	int32_t nValues = $nc(values)->length;
	bool isEmpty = true;
	for (int32_t i = 0; i < nValues; ++i) {
		if (values->get(i) != $Integer::MIN_VALUE) {
			isEmpty = false;
		}
	}
	if (isEmpty) {
		return (""_s);
	}
	bool isFirst = true;
	int32_t t = 0;
	int32_t n = 0;
	int32_t s = 1;
	$nc(this->_tempBuffer)->setLength(0);
	$var($StringBuilder, buffer, this->_tempBuffer);
	if (this->_separFirst) {
		$nc(buffer)->append($cast($String, $($nc(this->_separToks)->get(0))));
	}
	while (n < nValues) {
		int32_t value = values->get(n);
		if (value != $Integer::MIN_VALUE) {
			if (!isFirst) {
				$nc(buffer)->append($cast($String, $($nc(this->_separToks)->get(s++))));
			}
			formatValue(value, $cast($String, $($nc(this->_formatToks)->get(t++))), buffer);
			if (t == this->_nFormats) {
				--t;
			}
			if (s >= this->_nSepars) {
				--s;
			}
			isFirst = false;
		}
		++n;
	}
	if (this->_separLast) {
		$nc(buffer)->append($cast($String, $($nc(this->_separToks)->get($nc(this->_separToks)->size() - 1))));
	}
	return $nc(buffer)->toString();
}

void NodeCounter::formatValue(int32_t value, $String* format, $StringBuilder* buffer) {
	$useLocalCurrentObjectStackCache();
	char16_t c = $nc(format)->charAt(0);
	if ($Character::isDigit(c)) {
		char16_t zero = (char16_t)(c - $Character::getNumericValue(c));
		$var($StringBuilder, temp, buffer);
		if (this->_groupSize > 0) {
			$assign(temp, $new($StringBuilder));
		}
		$var($String, s, ""_s);
		int32_t n = value;
		while (n > 0) {
			$assign(s, $str({$$str((char16_t)((int32_t)zero + (n % 10))), s}));
			n = n / 10;
		}
		{
			int32_t i = 0;
			for (;; ++i) {
				int32_t var$0 = i;
				int32_t var$2 = format->length();
				int32_t var$1 = var$2 - $nc(s)->length();
				if (!(var$0 < var$1)) {
					break;
				}
				{
					$nc(temp)->append(zero);
				}
			}
		}
		$nc(temp)->append(s);
		if (this->_groupSize > 0) {
			for (int32_t i = 0; i < temp->length(); ++i) {
				if (i != 0 && ($mod((temp->length() - i), this->_groupSize)) == 0) {
					$nc(buffer)->append(this->_groupSep);
				}
				$nc(buffer)->append(temp->charAt(i));
			}
		}
	} else if (c == u'i' && !$nc(this->_letterValue)->equals("alphabetic"_s)) {
		$nc(buffer)->append($(romanValue(value)));
	} else if (c == u'I' && !$nc(this->_letterValue)->equals("alphabetic"_s)) {
		$nc(buffer)->append($($nc($(romanValue(value)))->toUpperCase()));
	} else {
		int32_t min = (int32_t)c;
		int32_t max = (int32_t)c;
		if (c >= 945 && c <= 969) {
			max = 969;
		} else {
			while ($Character::isLetterOrDigit((char16_t)(max + 1))) {
				++max;
			}
		}
		$nc(buffer)->append($(alphaValue(value, min, max)));
	}
}

$String* NodeCounter::alphaValue(int32_t value, int32_t min, int32_t max) {
	$useLocalCurrentObjectStackCache();
	if (value <= 0) {
		return $str({""_s, $$str(value)});
	}
	int32_t range = max - min + 1;
	char16_t last = (char16_t)(($mod((value - 1), range)) + min);
	if (value > range) {
		return $str({$(alphaValue($div((value - 1), range), min, max)), $$str(last)});
	} else {
		return $str({""_s, $$str(last)});
	}
}

$String* NodeCounter::romanValue(int32_t n) {
	if (n <= 0 || n > 4000) {
		return $str({""_s, $$str(n)});
	}
	return $str({$nc(NodeCounter::Thousands)->get(n / 1000), $nc(NodeCounter::Hundreds)->get((n / 100) % 10), $nc(NodeCounter::Tens)->get((n / 10) % 10), $nc(NodeCounter::Ones)->get(n % 10)});
}

void clinit$NodeCounter($Class* class$) {
	$assignStatic(NodeCounter::Thousands, $new($StringArray, {
		""_s,
		"m"_s,
		"mm"_s,
		"mmm"_s
	}));
	$assignStatic(NodeCounter::Hundreds, $new($StringArray, {
		""_s,
		"c"_s,
		"cc"_s,
		"ccc"_s,
		"cd"_s,
		"d"_s,
		"dc"_s,
		"dcc"_s,
		"dccc"_s,
		"cm"_s
	}));
	$assignStatic(NodeCounter::Tens, $new($StringArray, {
		""_s,
		"x"_s,
		"xx"_s,
		"xxx"_s,
		"xl"_s,
		"l"_s,
		"lx"_s,
		"lxx"_s,
		"lxxx"_s,
		"xc"_s
	}));
	$assignStatic(NodeCounter::Ones, $new($StringArray, {
		""_s,
		"i"_s,
		"ii"_s,
		"iii"_s,
		"iv"_s,
		"v"_s,
		"vi"_s,
		"vii"_s,
		"viii"_s,
		"ix"_s
	}));
}

NodeCounter::NodeCounter() {
}

$Class* NodeCounter::load$($String* name, bool initialize) {
	$loadClass(NodeCounter, name, initialize, &_NodeCounter_ClassInfo_, clinit$NodeCounter, allocate$NodeCounter);
	return class$;
}

$Class* NodeCounter::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com