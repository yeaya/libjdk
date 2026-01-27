#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$TypedNamespaceIterator.h>

#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NamespaceIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#include <jcpp.h>

#undef END

using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseIterators$NamespaceIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$NamespaceIterator;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $SAX2DTM2 = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

$FieldInfo _SAXImpl$TypedNamespaceIterator_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SAXImpl$TypedNamespaceIterator, this$0)},
	{"_nsPrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SAXImpl$TypedNamespaceIterator, _nsPrefix)},
	{}
};

$MethodInfo _SAXImpl$TypedNamespaceIterator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;I)V", nullptr, $PUBLIC, $method(SAXImpl$TypedNamespaceIterator, init$, void, $SAXImpl*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAXImpl$TypedNamespaceIterator, next, int32_t)},
	{}
};

$InnerClassInfo _SAXImpl$TypedNamespaceIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$TypedNamespaceIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "TypedNamespaceIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NamespaceIterator", $PUBLIC},
	{}
};

$ClassInfo _SAXImpl$TypedNamespaceIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$TypedNamespaceIterator",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator",
	nullptr,
	_SAXImpl$TypedNamespaceIterator_FieldInfo_,
	_SAXImpl$TypedNamespaceIterator_MethodInfo_,
	nullptr,
	nullptr,
	_SAXImpl$TypedNamespaceIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl"
};

$Object* allocate$SAXImpl$TypedNamespaceIterator($Class* clazz) {
	return $of($alloc(SAXImpl$TypedNamespaceIterator));
}

void SAXImpl$TypedNamespaceIterator::init$($SAXImpl* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$NamespaceIterator::init$(this$0);
	if ($SAXImpl::access$000(this$0) != nullptr) {
		$set(this, _nsPrefix, $nc($($SAXImpl::access$100(this$0)))->getLocalName(nodeType));
	}
}

int32_t SAXImpl$TypedNamespaceIterator::next() {
	$useLocalCurrentObjectStackCache();
	if ((this->_nsPrefix == nullptr) || ($nc(this->_nsPrefix)->length() == 0)) {
		return ($DTMAxisIterator::END);
	}
	int32_t node = $DTMAxisIterator::END;
	for (node = $DTMDefaultBaseIterators$NamespaceIterator::next(); node != $DTMAxisIterator::END; node = $DTMDefaultBaseIterators$NamespaceIterator::next()) {
		if ($nc(this->_nsPrefix)->compareTo($(this->this$0->getLocalName(node))) == 0) {
			return returnNode(node);
		}
	}
	return ($DTMAxisIterator::END);
}

SAXImpl$TypedNamespaceIterator::SAXImpl$TypedNamespaceIterator() {
}

$Class* SAXImpl$TypedNamespaceIterator::load$($String* name, bool initialize) {
	$loadClass(SAXImpl$TypedNamespaceIterator, name, initialize, &_SAXImpl$TypedNamespaceIterator_ClassInfo_, allocate$SAXImpl$TypedNamespaceIterator);
	return class$;
}

$Class* SAXImpl$TypedNamespaceIterator::class$ = nullptr;

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com