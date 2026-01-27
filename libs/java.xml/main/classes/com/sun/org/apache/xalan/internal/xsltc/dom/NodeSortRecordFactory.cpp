#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecordFactory.h>

#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/TransletException.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SortSettings.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <com/sun/org/apache/xml/internal/utils/LocaleUtility.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/text/Collator.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef COMPARE_DESCENDING
#undef COMPARE_NUMERIC
#undef DESCENDING
#undef NUMBER

using $CollatorArray = $Array<::java::text::Collator>;
using $LocaleArray = $Array<::java::util::Locale>;
using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Translet = ::com::sun::org::apache::xalan::internal::xsltc::Translet;
using $TransletException = ::com::sun::org::apache::xalan::internal::xsltc::TransletException;
using $NodeSortRecord = ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord;
using $SortSettings = ::com::sun::org::apache::xalan::internal::xsltc::dom::SortSettings;
using $AbstractTranslet = ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet;
using $LocaleUtility = ::com::sun::org::apache::xml::internal::utils::LocaleUtility;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Collator = ::java::text::Collator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$CompoundAttribute _NodeSortRecordFactory_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _NodeSortRecordFactory_FieldInfo_[] = {
	{"DESCENDING", "I", nullptr, $PRIVATE | $STATIC, $staticField(NodeSortRecordFactory, DESCENDING)},
	{"NUMBER", "I", nullptr, $PRIVATE | $STATIC, $staticField(NodeSortRecordFactory, NUMBER)},
	{"_dom", "Lcom/sun/org/apache/xalan/internal/xsltc/DOM;", nullptr, $PRIVATE | $FINAL, $field(NodeSortRecordFactory, _dom)},
	{"_className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NodeSortRecordFactory, _className)},
	{"_class", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(NodeSortRecordFactory, _class)},
	{"_sortSettings", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SortSettings;", nullptr, $PRIVATE, $field(NodeSortRecordFactory, _sortSettings)},
	{"_collator", "Ljava/text/Collator;", nullptr, $PROTECTED, $field(NodeSortRecordFactory, _collator)},
	{}
};

$MethodInfo _NodeSortRecordFactory_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/Translet;[Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $method(NodeSortRecordFactory, init$, void, $DOM*, $String*, $Translet*, $StringArray*, $StringArray*), "com.sun.org.apache.xalan.internal.xsltc.TransletException", nullptr, _NodeSortRecordFactory_MethodAnnotations_init$0},
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/DOM;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/Translet;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NodeSortRecordFactory, init$, void, $DOM*, $String*, $Translet*, $StringArray*, $StringArray*, $StringArray*, $StringArray*), "com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeSortRecordFactory, getClassName, $String*)},
	{"makeNodeSortRecord", "(II)Lcom/sun/org/apache/xalan/internal/xsltc/dom/NodeSortRecord;", nullptr, $PUBLIC, $virtualMethod(NodeSortRecordFactory, makeNodeSortRecord, $NodeSortRecord*, int32_t, int32_t), "java.lang.ExceptionInInitializerError,java.lang.LinkageError,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.SecurityException,com.sun.org.apache.xalan.internal.xsltc.TransletException"},
	{"setLang", "([Ljava/lang/String;)V", nullptr, $PRIVATE | $FINAL, $method(NodeSortRecordFactory, setLang, void, $StringArray*)},
	{}
};

$ClassInfo _NodeSortRecordFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.NodeSortRecordFactory",
	"java.lang.Object",
	nullptr,
	_NodeSortRecordFactory_FieldInfo_,
	_NodeSortRecordFactory_MethodInfo_
};

$Object* allocate$NodeSortRecordFactory($Class* clazz) {
	return $of($alloc(NodeSortRecordFactory));
}

int32_t NodeSortRecordFactory::DESCENDING = 0;
int32_t NodeSortRecordFactory::NUMBER = 0;

void NodeSortRecordFactory::init$($DOM* dom, $String* className, $Translet* translet, $StringArray* order, $StringArray* type) {
	NodeSortRecordFactory::init$(dom, className, translet, order, type, nullptr, nullptr);
}

void NodeSortRecordFactory::init$($DOM* dom, $String* className, $Translet* translet, $StringArray* order, $StringArray* type, $StringArray* lang$renamed, $StringArray* caseOrder$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, caseOrder, caseOrder$renamed);
	$var($StringArray, lang, lang$renamed);
	try {
		$set(this, _dom, dom);
		$set(this, _className, className);
		$set(this, _class, $nc(translet)->getAuxiliaryClass(className));
		if (this->_class == nullptr) {
			$set(this, _class, $ObjectFactory::findProviderClass(className, true));
		}
		int32_t levels = $nc(order)->length;
		$var($ints, iOrder, $new($ints, levels));
		$var($ints, iType, $new($ints, levels));
		for (int32_t i = 0; i < levels; ++i) {
			if ($nc(order->get(i))->length() == NodeSortRecordFactory::DESCENDING) {
				iOrder->set(i, $NodeSortRecord::COMPARE_DESCENDING);
			}
			if ($nc($nc(type)->get(i))->length() == NodeSortRecordFactory::NUMBER) {
				iType->set(i, $NodeSortRecord::COMPARE_NUMERIC);
			}
		}
		$var($StringArray, emptyStringArray, nullptr);
		if (lang == nullptr || caseOrder == nullptr) {
			int32_t numSortKeys = order->length;
			$assign(emptyStringArray, $new($StringArray, numSortKeys));
			for (int32_t i = 0; i < numSortKeys; ++i) {
				emptyStringArray->set(i, ""_s);
			}
		}
		if (lang == nullptr) {
			$assign(lang, emptyStringArray);
		}
		if (caseOrder == nullptr) {
			$assign(caseOrder, emptyStringArray);
		}
		int32_t length = $nc(lang)->length;
		$var($LocaleArray, locales, $new($LocaleArray, length));
		$var($CollatorArray, collators, $new($CollatorArray, length));
		for (int32_t i = 0; i < length; ++i) {
			locales->set(i, $($LocaleUtility::langToLocale(lang->get(i))));
			collators->set(i, $($Collator::getInstance(locales->get(i))));
		}
		$set(this, _sortSettings, $new($SortSettings, $cast($AbstractTranslet, translet), iOrder, iType, locales, collators, caseOrder));
	} catch ($ClassNotFoundException& e) {
		$throwNew($TransletException, static_cast<$Exception*>(e));
	}
}

$NodeSortRecord* NodeSortRecordFactory::makeNodeSortRecord(int32_t node, int32_t last) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($NodeSortRecord, sortRecord, nullptr);
		$assign(sortRecord, $cast($NodeSortRecord, $nc($($nc(this->_class)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0))));
		$nc(sortRecord)->initialize(node, last, this->_dom, this->_sortSettings);
		return sortRecord;
	} catch ($NoSuchMethodException& ex) {
		$throwNew($InstantiationException, $(ex->getMessage()));
	} catch ($IllegalArgumentException& ex) {
		$throwNew($InstantiationException, $(ex->getMessage()));
	} catch ($InvocationTargetException& ex) {
		$throwNew($InstantiationException, $(ex->getMessage()));
	}
	$shouldNotReachHere();
}

$String* NodeSortRecordFactory::getClassName() {
	return this->_className;
}

void NodeSortRecordFactory::setLang($StringArray* lang) {
}

void clinit$NodeSortRecordFactory($Class* class$) {
	NodeSortRecordFactory::DESCENDING = "descending"_s->length();
	NodeSortRecordFactory::NUMBER = "number"_s->length();
}

NodeSortRecordFactory::NodeSortRecordFactory() {
}

$Class* NodeSortRecordFactory::load$($String* name, bool initialize) {
	$loadClass(NodeSortRecordFactory, name, initialize, &_NodeSortRecordFactory_ClassInfo_, clinit$NodeSortRecordFactory, allocate$NodeSortRecordFactory);
	return class$;
}

$Class* NodeSortRecordFactory::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com