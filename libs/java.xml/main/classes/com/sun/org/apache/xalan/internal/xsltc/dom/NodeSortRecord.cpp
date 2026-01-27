#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord.h>

#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SortSettings.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xml/internal/utils/StringComparable.h>
#include <java/lang/Comparable.h>
#include <java/lang/NumberFormatException.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef COMPARE_ASCENDING
#undef COMPARE_DESCENDING
#undef COMPARE_NUMERIC
#undef COMPARE_STRING
#undef DEFAULT_COLLATOR
#undef NEGATIVE_INFINITY

using $CollatorArray = $Array<::java::text::Collator>;
using $LocaleArray = $Array<::java::util::Locale>;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $SortSettings = ::com::sun::org::apache::xalan::internal::xsltc::dom::SortSettings;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $StringComparable = ::com::sun::org::apache::xml::internal::utils::StringComparable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Collator = ::java::text::Collator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$CompoundAttribute _NodeSortRecord_FieldAnnotations_DEFAULT_COLLATOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NodeSortRecord_FieldAnnotations__collator[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _NodeSortRecord_FieldAnnotations__locale[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _NodeSortRecord_FieldInfo_[] = {
	{"COMPARE_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeSortRecord, COMPARE_STRING)},
	{"COMPARE_NUMERIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeSortRecord, COMPARE_NUMERIC)},
	{"COMPARE_ASCENDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeSortRecord, COMPARE_ASCENDING)},
	{"COMPARE_DESCENDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeSortRecord, COMPARE_DESCENDING)},
	{"DEFAULT_COLLATOR", "Ljava/text/Collator;", nullptr, $PRIVATE | $STATIC | $FINAL | $DEPRECATED, $staticField(NodeSortRecord, DEFAULT_COLLATOR), _NodeSortRecord_FieldAnnotations_DEFAULT_COLLATOR},
	{"_collator", "Ljava/text/Collator;", nullptr, $PROTECTED | $DEPRECATED, $field(NodeSortRecord, _collator), _NodeSortRecord_FieldAnnotations__collator},
	{"_collators", "[Ljava/text/Collator;", nullptr, $PROTECTED, $field(NodeSortRecord, _collators)},
	{"_locale", "Ljava/util/Locale;", nullptr, $PROTECTED | $DEPRECATED, $field(NodeSortRecord, _locale), _NodeSortRecord_FieldAnnotations__locale},
	{"_settings", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SortSettings;", nullptr, $PROTECTED, $field(NodeSortRecord, _settings)},
	{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE, $field(NodeSortRecord, _dom)},
	{"_node", "I", nullptr, $PRIVATE, $field(NodeSortRecord, _node)},
	{"_last", "I", nullptr, $PRIVATE, $field(NodeSortRecord, _last)},
	{"_scanned", "I", nullptr, $PRIVATE, $field(NodeSortRecord, _scanned)},
	{"_values", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(NodeSortRecord, _values)},
	{}
};

$MethodInfo _NodeSortRecord_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(NodeSortRecord, init$, void, int32_t)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(NodeSortRecord, init$, void)},
	{"compareDocOrder", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord;)I", nullptr, $PUBLIC | $FINAL, $method(NodeSortRecord, compareDocOrder, int32_t, NodeSortRecord*)},
	{"compareTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord;)I", nullptr, $PUBLIC, $virtualMethod(NodeSortRecord, compareTo, int32_t, NodeSortRecord*)},
	{"extractValueFromDOM", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;IILcom/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet;I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeSortRecord, extractValueFromDOM, $String*, $DOM*, int32_t, int32_t, $AbstractTranslet*, int32_t)},
	{"getCollator", "()[Ljava/text/Collator;", nullptr, $PUBLIC, $virtualMethod(NodeSortRecord, getCollator, $CollatorArray*)},
	{"getNode", "()I", nullptr, $PUBLIC | $FINAL, $method(NodeSortRecord, getNode, int32_t)},
	{"initialize", "(IILcom/sun/org/apache/xalan/internal/xsltc/DOM;Lcom/sun/org/apache/xalan/internal/xsltc/dom/SortSettings;)V", nullptr, $PUBLIC | $FINAL, $method(NodeSortRecord, initialize, void, int32_t, int32_t, $DOM*, $SortSettings*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"numericValue", "(I)Ljava/lang/Double;", nullptr, $PRIVATE | $FINAL, $method(NodeSortRecord, numericValue, $Double*, int32_t)},
	{"stringValue", "(I)Ljava/lang/Comparable;", nullptr, $PRIVATE | $FINAL, $method(NodeSortRecord, stringValue, $Comparable*, int32_t)},
	{}
};

$ClassInfo _NodeSortRecord_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.dom.NodeSortRecord",
	"java.lang.Object",
	nullptr,
	_NodeSortRecord_FieldInfo_,
	_NodeSortRecord_MethodInfo_
};

$Object* allocate$NodeSortRecord($Class* clazz) {
	return $of($alloc(NodeSortRecord));
}

$Collator* NodeSortRecord::DEFAULT_COLLATOR = nullptr;

void NodeSortRecord::init$(int32_t node) {
	$set(this, _collator, NodeSortRecord::DEFAULT_COLLATOR);
	$set(this, _dom, nullptr);
	this->_last = 0;
	this->_scanned = 0;
	this->_node = node;
}

void NodeSortRecord::init$() {
	NodeSortRecord::init$(0);
}

void NodeSortRecord::initialize(int32_t node, int32_t last, $DOM* dom, $SortSettings* settings) {
	$set(this, _dom, dom);
	this->_node = node;
	this->_last = last;
	$set(this, _settings, settings);
	int32_t levels = $nc($($nc(settings)->getSortOrders()))->length;
	$set(this, _values, $new($ObjectArray, levels));
	$set(this, _collators, settings->getCollators());
	$set(this, _collator, $nc(this->_collators)->get(0));
}

int32_t NodeSortRecord::getNode() {
	return this->_node;
}

int32_t NodeSortRecord::compareDocOrder(NodeSortRecord* other) {
	return this->_node - $nc(other)->_node;
}

$Comparable* NodeSortRecord::stringValue(int32_t level) {
	$useLocalCurrentObjectStackCache();
	if (this->_scanned <= level) {
		$var($AbstractTranslet, translet, $nc(this->_settings)->getTranslet());
		$var($LocaleArray, locales, $nc(this->_settings)->getLocales());
		$var($StringArray, caseOrder, $nc(this->_settings)->getCaseOrders());
		$var($String, str, extractValueFromDOM(this->_dom, this->_node, level, translet, this->_last));
		$var($Comparable, key, $StringComparable::getComparator(str, $nc(locales)->get(level), $nc(this->_collators)->get(level), $nc(caseOrder)->get(level)));
		$nc(this->_values)->set(this->_scanned++, key);
		return (key);
	}
	return ($cast($Comparable, $nc(this->_values)->get(level)));
}

$Double* NodeSortRecord::numericValue(int32_t level) {
	$useLocalCurrentObjectStackCache();
	if (this->_scanned <= level) {
		$var($AbstractTranslet, translet, $nc(this->_settings)->getTranslet());
		$var($String, str, extractValueFromDOM(this->_dom, this->_node, level, translet, this->_last));
		$var($Double, num, nullptr);
		try {
			$assign(num, $Double::valueOf($Double::parseDouble(str)));
		} catch ($NumberFormatException& e) {
			$init($Double);
			$assign(num, $Double::valueOf($Double::NEGATIVE_INFINITY));
		}
		$nc(this->_values)->set(this->_scanned++, num);
		return (num);
	}
	return ($cast($Double, $nc(this->_values)->get(level)));
}

int32_t NodeSortRecord::compareTo(NodeSortRecord* other) {
	$useLocalCurrentObjectStackCache();
	int32_t cmp = 0;
	int32_t level = 0;
	$var($ints, sortOrder, $nc(this->_settings)->getSortOrders());
	int32_t levels = $nc($($nc(this->_settings)->getSortOrders()))->length;
	$var($ints, compareTypes, $nc(this->_settings)->getTypes());
	for (level = 0; level < levels; ++level) {
		if ($nc(compareTypes)->get(level) == NodeSortRecord::COMPARE_NUMERIC) {
			$var($Double, our, numericValue(level));
			$var($Double, their, $nc(other)->numericValue(level));
			cmp = $nc(our)->compareTo(their);
		} else {
			$var($Comparable, our, stringValue(level));
			$var($Comparable, their, $nc(other)->stringValue(level));
			cmp = $nc(our)->compareTo(their);
		}
		if (cmp != 0) {
			return $nc(sortOrder)->get(level) == NodeSortRecord::COMPARE_DESCENDING ? 0 - cmp : cmp;
		}
	}
	return (this->_node - $nc(other)->_node);
}

$CollatorArray* NodeSortRecord::getCollator() {
	return this->_collators;
}

void clinit$NodeSortRecord($Class* class$) {
	$assignStatic(NodeSortRecord::DEFAULT_COLLATOR, $Collator::getInstance());
}

NodeSortRecord::NodeSortRecord() {
}

$Class* NodeSortRecord::load$($String* name, bool initialize) {
	$loadClass(NodeSortRecord, name, initialize, &_NodeSortRecord_ClassInfo_, clinit$NodeSortRecord, allocate$NodeSortRecord);
	return class$;
}

$Class* NodeSortRecord::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com