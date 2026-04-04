#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$XSFacetImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

#undef EMPTY_LIST
#undef FACET

using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

void XSSimpleTypeDecl$XSFacetImpl::init$(int16_t kind, $String* svalue, int32_t ivalue, Object$* avalue, bool fixed, $XSAnnotation* annotation) {
	this->kind = kind;
	$set(this, svalue, svalue);
	this->ivalue = ivalue;
	$set(this, avalue, avalue);
	this->fixed = fixed;
	if (annotation != nullptr) {
		$set(this, annotations, $new($XSObjectListImpl));
		$cast($XSObjectListImpl, this->annotations)->addXSObject(annotation);
	} else {
		$init($XSObjectListImpl);
		$set(this, annotations, $XSObjectListImpl::EMPTY_LIST);
	}
}

$XSAnnotation* XSSimpleTypeDecl$XSFacetImpl::getAnnotation() {
	return $cast($XSAnnotation, $nc(this->annotations)->item(0));
}

$XSObjectList* XSSimpleTypeDecl$XSFacetImpl::getAnnotations() {
	return this->annotations;
}

int16_t XSSimpleTypeDecl$XSFacetImpl::getFacetKind() {
	return this->kind;
}

$String* XSSimpleTypeDecl$XSFacetImpl::getLexicalFacetValue() {
	return this->svalue;
}

$Object* XSSimpleTypeDecl$XSFacetImpl::getActualFacetValue() {
	if (this->avalue == nullptr) {
		if (this->kind == 16) {
			$set(this, avalue, this->svalue);
		} else {
			$set(this, avalue, $BigInteger::valueOf(this->ivalue));
		}
	}
	return this->avalue;
}

int32_t XSSimpleTypeDecl$XSFacetImpl::getIntFacetValue() {
	return this->ivalue;
}

bool XSSimpleTypeDecl$XSFacetImpl::getFixed() {
	return this->fixed;
}

$String* XSSimpleTypeDecl$XSFacetImpl::getName() {
	return nullptr;
}

$String* XSSimpleTypeDecl$XSFacetImpl::getNamespace() {
	return nullptr;
}

$XSNamespaceItem* XSSimpleTypeDecl$XSFacetImpl::getNamespaceItem() {
	return nullptr;
}

int16_t XSSimpleTypeDecl$XSFacetImpl::getType() {
	return $XSConstants::FACET;
}

XSSimpleTypeDecl$XSFacetImpl::XSSimpleTypeDecl$XSFacetImpl() {
}

$Class* XSSimpleTypeDecl$XSFacetImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kind", "S", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, kind)},
		{"svalue", "Ljava/lang/String;", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, svalue)},
		{"ivalue", "I", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, ivalue)},
		{"avalue", "Ljava/lang/Object;", nullptr, 0, $field(XSSimpleTypeDecl$XSFacetImpl, avalue)},
		{"fixed", "Z", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, fixed)},
		{"annotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSFacetImpl, annotations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(SLjava/lang/String;ILjava/lang/Object;ZLcom/sun/org/apache/xerces/internal/xs/XSAnnotation;)V", nullptr, $PUBLIC, $method(XSSimpleTypeDecl$XSFacetImpl, init$, void, int16_t, $String*, int32_t, Object$*, bool, $XSAnnotation*)},
		{"getActualFacetValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getActualFacetValue, $Object*)},
		{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getAnnotation, $XSAnnotation*)},
		{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getAnnotations, $XSObjectList*)},
		{"getFacetKind", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getFacetKind, int16_t)},
		{"getFixed", "()Z", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getFixed, bool)},
		{"getIntFacetValue", "()I", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getIntFacetValue, int32_t)},
		{"getLexicalFacetValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getLexicalFacetValue, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getName, $String*)},
		{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getNamespace, $String*)},
		{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getNamespaceItem, $XSNamespaceItem*)},
		{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSFacetImpl, getType, int16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSFacetImpl", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "XSFacetImpl", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSFacetImpl",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.xs.XSFacet",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl"
	};
	$loadClass(XSSimpleTypeDecl$XSFacetImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSSimpleTypeDecl$XSFacetImpl);
	});
	return class$;
}

$Class* XSSimpleTypeDecl$XSFacetImpl::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com