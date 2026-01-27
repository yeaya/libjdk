#include <com/sun/org/apache/xml/internal/utils/StringComparable.h>

#include <java/lang/Comparable.h>
#include <java/text/CollationElementIterator.h>
#include <java/text/CollationKey.h>
#include <java/text/Collator.h>
#include <java/text/RuleBasedCollator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef CANONICAL_DECOMPOSITION
#undef LOWER_CASE
#undef NULLORDER
#undef PRIMARY
#undef SECONDARY
#undef TERTIARY
#undef UNKNOWN_CASE
#undef UPPER_CASE

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CollationElementIterator = ::java::text::CollationElementIterator;
using $Collator = ::java::text::Collator;
using $RuleBasedCollator = ::java::text::RuleBasedCollator;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _StringComparable_FieldInfo_[] = {
	{"UNKNOWN_CASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StringComparable, UNKNOWN_CASE)},
	{"UPPER_CASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StringComparable, UPPER_CASE)},
	{"LOWER_CASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(StringComparable, LOWER_CASE)},
	{"m_text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringComparable, m_text)},
	{"m_locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(StringComparable, m_locale)},
	{"m_collator", "Ljava/text/RuleBasedCollator;", nullptr, $PRIVATE, $field(StringComparable, m_collator)},
	{"m_caseOrder", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringComparable, m_caseOrder)},
	{"m_mask", "I", nullptr, $PRIVATE, $field(StringComparable, m_mask)},
	{}
};

$MethodInfo _StringComparable_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/Locale;Ljava/text/Collator;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StringComparable, init$, void, $String*, $Locale*, $Collator*, $String*)},
	{"compareTo", "(Lcom/sun/org/apache/xml/internal/utils/StringComparable;)I", nullptr, $PUBLIC, $virtualMethod(StringComparable, compareTo, int32_t, StringComparable*)},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringComparable, compareTo, int32_t, Object$*)},
	{"getCaseDiff", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE | $FINAL, $method(StringComparable, getCaseDiff, int32_t, $String*, $String*)},
	{"getComparator", "(Ljava/lang/String;Ljava/util/Locale;Ljava/text/Collator;Ljava/lang/String;)Ljava/lang/Comparable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(StringComparable, getComparator, $Comparable*, $String*, $Locale*, $Collator*, $String*)},
	{"getElement", "(I)I", nullptr, $PRIVATE | $FINAL, $method(StringComparable, getElement, int32_t, int32_t)},
	{"getFirstCaseDiff", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)[I", nullptr, $PRIVATE | $FINAL, $method(StringComparable, getFirstCaseDiff, $ints*, $String*, $String*, $Locale*)},
	{"getMask", "(I)I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(StringComparable, getMask, int32_t, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(StringComparable, toString, $String*)},
	{}
};

$ClassInfo _StringComparable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.StringComparable",
	"java.lang.Object",
	"java.lang.Comparable",
	_StringComparable_FieldInfo_,
	_StringComparable_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/org/apache/xml/internal/utils/StringComparable;>;"
};

$Object* allocate$StringComparable($Class* clazz) {
	return $of($alloc(StringComparable));
}

void StringComparable::init$($String* text, $Locale* locale, $Collator* collator, $String* caseOrder) {
	this->m_mask = -1;
	$set(this, m_text, text);
	$set(this, m_locale, locale);
	$set(this, m_collator, $cast($RuleBasedCollator, collator));
	$set(this, m_caseOrder, caseOrder);
	this->m_mask = getMask($nc(this->m_collator)->getStrength());
}

$Comparable* StringComparable::getComparator($String* text, $Locale* locale, $Collator* collator, $String* caseOrder) {
	$init(StringComparable);
	if ((caseOrder == nullptr) || ($nc(caseOrder)->length() == 0)) {
		return $nc(($cast($RuleBasedCollator, collator)))->getCollationKey(text);
	} else {
		return $new(StringComparable, text, locale, collator, caseOrder);
	}
}

$String* StringComparable::toString() {
	return this->m_text;
}

int32_t StringComparable::compareTo(StringComparable* o) {
	$var($String, pattern, $nc(o)->toString());
	if ($nc(this->m_text)->equals(pattern)) {
		return 0;
	}
	int32_t savedStrength = $nc(this->m_collator)->getStrength();
	int32_t comp = 0;
	if ((savedStrength == $Collator::PRIMARY) || (savedStrength == $Collator::SECONDARY)) {
		comp = $nc(this->m_collator)->compare(this->m_text, pattern);
	} else {
		$nc(this->m_collator)->setStrength($Collator::SECONDARY);
		comp = $nc(this->m_collator)->compare(this->m_text, pattern);
		$nc(this->m_collator)->setStrength(savedStrength);
	}
	if (comp != 0) {
		return comp;
	}
	comp = getCaseDiff(this->m_text, pattern);
	if (comp != 0) {
		return comp;
	} else {
		return $nc(this->m_collator)->compare(this->m_text, pattern);
	}
}

int32_t StringComparable::getCaseDiff($String* text, $String* pattern) {
	int32_t savedStrength = $nc(this->m_collator)->getStrength();
	int32_t savedDecomposition = $nc(this->m_collator)->getDecomposition();
	$nc(this->m_collator)->setStrength($Collator::TERTIARY);
	$nc(this->m_collator)->setDecomposition($Collator::CANONICAL_DECOMPOSITION);
	$var($ints, diff, getFirstCaseDiff(text, pattern, this->m_locale));
	$nc(this->m_collator)->setStrength(savedStrength);
	$nc(this->m_collator)->setDecomposition(savedDecomposition);
	if (diff != nullptr) {
		if ($nc((this->m_caseOrder))->equals("upper-first"_s)) {
			if (diff->get(0) == StringComparable::UPPER_CASE) {
				return -1;
			} else {
				return 1;
			}
		} else if (diff->get(0) == StringComparable::LOWER_CASE) {
			return -1;
		} else {
			return 1;
		}
	} else {
		return 0;
	}
}

$ints* StringComparable::getFirstCaseDiff($String* text, $String* pattern, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($CollationElementIterator, targIter, $nc(this->m_collator)->getCollationElementIterator(text));
	$var($CollationElementIterator, patIter, $nc(this->m_collator)->getCollationElementIterator(pattern));
	int32_t startTarg = -1;
	int32_t endTarg = -1;
	int32_t startPatt = -1;
	int32_t endPatt = -1;
	int32_t done = getElement($CollationElementIterator::NULLORDER);
	int32_t patternElement = 0;
	int32_t targetElement = 0;
	bool getPattern = true;
	bool getTarget = true;
	while (true) {
		if (getPattern) {
			startPatt = $nc(patIter)->getOffset();
			patternElement = getElement(patIter->next());
			endPatt = patIter->getOffset();
		}
		if (getTarget) {
			startTarg = $nc(targIter)->getOffset();
			targetElement = getElement(targIter->next());
			endTarg = targIter->getOffset();
		}
		getTarget = (getPattern = true);
		if ((patternElement == done) || (targetElement == done)) {
			return nullptr;
		} else if (targetElement == 0) {
			getPattern = false;
		} else if (patternElement == 0) {
			getTarget = false;
		} else if (targetElement != patternElement) {
			if ((startPatt < endPatt) && (startTarg < endTarg)) {
				$var($String, subText, $nc(text)->substring(startTarg, endTarg));
				$var($String, subPatt, $nc(pattern)->substring(startPatt, endPatt));
				$var($String, subTextUp, subText->toUpperCase(locale));
				$var($String, subPattUp, subPatt->toUpperCase(locale));
				if ($nc(this->m_collator)->compare(subTextUp, subPattUp) != 0) {
					continue;
				}
				$var($ints, diff, $new($ints, {
					StringComparable::UNKNOWN_CASE,
					StringComparable::UNKNOWN_CASE
				}));
				if ($nc(this->m_collator)->compare(subText, subTextUp) == 0) {
					diff->set(0, StringComparable::UPPER_CASE);
				} else if ($nc(this->m_collator)->compare(subText, $(subText->toLowerCase(locale))) == 0) {
					diff->set(0, StringComparable::LOWER_CASE);
				}
				if ($nc(this->m_collator)->compare(subPatt, subPattUp) == 0) {
					diff->set(1, StringComparable::UPPER_CASE);
				} else if ($nc(this->m_collator)->compare(subPatt, $(subPatt->toLowerCase(locale))) == 0) {
					diff->set(1, StringComparable::LOWER_CASE);
				}
				if (((diff->get(0) == StringComparable::UPPER_CASE) && (diff->get(1) == StringComparable::LOWER_CASE)) || ((diff->get(0) == StringComparable::LOWER_CASE) && (diff->get(1) == StringComparable::UPPER_CASE))) {
					return diff;
				} else {
					continue;
				}
			} else {
				continue;
			}
		}
	}
}

int32_t StringComparable::getMask(int32_t strength) {
	$init(StringComparable);
	switch (strength) {
	case $Collator::PRIMARY:
		{
			return (int32_t)0xFFFF0000;
		}
	case $Collator::SECONDARY:
		{
			return -256;
		}
	default:
		{
			return -1;
		}
	}
}

int32_t StringComparable::getElement(int32_t maxStrengthElement) {
	return ((int32_t)(maxStrengthElement & (uint32_t)this->m_mask));
}

int32_t StringComparable::compareTo(Object$* o) {
	return this->compareTo($cast(StringComparable, o));
}

StringComparable::StringComparable() {
}

$Class* StringComparable::load$($String* name, bool initialize) {
	$loadClass(StringComparable, name, initialize, &_StringComparable_ClassInfo_, allocate$StringComparable);
	return class$;
}

$Class* StringComparable::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com