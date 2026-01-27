#include <com/sun/org/apache/xpath/internal/objects/DTMXRTreeFrag.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

$FieldInfo _DTMXRTreeFrag_FieldInfo_[] = {
	{"m_dtm", "Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PRIVATE, $field(DTMXRTreeFrag, m_dtm)},
	{"m_dtmIdentity", "I", nullptr, $PRIVATE, $field(DTMXRTreeFrag, m_dtmIdentity)},
	{"m_xctxt", "Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $PRIVATE, $field(DTMXRTreeFrag, m_xctxt)},
	{}
};

$MethodInfo _DTMXRTreeFrag_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xpath/internal/XPathContext;)V", nullptr, $PUBLIC, $method(DTMXRTreeFrag, init$, void, int32_t, $XPathContext*)},
	{"destruct", "()V", nullptr, $PUBLIC | $FINAL, $method(DTMXRTreeFrag, destruct, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(DTMXRTreeFrag, equals, bool, Object$*)},
	{"getDTM", "()Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $FINAL, $method(DTMXRTreeFrag, getDTM, $DTM*)},
	{"getDTMIdentity", "()I", nullptr, $PUBLIC | $FINAL, $method(DTMXRTreeFrag, getDTMIdentity, int32_t)},
	{"getXPathContext", "()Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $FINAL, $method(DTMXRTreeFrag, getXPathContext, $XPathContext*)},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(DTMXRTreeFrag, hashCode, int32_t)},
	{}
};

$ClassInfo _DTMXRTreeFrag_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.objects.DTMXRTreeFrag",
	"java.lang.Object",
	nullptr,
	_DTMXRTreeFrag_FieldInfo_,
	_DTMXRTreeFrag_MethodInfo_
};

$Object* allocate$DTMXRTreeFrag($Class* clazz) {
	return $of($alloc(DTMXRTreeFrag));
}

void DTMXRTreeFrag::init$(int32_t dtmIdentity, $XPathContext* xctxt) {
	this->m_dtmIdentity = $DTM::NULL;
	$set(this, m_xctxt, xctxt);
	this->m_dtmIdentity = dtmIdentity;
	$set(this, m_dtm, $nc(xctxt)->getDTM(dtmIdentity));
}

void DTMXRTreeFrag::destruct() {
	$set(this, m_dtm, nullptr);
	$set(this, m_xctxt, nullptr);
}

$DTM* DTMXRTreeFrag::getDTM() {
	return this->m_dtm;
}

int32_t DTMXRTreeFrag::getDTMIdentity() {
	return this->m_dtmIdentity;
}

$XPathContext* DTMXRTreeFrag::getXPathContext() {
	return this->m_xctxt;
}

int32_t DTMXRTreeFrag::hashCode() {
	return this->m_dtmIdentity;
}

bool DTMXRTreeFrag::equals(Object$* obj) {
	if ($instanceOf(DTMXRTreeFrag, obj)) {
		return (this->m_dtmIdentity == $nc(($cast(DTMXRTreeFrag, obj)))->getDTMIdentity());
	}
	return false;
}

DTMXRTreeFrag::DTMXRTreeFrag() {
}

$Class* DTMXRTreeFrag::load$($String* name, bool initialize) {
	$loadClass(DTMXRTreeFrag, name, initialize, &_DTMXRTreeFrag_ClassInfo_, allocate$DTMXRTreeFrag);
	return class$;
}

$Class* DTMXRTreeFrag::class$ = nullptr;

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com