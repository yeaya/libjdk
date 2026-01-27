#include <com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSObjectListImpl.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroup.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <jcpp.h>

#undef EMPTY_LIST
#undef MODEL_GROUP_DEFINITION

using $XSObjectListImpl = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSObjectListImpl;
using $XSAnnotation = ::com::sun::org::apache::xerces::internal::xs::XSAnnotation;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSModelGroup = ::com::sun::org::apache::xerces::internal::xs::XSModelGroup;
using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSGroupDecl_FieldInfo_[] = {
	{"fName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSGroupDecl, fName)},
	{"fTargetNamespace", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XSGroupDecl, fTargetNamespace)},
	{"fModelGroup", "Lcom/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl;", nullptr, $PUBLIC, $field(XSGroupDecl, fModelGroup)},
	{"fAnnotations", "Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $field(XSGroupDecl, fAnnotations)},
	{"fNamespaceItem", "Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PRIVATE, $field(XSGroupDecl, fNamespaceItem)},
	{}
};

$MethodInfo _XSGroupDecl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSGroupDecl, init$, void)},
	{"getAnnotation", "()Lcom/sun/org/apache/xerces/internal/xs/XSAnnotation;", nullptr, $PUBLIC, $virtualMethod(XSGroupDecl, getAnnotation, $XSAnnotation*)},
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC, $virtualMethod(XSGroupDecl, getAnnotations, $XSObjectList*)},
	{"getModelGroup", "()Lcom/sun/org/apache/xerces/internal/xs/XSModelGroup;", nullptr, $PUBLIC, $virtualMethod(XSGroupDecl, getModelGroup, $XSModelGroup*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSGroupDecl, getName, $String*)},
	{"getNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSGroupDecl, getNamespace, $String*)},
	{"getNamespaceItem", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC, $virtualMethod(XSGroupDecl, getNamespaceItem, $XSNamespaceItem*)},
	{"getType", "()S", nullptr, $PUBLIC, $virtualMethod(XSGroupDecl, getType, int16_t)},
	{"setNamespaceItem", "(Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;)V", nullptr, 0, $virtualMethod(XSGroupDecl, setNamespaceItem, void, $XSNamespaceItem*)},
	{}
};

$ClassInfo _XSGroupDecl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSGroupDecl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSModelGroupDefinition",
	_XSGroupDecl_FieldInfo_,
	_XSGroupDecl_MethodInfo_
};

$Object* allocate$XSGroupDecl($Class* clazz) {
	return $of($alloc(XSGroupDecl));
}

void XSGroupDecl::init$() {
	$set(this, fName, nullptr);
	$set(this, fTargetNamespace, nullptr);
	$set(this, fModelGroup, nullptr);
	$set(this, fAnnotations, nullptr);
	$set(this, fNamespaceItem, nullptr);
}

int16_t XSGroupDecl::getType() {
	return $XSConstants::MODEL_GROUP_DEFINITION;
}

$String* XSGroupDecl::getName() {
	return this->fName;
}

$String* XSGroupDecl::getNamespace() {
	return this->fTargetNamespace;
}

$XSModelGroup* XSGroupDecl::getModelGroup() {
	return this->fModelGroup;
}

$XSAnnotation* XSGroupDecl::getAnnotation() {
	return (this->fAnnotations != nullptr) ? $cast($XSAnnotation, $nc(this->fAnnotations)->item(0)) : ($XSAnnotation*)nullptr;
}

$XSObjectList* XSGroupDecl::getAnnotations() {
	$init($XSObjectListImpl);
	return (this->fAnnotations != nullptr) ? this->fAnnotations : static_cast<$XSObjectList*>($XSObjectListImpl::EMPTY_LIST);
}

$XSNamespaceItem* XSGroupDecl::getNamespaceItem() {
	return this->fNamespaceItem;
}

void XSGroupDecl::setNamespaceItem($XSNamespaceItem* namespaceItem) {
	$set(this, fNamespaceItem, namespaceItem);
}

XSGroupDecl::XSGroupDecl() {
}

$Class* XSGroupDecl::load$($String* name, bool initialize) {
	$loadClass(XSGroupDecl, name, initialize, &_XSGroupDecl_ClassInfo_, allocate$XSGroupDecl);
	return class$;
}

$Class* XSGroupDecl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com