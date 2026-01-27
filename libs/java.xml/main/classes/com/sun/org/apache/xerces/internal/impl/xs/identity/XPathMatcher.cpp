#include <com/sun/org/apache/xerces/internal/impl/xs/identity/XPathMatcher.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$NodeTest.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Step.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/util/IntStack.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <com/sun/org/apache/xerces/internal/xs/AttributePSVI.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSValue.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef ATTRIBUTE_PSVI
#undef CHILD
#undef DEBUG_ALL
#undef DEBUG_ANY
#undef DEBUG_MATCH
#undef DEBUG_METHODS
#undef DEBUG_METHODS2
#undef DEBUG_METHODS3
#undef DEBUG_STACK
#undef DESCENDANT
#undef MATCHED
#undef MATCHED_ATTRIBUTE
#undef MATCHED_DESCENDANT
#undef MATCHED_DESCENDANT_PREVIOUS
#undef NAMESPACE
#undef QNAME
#undef SELF

using $XPath$StepArray = $Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Step>;
using $IntStackArray = $Array<::com::sun::org::apache::xerces::internal::util::IntStack>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XPath = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath;
using $XPath$Axis = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Axis;
using $XPath$NodeTest = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$NodeTest;
using $XPath$Step = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Step;
using $IntStack = ::com::sun::org::apache::xerces::internal::util::IntStack;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
using $AttributePSVI = ::com::sun::org::apache::xerces::internal::xs::AttributePSVI;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $XSValue = ::com::sun::org::apache::xerces::internal::xs::XSValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {

$FieldInfo _XPathMatcher_FieldInfo_[] = {
	{"DEBUG_ALL", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, DEBUG_ALL)},
	{"DEBUG_METHODS", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, DEBUG_METHODS)},
	{"DEBUG_METHODS2", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, DEBUG_METHODS2)},
	{"DEBUG_METHODS3", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, DEBUG_METHODS3)},
	{"DEBUG_MATCH", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, DEBUG_MATCH)},
	{"DEBUG_STACK", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, DEBUG_STACK)},
	{"DEBUG_ANY", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, DEBUG_ANY)},
	{"MATCHED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, MATCHED)},
	{"MATCHED_ATTRIBUTE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, MATCHED_ATTRIBUTE)},
	{"MATCHED_DESCENDANT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, MATCHED_DESCENDANT)},
	{"MATCHED_DESCENDANT_PREVIOUS", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(XPathMatcher, MATCHED_DESCENDANT_PREVIOUS)},
	{"fLocationPaths", "[Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;", nullptr, $PRIVATE | $FINAL, $field(XPathMatcher, fLocationPaths)},
	{"fMatched", "[I", nullptr, $PRIVATE | $FINAL, $field(XPathMatcher, fMatched)},
	{"fMatchedString", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(XPathMatcher, fMatchedString)},
	{"fStepIndexes", "[Lcom/sun/org/apache/xerces/internal/util/IntStack;", nullptr, $PRIVATE | $FINAL, $field(XPathMatcher, fStepIndexes)},
	{"fCurrentStep", "[I", nullptr, $PRIVATE | $FINAL, $field(XPathMatcher, fCurrentStep)},
	{"fNoMatchDepth", "[I", nullptr, $PRIVATE | $FINAL, $field(XPathMatcher, fNoMatchDepth)},
	{"fQName", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $FINAL, $field(XPathMatcher, fQName)},
	{}
};

$MethodInfo _XPathMatcher_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath;)V", nullptr, $PUBLIC, $method(XPathMatcher, init$, void, $XPath*)},
	{"endElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;ZLjava/lang/Object;SLcom/sun/org/apache/xerces/internal/xs/ShortList;)V", nullptr, $PUBLIC, $virtualMethod(XPathMatcher, endElement, void, $QName*, $XSTypeDefinition*, bool, Object$*, int16_t, $ShortList*)},
	{"handleContent", "(Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;ZLjava/lang/Object;SLcom/sun/org/apache/xerces/internal/xs/ShortList;)V", nullptr, $PROTECTED, $virtualMethod(XPathMatcher, handleContent, void, $XSTypeDefinition*, bool, Object$*, int16_t, $ShortList*)},
	{"isMatched", "()Z", nullptr, $PUBLIC, $virtualMethod(XPathMatcher, isMatched, bool)},
	{"matched", "(Ljava/lang/Object;SLcom/sun/org/apache/xerces/internal/xs/ShortList;Z)V", nullptr, $PROTECTED, $virtualMethod(XPathMatcher, matched, void, Object$*, int16_t, $ShortList*, bool)},
	{"matches", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$NodeTest;Lcom/sun/org/apache/xerces/internal/xni/QName;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(XPathMatcher, matches, bool, $XPath$NodeTest*, $QName*)},
	{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(XPathMatcher, normalize, $String*, $String*)},
	{"startDocumentFragment", "()V", nullptr, $PUBLIC, $virtualMethod(XPathMatcher, startDocumentFragment, void)},
	{"startElement", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;)V", nullptr, $PUBLIC, $virtualMethod(XPathMatcher, startElement, void, $QName*, $XMLAttributes*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPathMatcher, toString, $String*)},
	{}
};

$ClassInfo _XPathMatcher_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.XPathMatcher",
	"java.lang.Object",
	nullptr,
	_XPathMatcher_FieldInfo_,
	_XPathMatcher_MethodInfo_
};

$Object* allocate$XPathMatcher($Class* clazz) {
	return $of($alloc(XPathMatcher));
}

void XPathMatcher::init$($XPath* xpath) {
	$useLocalCurrentObjectStackCache();
	$set(this, fQName, $new($QName));
	$set(this, fLocationPaths, $nc(xpath)->getLocationPaths());
	$set(this, fStepIndexes, $new($IntStackArray, $nc(this->fLocationPaths)->length));
	for (int32_t i = 0; i < $nc(this->fStepIndexes)->length; ++i) {
		$nc(this->fStepIndexes)->set(i, $$new($IntStack));
	}
	$set(this, fCurrentStep, $new($ints, $nc(this->fLocationPaths)->length));
	$set(this, fNoMatchDepth, $new($ints, $nc(this->fLocationPaths)->length));
	$set(this, fMatched, $new($ints, $nc(this->fLocationPaths)->length));
}

bool XPathMatcher::isMatched() {
	for (int32_t i = 0; i < $nc(this->fLocationPaths)->length; ++i) {
		if ((((int32_t)($nc(this->fMatched)->get(i) & (uint32_t)XPathMatcher::MATCHED)) == XPathMatcher::MATCHED) && (((int32_t)($nc(this->fMatched)->get(i) & (uint32_t)XPathMatcher::MATCHED_DESCENDANT_PREVIOUS)) != XPathMatcher::MATCHED_DESCENDANT_PREVIOUS) && (($nc(this->fNoMatchDepth)->get(i) == 0) || (((int32_t)($nc(this->fMatched)->get(i) & (uint32_t)XPathMatcher::MATCHED_DESCENDANT)) == XPathMatcher::MATCHED_DESCENDANT))) {
			return true;
		}
	}
	return false;
}

void XPathMatcher::handleContent($XSTypeDefinition* type, bool nillable, Object$* value, int16_t valueType, $ShortList* itemValueType) {
}

void XPathMatcher::matched(Object$* actualValue, int16_t valueType, $ShortList* itemValueType, bool isNil) {
}

void XPathMatcher::startDocumentFragment() {
	$set(this, fMatchedString, nullptr);
	for (int32_t i = 0; i < $nc(this->fLocationPaths)->length; ++i) {
		$nc($nc(this->fStepIndexes)->get(i))->clear();
		$nc(this->fCurrentStep)->set(i, 0);
		$nc(this->fNoMatchDepth)->set(i, 0);
		$nc(this->fMatched)->set(i, 0);
	}
}

void XPathMatcher::startElement($QName* element, $XMLAttributes* attributes) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->fLocationPaths)->length; ++i) {
		int32_t startStep = $nc(this->fCurrentStep)->get(i);
		$nc($nc(this->fStepIndexes)->get(i))->push(startStep);
		if (((int32_t)($nc(this->fMatched)->get(i) & (uint32_t)XPathMatcher::MATCHED_DESCENDANT)) == XPathMatcher::MATCHED || $nc(this->fNoMatchDepth)->get(i) > 0) {
			++(*$nc(this->fNoMatchDepth))[i];
			continue;
		}
		if (((int32_t)($nc(this->fMatched)->get(i) & (uint32_t)XPathMatcher::MATCHED_DESCENDANT)) == XPathMatcher::MATCHED_DESCENDANT) {
			$nc(this->fMatched)->set(i, XPathMatcher::MATCHED_DESCENDANT_PREVIOUS);
		}
		$var($XPath$StepArray, steps, $nc($nc(this->fLocationPaths)->get(i))->steps);
		while ($nc(this->fCurrentStep)->get(i) < $nc(steps)->length && $nc($nc(steps->get($nc(this->fCurrentStep)->get(i)))->axis)->type == $XPath$Axis::SELF) {
			++(*$nc(this->fCurrentStep))[i];
		}
		if ($nc(this->fCurrentStep)->get(i) == $nc(steps)->length) {
			$nc(this->fMatched)->set(i, XPathMatcher::MATCHED);
			continue;
		}
		int32_t descendantStep = $nc(this->fCurrentStep)->get(i);
		while ($nc(this->fCurrentStep)->get(i) < $nc(steps)->length && $nc($nc(steps->get($nc(this->fCurrentStep)->get(i)))->axis)->type == $XPath$Axis::DESCENDANT) {
			++(*$nc(this->fCurrentStep))[i];
		}
		bool sawDescendant = $nc(this->fCurrentStep)->get(i) > descendantStep;
		if ($nc(this->fCurrentStep)->get(i) == $nc(steps)->length) {
			++(*$nc(this->fNoMatchDepth))[i];
			continue;
		}
		if (($nc(this->fCurrentStep)->get(i) == startStep || $nc(this->fCurrentStep)->get(i) > descendantStep) && $nc($nc($nc(steps)->get($nc(this->fCurrentStep)->get(i)))->axis)->type == $XPath$Axis::CHILD) {
			$var($XPath$Step, step, steps->get($nc(this->fCurrentStep)->get(i)));
			$var($XPath$NodeTest, nodeTest, $nc(step)->nodeTest);
			if (!matches(nodeTest, element)) {
				if ($nc(this->fCurrentStep)->get(i) > descendantStep) {
					$nc(this->fCurrentStep)->set(i, descendantStep);
					continue;
				}
				++(*$nc(this->fNoMatchDepth))[i];
				continue;
			}
			++(*$nc(this->fCurrentStep))[i];
		}
		if ($nc(this->fCurrentStep)->get(i) == $nc(steps)->length) {
			if (sawDescendant) {
				$nc(this->fCurrentStep)->set(i, descendantStep);
				$nc(this->fMatched)->set(i, XPathMatcher::MATCHED_DESCENDANT);
			} else {
				$nc(this->fMatched)->set(i, XPathMatcher::MATCHED);
			}
			continue;
		}
		if ($nc(this->fCurrentStep)->get(i) < $nc(steps)->length && $nc($nc(steps->get($nc(this->fCurrentStep)->get(i)))->axis)->type == $XPath$Axis::ATTRIBUTE) {
			int32_t attrCount = $nc(attributes)->getLength();
			if (attrCount > 0) {
				$var($XPath$NodeTest, nodeTest, $nc(steps->get($nc(this->fCurrentStep)->get(i)))->nodeTest);
				for (int32_t aIndex = 0; aIndex < attrCount; ++aIndex) {
					attributes->getName(aIndex, this->fQName);
					if (matches(nodeTest, this->fQName)) {
						++(*$nc(this->fCurrentStep))[i];
						if ($nc(this->fCurrentStep)->get(i) == steps->length) {
							$nc(this->fMatched)->set(i, XPathMatcher::MATCHED_ATTRIBUTE);
							int32_t j = 0;
							for (; j < i && (((int32_t)($nc(this->fMatched)->get(j) & (uint32_t)XPathMatcher::MATCHED)) != XPathMatcher::MATCHED); ++j) {
							}
							if (j == i) {
								$init($Constants);
								$var($AttributePSVI, attrPSVI, $cast($AttributePSVI, $nc($(attributes->getAugmentations(aIndex)))->getItem($Constants::ATTRIBUTE_PSVI)));
								$set(this, fMatchedString, $nc($($nc(attrPSVI)->getSchemaValue()))->getActualValue());
								$var($Object, var$0, this->fMatchedString);
								int16_t var$1 = $nc($(attrPSVI->getSchemaValue()))->getActualValueType();
								matched(var$0, var$1, $($nc($(attrPSVI->getSchemaValue()))->getListValueTypes()), false);
							}
						}
						break;
					}
				}
			}
			if (((int32_t)($nc(this->fMatched)->get(i) & (uint32_t)XPathMatcher::MATCHED)) != XPathMatcher::MATCHED) {
				if ($nc(this->fCurrentStep)->get(i) > descendantStep) {
					$nc(this->fCurrentStep)->set(i, descendantStep);
					continue;
				}
				++(*$nc(this->fNoMatchDepth))[i];
				continue;
			}
		}
	}
}

void XPathMatcher::endElement($QName* element, $XSTypeDefinition* type, bool nillable, Object$* value, int16_t valueType, $ShortList* itemValueType) {
	for (int32_t i = 0; i < $nc(this->fLocationPaths)->length; ++i) {
		$nc(this->fCurrentStep)->set(i, $nc($nc(this->fStepIndexes)->get(i))->pop());
		if ($nc(this->fNoMatchDepth)->get(i) > 0) {
			--(*$nc(this->fNoMatchDepth))[i];
		} else {
			int32_t j = 0;
			for (; j < i && (((int32_t)($nc(this->fMatched)->get(j) & (uint32_t)XPathMatcher::MATCHED)) != XPathMatcher::MATCHED); ++j) {
			}
			if ((j < i) || ($nc(this->fMatched)->get(j) == 0)) {
				continue;
			}
			if (((int32_t)($nc(this->fMatched)->get(j) & (uint32_t)XPathMatcher::MATCHED_ATTRIBUTE)) == XPathMatcher::MATCHED_ATTRIBUTE) {
				$nc(this->fMatched)->set(i, 0);
				continue;
			}
			handleContent(type, nillable, value, valueType, itemValueType);
			$nc(this->fMatched)->set(i, 0);
		}
	}
}

$String* XPathMatcher::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, str, $new($StringBuffer));
	$var($String, s, $Object::toString());
	int32_t index2 = $nc(s)->lastIndexOf((int32_t)u'.');
	if (index2 != -1) {
		$assign(s, s->substring(index2 + 1));
	}
	str->append(s);
	for (int32_t i = 0; i < $nc(this->fLocationPaths)->length; ++i) {
		str->append(u'[');
		$var($XPath$StepArray, steps, $nc($nc(this->fLocationPaths)->get(i))->steps);
		for (int32_t j = 0; j < $nc(steps)->length; ++j) {
			if (j == $nc(this->fCurrentStep)->get(i)) {
				str->append(u'^');
			}
			str->append($($nc(steps->get(j))->toString()));
			if (j < steps->length - 1) {
				str->append(u'/');
			}
		}
		if ($nc(this->fCurrentStep)->get(i) == $nc(steps)->length) {
			str->append(u'^');
		}
		str->append(u']');
		str->append(u',');
	}
	return str->toString();
}

$String* XPathMatcher::normalize($String* s) {
	$var($StringBuffer, str, $new($StringBuffer));
	int32_t length = $nc(s)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t c = s->charAt(i);
		switch (c) {
		case u'\n':
			{
				{
					str->append("\\n"_s);
					break;
				}
			}
		default:
			{
				{
					str->append(c);
				}
			}
		}
	}
	return str->toString();
}

bool XPathMatcher::matches($XPath$NodeTest* nodeTest, $QName* value) {
	if ($nc(nodeTest)->type == $XPath$NodeTest::QNAME) {
		return $nc(nodeTest->name)->equals(value);
	}
	if ($nc(nodeTest)->type == $XPath$NodeTest::NAMESPACE) {
		return $nc(nodeTest->name)->uri == $nc(value)->uri;
	}
	return true;
}

XPathMatcher::XPathMatcher() {
}

$Class* XPathMatcher::load$($String* name, bool initialize) {
	$loadClass(XPathMatcher, name, initialize, &_XPathMatcher_ClassInfo_, allocate$XPathMatcher);
	return class$;
}

$Class* XPathMatcher::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com