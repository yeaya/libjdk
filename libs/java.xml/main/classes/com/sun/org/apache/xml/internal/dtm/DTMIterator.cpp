#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <jcpp.h>

#undef FILTER_ACCEPT
#undef FILTER_REJECT
#undef FILTER_SKIP

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$FieldInfo _DTMIterator_FieldInfo_[] = {
	{"FILTER_ACCEPT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMIterator, FILTER_ACCEPT)},
	{"FILTER_REJECT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMIterator, FILTER_REJECT)},
	{"FILTER_SKIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTMIterator, FILTER_SKIP)},
	{}
};

$MethodInfo _DTMIterator_MethodInfo_[] = {
	{"allowDetachToRelease", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, allowDetachToRelease, void, bool)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"cloneWithReset", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, cloneWithReset, DTMIterator*), "java.lang.CloneNotSupportedException"},
	{"detach", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, detach, void)},
	{"getAxis", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, getAxis, int32_t)},
	{"getCurrentNode", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, getCurrentNode, int32_t)},
	{"getCurrentPos", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, getCurrentPos, int32_t)},
	{"getDTM", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, getDTM, $DTM*, int32_t)},
	{"getDTMManager", "()Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, getDTMManager, $DTMManager*)},
	{"getExpandEntityReferences", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, getExpandEntityReferences, bool)},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, getLength, int32_t)},
	{"getRoot", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, getRoot, int32_t)},
	{"getWhatToShow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, getWhatToShow, int32_t)},
	{"isDocOrdered", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, isDocOrdered, bool)},
	{"isFresh", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, isFresh, bool)},
	{"isMutable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, isMutable, bool)},
	{"item", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, item, int32_t, int32_t)},
	{"nextNode", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, nextNode, int32_t)},
	{"previousNode", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, previousNode, int32_t)},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, reset, void)},
	{"runTo", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, runTo, void, int32_t)},
	{"setCurrentPos", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, setCurrentPos, void, int32_t)},
	{"setItem", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, setItem, void, int32_t, int32_t)},
	{"setRoot", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, setRoot, void, int32_t, Object$*)},
	{"setShouldCacheNodes", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMIterator, setShouldCacheNodes, void, bool)},
	{}
};

$ClassInfo _DTMIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTMIterator",
	nullptr,
	nullptr,
	_DTMIterator_FieldInfo_,
	_DTMIterator_MethodInfo_
};

$Object* allocate$DTMIterator($Class* clazz) {
	return $of($alloc(DTMIterator));
}

$Object* DTMIterator::clone() {
	 return this->$Object::clone();
}

$Class* DTMIterator::load$($String* name, bool initialize) {
	$loadClass(DTMIterator, name, initialize, &_DTMIterator_ClassInfo_, allocate$DTMIterator);
	return class$;
}

$Class* DTMIterator::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com