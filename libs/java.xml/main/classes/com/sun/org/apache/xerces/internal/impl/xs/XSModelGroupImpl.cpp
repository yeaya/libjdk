#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef COMPOSITOR_ALL
#undef COMPOSITOR_CHOICE
#undef COMPOSITOR_SEQUENCE
#undef EMPTY_LIST
#undef MODELGROUP_ALL
#undef MODELGROUP_CHOICE
#undef MODELGROUP_SEQUENCE
#undef MODEL_GROUP
#undef OCCURRENCE_UNBOUNDED

using $XSObjectArray = $Array<::com::sun::org::apache::xerces::internal::xs::XSObject>;
using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
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

$FieldInfo _XSModelGroupImpl_FieldInfo_[] = {
	{"MODELGROUP_CHOICE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSModelGroupImpl, MODELGROUP_CHOICE)},
	{"MODELGROUP_SEQUENCE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSModelGroupImpl, MODELGROUP_SEQUENCE)},
	{"MODELGROUP_ALL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSModelGroupImpl, MODELGROUP_ALL)},
	{"fCompositor", "S", nullptr, $PUBLIC, $field(XSModelGroupImpl, fCompositor)},
	{"fParticles", "[Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PUBLIC, $field(XSModelGroupImpl, fParticles)},
	{"fParticleCount", "I", nullptr, $PUBLIC, $field(XSModelGroupImpl, fParticleCount)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSModelGroupImpl, fAnnotations)},
	{"fDescription", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSModelGroupImpl, fDescription)},
	{}
};

$MethodInfo _XSModelGroupImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSModelGroupImpl, init$, void)},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, getAnnotation, $XSAnnotation*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, getAnnotations, $XSObjectList*)},
	{"getCompositor", "()S", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, getCompositor, int16_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, getNamespaceItem, $XSNamespaceItem*)},
	{"getParticles", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, getParticles, $XSObjectList*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, getType, int16_t)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, isEmpty, bool)},
	{"maxEffectiveTotalRange", "()I", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, maxEffectiveTotalRange, int32_t)},
	{"maxEffectiveTotalRangeAllSeq", "()I", nullptr, $PRIVATE, $method(XSModelGroupImpl, maxEffectiveTotalRangeAllSeq, int32_t)},
	{"maxEffectiveTotalRangeChoice", "()I", nullptr, $PRIVATE, $method(XSModelGroupImpl, maxEffectiveTotalRangeChoice, int32_t)},
	{"minEffectiveTotalRange", "()I", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, minEffectiveTotalRange, int32_t)},
	{"minEffectiveTotalRangeAllSeq", "()I", nullptr, $PRIVATE, $method(XSModelGroupImpl, minEffectiveTotalRangeAllSeq, int32_t)},
	{"minEffectiveTotalRangeChoice", "()I", nullptr, $PRIVATE, $method(XSModelGroupImpl, minEffectiveTotalRangeChoice, int32_t)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, reset, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSModelGroupImpl, toString, $String*)},
	{}
};

$ClassInfo _XSModelGroupImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSModelGroupImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSModelGroup",
	_XSModelGroupImpl_FieldInfo_,
	_XSModelGroupImpl_MethodInfo_
};

$Object* allocate$XSModelGroupImpl($Class* clazz) {
	return $of($alloc(XSModelGroupImpl));
}

void XSModelGroupImpl::init$() {
	$set(this, fParticles, nullptr);
	this->fParticleCount = 0;
	$set(this, fAnnotations, nullptr);
	$set(this, fDescription, nullptr);
}

bool XSModelGroupImpl::isEmpty() {
	for (int32_t i = 0; i < this->fParticleCount; ++i) {
		if (!$nc($nc(this->fParticles)->get(i))->isEmpty()) {
			return false;
		}
	}
	return true;
}

int32_t XSModelGroupImpl::minEffectiveTotalRange() {
	if (this->fCompositor == XSModelGroupImpl::MODELGROUP_CHOICE) {
		return minEffectiveTotalRangeChoice();
	} else {
		return minEffectiveTotalRangeAllSeq();
	}
}

int32_t XSModelGroupImpl::minEffectiveTotalRangeAllSeq() {
	int32_t total = 0;
	for (int32_t i = 0; i < this->fParticleCount; ++i) {
		total += $nc($nc(this->fParticles)->get(i))->minEffectiveTotalRange();
	}
	return total;
}

int32_t XSModelGroupImpl::minEffectiveTotalRangeChoice() {
	int32_t min = 0;
	int32_t one = 0;
	if (this->fParticleCount > 0) {
		min = $nc($nc(this->fParticles)->get(0))->minEffectiveTotalRange();
	}
	for (int32_t i = 1; i < this->fParticleCount; ++i) {
		one = $nc($nc(this->fParticles)->get(i))->minEffectiveTotalRange();
		if (one < min) {
			min = one;
		}
	}
	return min;
}

int32_t XSModelGroupImpl::maxEffectiveTotalRange() {
	if (this->fCompositor == XSModelGroupImpl::MODELGROUP_CHOICE) {
		return maxEffectiveTotalRangeChoice();
	} else {
		return maxEffectiveTotalRangeAllSeq();
	}
}

int32_t XSModelGroupImpl::maxEffectiveTotalRangeAllSeq() {
	int32_t total = 0;
	int32_t one = 0;
	for (int32_t i = 0; i < this->fParticleCount; ++i) {
		one = $nc($nc(this->fParticles)->get(i))->maxEffectiveTotalRange();
		if (one == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
			return $SchemaSymbols::OCCURRENCE_UNBOUNDED;
		}
		total += one;
	}
	return total;
}

int32_t XSModelGroupImpl::maxEffectiveTotalRangeChoice() {
	int32_t max = 0;
	int32_t one = 0;
	if (this->fParticleCount > 0) {
		max = $nc($nc(this->fParticles)->get(0))->maxEffectiveTotalRange();
		if (max == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
			return $SchemaSymbols::OCCURRENCE_UNBOUNDED;
		}
	}
	for (int32_t i = 1; i < this->fParticleCount; ++i) {
		one = $nc($nc(this->fParticles)->get(i))->maxEffectiveTotalRange();
		if (one == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
			return $SchemaSymbols::OCCURRENCE_UNBOUNDED;
		}
		if (one > max) {
			max = one;
		}
	}
	return max;
}

$String* XSModelGroupImpl::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->fDescription == nullptr) {
		$var($StringBuffer, buffer, $new($StringBuffer));
		if (this->fCompositor == XSModelGroupImpl::MODELGROUP_ALL) {
			buffer->append("all("_s);
		} else {
			buffer->append(u'(');
		}
		if (this->fParticleCount > 0) {
			buffer->append($($nc($nc(this->fParticles)->get(0))->toString()));
		}
		for (int32_t i = 1; i < this->fParticleCount; ++i) {
			if (this->fCompositor == XSModelGroupImpl::MODELGROUP_CHOICE) {
				buffer->append(u'|');
			} else {
				buffer->append(u',');
			}
			buffer->append($($nc($nc(this->fParticles)->get(i))->toString()));
		}
		buffer->append(u')');
		$set(this, fDescription, buffer->toString());
	}
	return this->fDescription;
}

void XSModelGroupImpl::reset() {
	this->fCompositor = XSModelGroupImpl::MODELGROUP_SEQUENCE;
	$set(this, fParticles, nullptr);
	this->fParticleCount = 0;
	$set(this, fDescription, nullptr);
	$set(this, fAnnotations, nullptr);
}

int16_t XSModelGroupImpl::getType() {
	return $XSConstants::MODEL_GROUP;
}

$String* XSModelGroupImpl::getName() {
	return nullptr;
}

$String* XSModelGroupImpl::getNamespace() {
	return nullptr;
}

int16_t XSModelGroupImpl::getCompositor() {
	if (this->fCompositor == XSModelGroupImpl::MODELGROUP_CHOICE) {
		return $XSModelGroup::COMPOSITOR_CHOICE;
	} else if (this->fCompositor == XSModelGroupImpl::MODELGROUP_SEQUENCE) {
		return $XSModelGroup::COMPOSITOR_SEQUENCE;
	} else {
		return $XSModelGroup::COMPOSITOR_ALL;
	}
}

$XSObjectList* XSModelGroupImpl::getParticles() {
	return $new($XSObjectListImpl, $fcast($XSObjectArray, this->fParticles), this->fParticleCount);
}

$XSAnnotation* XSModelGroupImpl::getAnnotation() {
	return (this->fAnnotations != nullptr) ? $cast($XSAnnotation, $nc(this->fAnnotations)->item(0)) : ($XSAnnotation*)nullptr;
}

$XSObjectList* XSModelGroupImpl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$XSNamespaceItem* XSModelGroupImpl::getNamespaceItem() {
	return nullptr;
}

XSModelGroupImpl::XSModelGroupImpl() {
}

$Class* XSModelGroupImpl::load$($String* name, bool initialize) {
	$loadClass(XSModelGroupImpl, name, initialize, &_XSModelGroupImpl_ClassInfo_, allocate$XSModelGroupImpl);
	return class$;
}

$Class* XSModelGroupImpl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com