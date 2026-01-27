#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>

#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSElementDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSIDCDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItemList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNotationDeclaration.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <jcpp.h>

using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSAttributeDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSAttributeDeclaration;
using $XSAttributeGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSAttributeGroupDefinition;
using $XSElementDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSElementDeclaration;
using $XSIDCDefinition = ::com::sun::org::apache::xerces::internal::xs::XSIDCDefinition;
using $XSModelGroupDefinition = ::com::sun::org::apache::xerces::internal::xs::XSModelGroupDefinition;
using $XSNamedMap = ::com::sun::org::apache::xerces::internal::xs::XSNamedMap;
using $XSNamespaceItemList = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItemList;
using $XSNotationDeclaration = ::com::sun::org::apache::xerces::internal::xs::XSNotationDeclaration;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSModel_MethodInfo_[] = {
	{"getAnnotations", "()Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getAnnotations, $XSObjectList*)},
	{"getAttributeDeclaration", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getAttributeDeclaration, $XSAttributeDeclaration*, $String*, $String*)},
	{"getAttributeGroup", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSAttributeGroupDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getAttributeGroup, $XSAttributeGroupDefinition*, $String*, $String*)},
	{"getComponents", "(S)Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getComponents, $XSNamedMap*, int16_t)},
	{"getComponentsByNamespace", "(SLjava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSNamedMap;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getComponentsByNamespace, $XSNamedMap*, int16_t, $String*)},
	{"getElementDeclaration", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getElementDeclaration, $XSElementDeclaration*, $String*, $String*)},
	{"getIDCDefinition", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSIDCDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getIDCDefinition, $XSIDCDefinition*, $String*, $String*)},
	{"getModelGroupDefinition", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSModelGroupDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getModelGroupDefinition, $XSModelGroupDefinition*, $String*, $String*)},
	{"getNamespaceItems", "()Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItemList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getNamespaceItems, $XSNamespaceItemList*)},
	{"getNamespaces", "()Lcom/sun/org/apache/xerces/internal/xs/StringList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getNamespaces, $StringList*)},
	{"getNotationDeclaration", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSNotationDeclaration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getNotationDeclaration, $XSNotationDeclaration*, $String*, $String*)},
	{"getSubstitutionGroup", "(Lcom/sun/org/apache/xerces/internal/xs/XSElementDeclaration;)Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getSubstitutionGroup, $XSObjectList*, $XSElementDeclaration*)},
	{"getTypeDefinition", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSTypeDefinition;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSModel, getTypeDefinition, $XSTypeDefinition*, $String*, $String*)},
	{}
};

$ClassInfo _XSModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSModel",
	nullptr,
	nullptr,
	nullptr,
	_XSModel_MethodInfo_
};

$Object* allocate$XSModel($Class* clazz) {
	return $of($alloc(XSModel));
}

$Class* XSModel::load$($String* name, bool initialize) {
	$loadClass(XSModel, name, initialize, &_XSModel_ClassInfo_, allocate$XSModel);
	return class$;
}

$Class* XSModel::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com