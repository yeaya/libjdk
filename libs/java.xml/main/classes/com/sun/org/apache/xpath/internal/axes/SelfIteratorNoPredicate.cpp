#include <com/sun/org/apache/xpath/internal/axes/SelfIteratorNoPredicate.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <jcpp.h>

#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $Compiler = ::com::sun::org::apache::xpath::internal::compiler::Compiler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

$FieldInfo _SelfIteratorNoPredicate_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SelfIteratorNoPredicate, serialVersionUID)},
	{}
};

$MethodInfo _SelfIteratorNoPredicate_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xpath/internal/compiler/Compiler;II)V", nullptr, 0, $method(SelfIteratorNoPredicate, init$, void, $Compiler*, int32_t, int32_t), "javax.xml.transform.TransformerException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SelfIteratorNoPredicate, init$, void), "javax.xml.transform.TransformerException"},
	{"asNode", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(SelfIteratorNoPredicate, asNode, int32_t, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"getLastPos", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)I", nullptr, $PUBLIC, $virtualMethod(SelfIteratorNoPredicate, getLastPos, int32_t, $XPathContext*)},
	{"nextNode", "()I", nullptr, $PUBLIC, $virtualMethod(SelfIteratorNoPredicate, nextNode, int32_t)},
	{}
};

$ClassInfo _SelfIteratorNoPredicate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.axes.SelfIteratorNoPredicate",
	"com.sun.org.apache.xpath.internal.axes.LocPathIterator",
	nullptr,
	_SelfIteratorNoPredicate_FieldInfo_,
	_SelfIteratorNoPredicate_MethodInfo_
};

$Object* allocate$SelfIteratorNoPredicate($Class* clazz) {
	return $of($alloc(SelfIteratorNoPredicate));
}

void SelfIteratorNoPredicate::init$($Compiler* compiler, int32_t opPos, int32_t analysis) {
	$LocPathIterator::init$(compiler, opPos, analysis, false);
}

void SelfIteratorNoPredicate::init$() {
	$LocPathIterator::init$(nullptr);
}

int32_t SelfIteratorNoPredicate::nextNode() {
	if (this->m_foundLast) {
		return $DTM::NULL;
	}
	int32_t next = 0;
	$var($DTM, dtm, this->m_cdtm);
	this->m_lastFetched = (next = ($DTM::NULL == this->m_lastFetched) ? this->m_context : $DTM::NULL);
	if ($DTM::NULL != next) {
		++this->m_pos;
		return next;
	} else {
		this->m_foundLast = true;
		return $DTM::NULL;
	}
}

int32_t SelfIteratorNoPredicate::asNode($XPathContext* xctxt) {
	return $nc(xctxt)->getCurrentNode();
}

int32_t SelfIteratorNoPredicate::getLastPos($XPathContext* xctxt) {
	return 1;
}

SelfIteratorNoPredicate::SelfIteratorNoPredicate() {
}

$Class* SelfIteratorNoPredicate::load$($String* name, bool initialize) {
	$loadClass(SelfIteratorNoPredicate, name, initialize, &_SelfIteratorNoPredicate_ClassInfo_, allocate$SelfIteratorNoPredicate);
	return class$;
}

$Class* SelfIteratorNoPredicate::class$ = nullptr;

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com