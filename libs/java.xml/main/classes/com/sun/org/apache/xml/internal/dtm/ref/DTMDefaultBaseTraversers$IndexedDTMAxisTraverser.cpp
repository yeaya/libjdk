#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$IndexedDTMAxisTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/ExpandedNameTable.h>
#include <jcpp.h>

#undef ELEMENT
#undef NULL

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $ExpandedNameTable = ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$IndexedDTMAxisTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$IndexedDTMAxisTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"axisHasBeenProcessed", "(I)Z", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(DTMDefaultBaseTraversers$IndexedDTMAxisTraverser, axisHasBeenProcessed, bool, int32_t)},
	{"getNextIndexed", "(III)I", nullptr, $PROTECTED, $virtualMethod(DTMDefaultBaseTraversers$IndexedDTMAxisTraverser, getNextIndexed, int32_t, int32_t, int32_t, int32_t)},
	{"isAfterAxis", "(II)Z", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(DTMDefaultBaseTraversers$IndexedDTMAxisTraverser, isAfterAxis, bool, int32_t, int32_t)},
	{"isIndexed", "(I)Z", nullptr, $PROTECTED | $FINAL, $method(DTMDefaultBaseTraversers$IndexedDTMAxisTraverser, isIndexed, bool, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$IndexedDTMAxisTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "IndexedDTMAxisTraverser", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$IndexedDTMAxisTraverser",
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$IndexedDTMAxisTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$IndexedDTMAxisTraverser));
}

void DTMDefaultBaseTraversers$IndexedDTMAxisTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMAxisTraverser::init$();
}

bool DTMDefaultBaseTraversers$IndexedDTMAxisTraverser::isIndexed(int32_t expandedTypeID) {
	return (this->this$0->m_indexing && $ExpandedNameTable::ELEMENT == $nc(this->this$0->m_expandedNameTable)->getType(expandedTypeID));
}

int32_t DTMDefaultBaseTraversers$IndexedDTMAxisTraverser::getNextIndexed(int32_t axisRoot, int32_t nextPotential, int32_t expandedTypeID) {
	int32_t nsIndex = $nc(this->this$0->m_expandedNameTable)->getNamespaceID(expandedTypeID);
	int32_t lnIndex = $nc(this->this$0->m_expandedNameTable)->getLocalNameID(expandedTypeID);
	while (true) {
		int32_t next = this->this$0->findElementFromIndex(nsIndex, lnIndex, nextPotential);
		if (-2 != next) {
			if (isAfterAxis(axisRoot, next)) {
				return -1;
			}
			return next;
		} else if (axisHasBeenProcessed(axisRoot)) {
			break;
		}
		this->this$0->nextNode();
	}
	return $DTM::NULL;
}

DTMDefaultBaseTraversers$IndexedDTMAxisTraverser::DTMDefaultBaseTraversers$IndexedDTMAxisTraverser() {
}

$Class* DTMDefaultBaseTraversers$IndexedDTMAxisTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$IndexedDTMAxisTraverser, name, initialize, &_DTMDefaultBaseTraversers$IndexedDTMAxisTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$IndexedDTMAxisTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$IndexedDTMAxisTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com