#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl$XSMVFacetImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>
#include <jcpp.h>

#undef EMPTY_LIST
#undef MULTIVALUE_FACET

using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ObjectList = ::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _XSSimpleTypeDecl$XSMVFacetImpl_FieldInfo_[] = {
	{"kind", "S", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSMVFacetImpl, kind)},
	{"annotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSMVFacetImpl, annotations)},
	{"svalues", "Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSMVFacetImpl, svalues)},
	{"avalues", "Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $FINAL, $field(XSSimpleTypeDecl$XSMVFacetImpl, avalues)},
	{}
};

$MethodInfo _XSSimpleTypeDecl$XSMVFacetImpl_MethodInfo_[] = {
	{"<init>", "(SLcom/sun/org/apache/xerces/internal/xs/StringList;Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)V", nullptr, $PUBLIC, $method(XSSimpleTypeDecl$XSMVFacetImpl, init$, void, int16_t, $StringList*, $ObjectList*, $XSObjectList*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSMVFacetImpl, getAnnotations, $XSObjectList*)},
	{"getEnumerationValues", "()Lcom/sun/org/apache/xerces/internal/xs/datatypes/ObjectList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSMVFacetImpl, getEnumerationValues, $ObjectList*)},
	{"getFacetKind", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSMVFacetImpl, getFacetKind, int16_t)},
	{"getLexicalFacetValues", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSMVFacetImpl, getLexicalFacetValues, $StringList*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSMVFacetImpl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSMVFacetImpl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSMVFacetImpl, getNamespaceItem, $XSNamespaceItem*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSSimpleTypeDecl$XSMVFacetImpl, getType, int16_t)},
	{}
};

$InnerClassInfo _XSSimpleTypeDecl$XSMVFacetImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSMVFacetImpl", "com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl", "XSMVFacetImpl", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XSSimpleTypeDecl$XSMVFacetImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl$XSMVFacetImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSMultiValueFacet",
	_XSSimpleTypeDecl$XSMVFacetImpl_FieldInfo_,
	_XSSimpleTypeDecl$XSMVFacetImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XSSimpleTypeDecl$XSMVFacetImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.XSSimpleTypeDecl"
};

$Object* allocate$XSSimpleTypeDecl$XSMVFacetImpl($Class* clazz) {
	return $of($alloc(XSSimpleTypeDecl$XSMVFacetImpl));
}

void XSSimpleTypeDecl$XSMVFacetImpl::init$(int16_t kind, $StringList* svalues, $ObjectList* avalues, $XSObjectList* annotations) {
	this->kind = kind;
	$set(this, svalues, svalues);
	$set(this, avalues, avalues);
	$init($XSObjectListImpl);
	$set(this, annotations, (annotations != nullptr) ? annotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST));
}

int16_t XSSimpleTypeDecl$XSMVFacetImpl::getFacetKind() {
	return this->kind;
}

$XSObjectList* XSSimpleTypeDecl$XSMVFacetImpl::getAnnotations() {
	return this->annotations;
}

$StringList* XSSimpleTypeDecl$XSMVFacetImpl::getLexicalFacetValues() {
	return this->svalues;
}

$ObjectList* XSSimpleTypeDecl$XSMVFacetImpl::getEnumerationValues() {
	return this->avalues;
}

$String* XSSimpleTypeDecl$XSMVFacetImpl::getName() {
	return nullptr;
}

$String* XSSimpleTypeDecl$XSMVFacetImpl::getNamespace() {
	return nullptr;
}

$XSNamespaceItem* XSSimpleTypeDecl$XSMVFacetImpl::getNamespaceItem() {
	return nullptr;
}

int16_t XSSimpleTypeDecl$XSMVFacetImpl::getType() {
	return $XSConstants::MULTIVALUE_FACET;
}

XSSimpleTypeDecl$XSMVFacetImpl::XSSimpleTypeDecl$XSMVFacetImpl() {
}

$Class* XSSimpleTypeDecl$XSMVFacetImpl::load$($String* name, bool initialize) {
	$loadClass(XSSimpleTypeDecl$XSMVFacetImpl, name, initialize, &_XSSimpleTypeDecl$XSMVFacetImpl_ClassInfo_, allocate$XSSimpleTypeDecl$XSMVFacetImpl);
	return class$;
}

$Class* XSSimpleTypeDecl$XSMVFacetImpl::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com