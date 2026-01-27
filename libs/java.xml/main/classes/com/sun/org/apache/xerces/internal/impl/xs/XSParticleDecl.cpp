#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaSymbols.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTerm.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef EMPTY_LIST
#undef OCCURRENCE_UNBOUNDED
#undef PARTICLE
#undef PARTICLE_ELEMENT
#undef PARTICLE_EMPTY
#undef PARTICLE_MODELGROUP
#undef PARTICLE_ONE_OR_MORE
#undef PARTICLE_WILDCARD
#undef PARTICLE_ZERO_OR_MORE
#undef PARTICLE_ZERO_OR_ONE

using $SchemaSymbols = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaSymbols;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTerm = ::com::sun::org::apache::xerces::internal::xs::XSTerm;
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

$FieldInfo _XSParticleDecl_FieldInfo_[] = {
	{"PARTICLE_EMPTY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSParticleDecl, PARTICLE_EMPTY)},
	{"PARTICLE_ELEMENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSParticleDecl, PARTICLE_ELEMENT)},
	{"PARTICLE_WILDCARD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSParticleDecl, PARTICLE_WILDCARD)},
	{"PARTICLE_MODELGROUP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSParticleDecl, PARTICLE_MODELGROUP)},
	{"PARTICLE_ZERO_OR_MORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSParticleDecl, PARTICLE_ZERO_OR_MORE)},
	{"PARTICLE_ZERO_OR_ONE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSParticleDecl, PARTICLE_ZERO_OR_ONE)},
	{"PARTICLE_ONE_OR_MORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSParticleDecl, PARTICLE_ONE_OR_MORE)},
	{"fType", "S", nullptr, $PUBLIC, $field(XSParticleDecl, fType)},
	{"fValue", "Lcom/sun/org/apache/xerces/internal/xs/XSTerm;", nullptr, $PUBLIC, $field(XSParticleDecl, fValue)},
	{"fMinOccurs", "I", nullptr, $PUBLIC, $field(XSParticleDecl, fMinOccurs)},
	{"fMaxOccurs", "I", nullptr, $PUBLIC, $field(XSParticleDecl, fMaxOccurs)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSParticleDecl, fAnnotations)},
	{"fDescription", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XSParticleDecl, fDescription)},
	{}
};

$MethodInfo _XSParticleDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSParticleDecl, init$, void)},
	{"appendParticle", "(Ljava/lang/StringBuffer;)V", nullptr, 0, $virtualMethod(XSParticleDecl, appendParticle, void, $StringBuffer*)},
	{"emptiable", "()Z", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, emptiable, bool)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, getAnnotations, $XSObjectList*)},
	{"getMaxOccurs", "()I", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, getMaxOccurs, int32_t)},
	{"getMaxOccursUnbounded", "()Z", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, getMaxOccursUnbounded, bool)},
	{"getMinOccurs", "()I", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, getMinOccurs, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, getNamespaceItem, $XSNamespaceItem*)},
	{"getTerm", "()Lcom/sun/org/apache/xerces/internal/xs/XSTerm;", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, getTerm, $XSTerm*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, getType, int16_t)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, isEmpty, bool)},
	{"makeClone", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, makeClone, XSParticleDecl*)},
	{"maxEffectiveTotalRange", "()I", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, maxEffectiveTotalRange, int32_t)},
	{"minEffectiveTotalRange", "()I", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, minEffectiveTotalRange, int32_t)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, reset, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSParticleDecl, toString, $String*)},
	{}
};

$ClassInfo _XSParticleDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSParticleDecl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSParticle",
	_XSParticleDecl_FieldInfo_,
	_XSParticleDecl_MethodInfo_
};

$Object* allocate$XSParticleDecl($Class* clazz) {
	return $of($alloc(XSParticleDecl));
}

void XSParticleDecl::init$() {
	this->fType = XSParticleDecl::PARTICLE_EMPTY;
	$set(this, fValue, nullptr);
	this->fMinOccurs = 1;
	this->fMaxOccurs = 1;
	$set(this, fAnnotations, nullptr);
	$set(this, fDescription, nullptr);
}

XSParticleDecl* XSParticleDecl::makeClone() {
	$var(XSParticleDecl, particle, $new(XSParticleDecl));
	particle->fType = this->fType;
	particle->fMinOccurs = this->fMinOccurs;
	particle->fMaxOccurs = this->fMaxOccurs;
	$set(particle, fDescription, this->fDescription);
	$set(particle, fValue, this->fValue);
	$set(particle, fAnnotations, this->fAnnotations);
	return particle;
}

bool XSParticleDecl::emptiable() {
	return minEffectiveTotalRange() == 0;
}

bool XSParticleDecl::isEmpty() {
	if (this->fType == XSParticleDecl::PARTICLE_EMPTY) {
		return true;
	}
	if (this->fType == XSParticleDecl::PARTICLE_ELEMENT || this->fType == XSParticleDecl::PARTICLE_WILDCARD) {
		return false;
	}
	return $nc(($cast($XSModelGroupImpl, this->fValue)))->isEmpty();
}

int32_t XSParticleDecl::minEffectiveTotalRange() {
	if (this->fType == XSParticleDecl::PARTICLE_EMPTY) {
		return 0;
	}
	if (this->fType == XSParticleDecl::PARTICLE_MODELGROUP) {
		return $nc(($cast($XSModelGroupImpl, this->fValue)))->minEffectiveTotalRange() * this->fMinOccurs;
	}
	return this->fMinOccurs;
}

int32_t XSParticleDecl::maxEffectiveTotalRange() {
	if (this->fType == XSParticleDecl::PARTICLE_EMPTY) {
		return 0;
	}
	if (this->fType == XSParticleDecl::PARTICLE_MODELGROUP) {
		int32_t max = $nc(($cast($XSModelGroupImpl, this->fValue)))->maxEffectiveTotalRange();
		if (max == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
			return $SchemaSymbols::OCCURRENCE_UNBOUNDED;
		}
		if (max != 0 && this->fMaxOccurs == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
			return $SchemaSymbols::OCCURRENCE_UNBOUNDED;
		}
		return max * this->fMaxOccurs;
	}
	return this->fMaxOccurs;
}

$String* XSParticleDecl::toString() {
	if (this->fDescription == nullptr) {
		$var($StringBuffer, buffer, $new($StringBuffer));
		appendParticle(buffer);
		if (!(this->fMinOccurs == 0 && this->fMaxOccurs == 0 || this->fMinOccurs == 1 && this->fMaxOccurs == 1)) {
			buffer->append(u'{')->append(this->fMinOccurs);
			if (this->fMaxOccurs == $SchemaSymbols::OCCURRENCE_UNBOUNDED) {
				buffer->append("-UNBOUNDED"_s);
			} else if (this->fMinOccurs != this->fMaxOccurs) {
				buffer->append(u'-')->append(this->fMaxOccurs);
			}
			buffer->append(u'}');
		}
		$set(this, fDescription, buffer->toString());
	}
	return this->fDescription;
}

void XSParticleDecl::appendParticle($StringBuffer* buffer) {
	$useLocalCurrentObjectStackCache();
	switch (this->fType) {
	case XSParticleDecl::PARTICLE_EMPTY:
		{
			$nc(buffer)->append("EMPTY"_s);
			break;
		}
	case XSParticleDecl::PARTICLE_ELEMENT:
		{
			$nc(buffer)->append($($nc($of(this->fValue))->toString()));
			break;
		}
	case XSParticleDecl::PARTICLE_WILDCARD:
		{
			$nc(buffer)->append(u'(');
			$nc(buffer)->append($($nc($of(this->fValue))->toString()));
			$nc(buffer)->append(u')');
			break;
		}
	case XSParticleDecl::PARTICLE_MODELGROUP:
		{
			$nc(buffer)->append($($nc($of(this->fValue))->toString()));
			break;
		}
	}
}

void XSParticleDecl::reset() {
	this->fType = XSParticleDecl::PARTICLE_EMPTY;
	$set(this, fValue, nullptr);
	this->fMinOccurs = 1;
	this->fMaxOccurs = 1;
	$set(this, fDescription, nullptr);
	$set(this, fAnnotations, nullptr);
}

int16_t XSParticleDecl::getType() {
	return $XSConstants::PARTICLE;
}

$String* XSParticleDecl::getName() {
	return nullptr;
}

$String* XSParticleDecl::getNamespace() {
	return nullptr;
}

int32_t XSParticleDecl::getMinOccurs() {
	return this->fMinOccurs;
}

bool XSParticleDecl::getMaxOccursUnbounded() {
	return this->fMaxOccurs == $SchemaSymbols::OCCURRENCE_UNBOUNDED;
}

int32_t XSParticleDecl::getMaxOccurs() {
	return this->fMaxOccurs;
}

$XSTerm* XSParticleDecl::getTerm() {
	return this->fValue;
}

$XSNamespaceItem* XSParticleDecl::getNamespaceItem() {
	return nullptr;
}

$XSObjectList* XSParticleDecl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

XSParticleDecl::XSParticleDecl() {
}

$Class* XSParticleDecl::load$($String* name, bool initialize) {
	$loadClass(XSParticleDecl, name, initialize, &_XSParticleDecl_ClassInfo_, allocate$XSParticleDecl);
	return class$;
}

$Class* XSParticleDecl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com