#include <com/sun/org/apache/xpath/internal/functions/FuncId.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/utils/StringVector.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/functions/FunctionOneArg.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

#undef CLASS_NODESET
#undef CLASS_NULL
#undef ER_CONTEXT_HAS_NO_OWNERDOC
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $StringVector = ::com::sun::org::apache::xml::internal::utils::StringVector;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $NodeSetDTM = ::com::sun::org::apache::xpath::internal::NodeSetDTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $FunctionOneArg = ::com::sun::org::apache::xpath::internal::functions::FunctionOneArg;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {

$FieldInfo _FuncId_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FuncId, serialVersionUID)},
	{}
};

$MethodInfo _FuncId_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FuncId, init$, void)},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(FuncId, execute, $XObject*, $XPathContext*), "javax.xml.transform.TransformerException"},
	{"getNodesByID", "(Lcom/sun/org/apache/xpath/internal/XPathContext;ILjava/lang/String;Lcom/sun/org/apache/xml/internal/utils/StringVector;Lcom/sun/org/apache/xpath/internal/NodeSetDTM;Z)Lcom/sun/org/apache/xml/internal/utils/StringVector;", nullptr, $PRIVATE, $method(FuncId, getNodesByID, $StringVector*, $XPathContext*, int32_t, $String*, $StringVector*, $NodeSetDTM*, bool)},
	{}
};

$ClassInfo _FuncId_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.functions.FuncId",
	"com.sun.org.apache.xpath.internal.functions.FunctionOneArg",
	nullptr,
	_FuncId_FieldInfo_,
	_FuncId_MethodInfo_
};

$Object* allocate$FuncId($Class* clazz) {
	return $of($alloc(FuncId));
}

void FuncId::init$() {
	$FunctionOneArg::init$();
}

$StringVector* FuncId::getNodesByID($XPathContext* xctxt, int32_t docContext, $String* refval, $StringVector* usedrefs$renamed, $NodeSetDTM* nodeSet, bool mayBeMore) {
	$useLocalCurrentObjectStackCache();
	$var($StringVector, usedrefs, usedrefs$renamed);
	if (nullptr != refval) {
		$var($String, ref, nullptr);
		$var($StringTokenizer, tokenizer, $new($StringTokenizer, refval));
		bool hasMore = tokenizer->hasMoreTokens();
		$var($DTM, dtm, $nc(xctxt)->getDTM(docContext));
		while (hasMore) {
			$assign(ref, tokenizer->nextToken());
			hasMore = tokenizer->hasMoreTokens();
			if ((nullptr != usedrefs) && usedrefs->contains(ref)) {
				$assign(ref, nullptr);
				continue;
			}
			int32_t node = $nc(dtm)->getElementById(ref);
			if ($DTM::NULL != node) {
				$nc(nodeSet)->addNodeInDocOrder(node, xctxt);
			}
			if ((nullptr != ref) && (hasMore || mayBeMore)) {
				if (nullptr == usedrefs) {
					$assign(usedrefs, $new($StringVector));
				}
				$nc(usedrefs)->addElement(ref);
			}
		}
	}
	return usedrefs;
}

$XObject* FuncId::execute($XPathContext* xctxt) {
	$useLocalCurrentObjectStackCache();
	int32_t context = $nc(xctxt)->getCurrentNode();
	$var($DTM, dtm, xctxt->getDTM(context));
	int32_t docContext = $nc(dtm)->getDocument();
	if ($DTM::NULL == docContext) {
		$init($XPATHErrorResources);
		error(xctxt, $XPATHErrorResources::ER_CONTEXT_HAS_NO_OWNERDOC, nullptr);
	}
	$var($XObject, arg, $nc(this->m_arg0)->execute(xctxt));
	int32_t argType = $nc(arg)->getType();
	$var($XNodeSet, nodes, $new($XNodeSet, $(xctxt->getDTMManager())));
	$var($NodeSetDTM, nodeSet, nodes->mutableNodeset());
	if ($XObject::CLASS_NODESET == argType) {
		$var($DTMIterator, ni, arg->iter());
		$var($StringVector, usedrefs, nullptr);
		int32_t pos = $nc(ni)->nextNode();
		while ($DTM::NULL != pos) {
			$var($DTM, ndtm, ni->getDTM(pos));
			$var($String, refval, $nc($($nc(ndtm)->getStringValue(pos)))->toString());
			pos = ni->nextNode();
			$assign(usedrefs, getNodesByID(xctxt, docContext, refval, usedrefs, nodeSet, $DTM::NULL != pos));
		}
	} else if ($XObject::CLASS_NULL == argType) {
		return nodes;
	} else {
		$var($String, refval, arg->str());
		getNodesByID(xctxt, docContext, refval, nullptr, nodeSet, false);
	}
	return nodes;
}

FuncId::FuncId() {
}

$Class* FuncId::load$($String* name, bool initialize) {
	$loadClass(FuncId, name, initialize, &_FuncId_ClassInfo_, allocate$FuncId);
	return class$;
}

$Class* FuncId::class$ = nullptr;

						} // functions
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com