#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$TypedNamespaceIterator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NamespaceIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <jcpp.h>

#undef END

using $SAXImpl = ::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMDefaultBaseIterators$NamespaceIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$NamespaceIterator;
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

void SAXImpl$TypedNamespaceIterator::init$($SAXImpl* this$0, int32_t nodeType) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseIterators$NamespaceIterator::init$(this$0);
	if ($SAXImpl::access$000(this$0) != nullptr) {
		$set(this, _nsPrefix, $$nc($SAXImpl::access$100(this$0))->getLocalName(nodeType));
	}
}

int32_t SAXImpl$TypedNamespaceIterator::next() {
	$useLocalObjectStack();
	if ((this->_nsPrefix == nullptr) || (this->_nsPrefix->length() == 0)) {
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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SAXImpl$TypedNamespaceIterator, this$0)},
		{"_nsPrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SAXImpl$TypedNamespaceIterator, _nsPrefix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl;I)V", nullptr, $PUBLIC, $method(SAXImpl$TypedNamespaceIterator, init$, void, $SAXImpl*, int32_t)},
		{"next", "()I", nullptr, $PUBLIC, $virtualMethod(SAXImpl$TypedNamespaceIterator, next, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$TypedNamespaceIterator", "com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl", "TypedNamespaceIterator", $PUBLIC},
		{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NamespaceIterator", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl$TypedNamespaceIterator",
		"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xalan.internal.xsltc.dom.SAXImpl"
	};
	$loadClass(SAXImpl$TypedNamespaceIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SAXImpl$TypedNamespaceIterator);
	});
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