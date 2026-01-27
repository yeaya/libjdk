#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <jcpp.h>

using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$MethodInfo _XMLAttributes_MethodInfo_[] = {
	{"addAttribute", "(Lcom/sun/org/apache/xerces/internal/xni/QName;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, addAttribute, int32_t, $QName*, $String*, $String*)},
	{"getAugmentations", "(I)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getAugmentations, $Augmentations*, int32_t)},
	{"getAugmentations", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getAugmentations, $Augmentations*, $String*, $String*)},
	{"getAugmentations", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getAugmentations, $Augmentations*, $String*)},
	{"getIndex", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getIndex, int32_t, $String*)},
	{"getIndex", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getIndex, int32_t, $String*, $String*)},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getLength, int32_t)},
	{"getLocalName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getLocalName, $String*, int32_t)},
	{"getName", "(ILcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getName, void, int32_t, $QName*)},
	{"getNonNormalizedValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getNonNormalizedValue, $String*, int32_t)},
	{"getPrefix", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getPrefix, $String*, int32_t)},
	{"getQName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getQName, $String*, int32_t)},
	{"getQualifiedName", "(I)Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getQualifiedName, $QName*, int32_t)},
	{"getType", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getType, $String*, int32_t)},
	{"getType", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getType, $String*, $String*)},
	{"getType", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getType, $String*, $String*, $String*)},
	{"getURI", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getURI, $String*, int32_t)},
	{"getValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getValue, $String*, int32_t)},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getValue, $String*, $String*)},
	{"getValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, getValue, $String*, $String*, $String*)},
	{"isSpecified", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, isSpecified, bool, int32_t)},
	{"removeAllAttributes", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, removeAllAttributes, void)},
	{"removeAttributeAt", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, removeAttributeAt, void, int32_t)},
	{"setAugmentations", "(ILcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, setAugmentations, void, int32_t, $Augmentations*)},
	{"setName", "(ILcom/sun/org/apache/xerces/internal/xni/QName;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, setName, void, int32_t, $QName*)},
	{"setNonNormalizedValue", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, setNonNormalizedValue, void, int32_t, $String*)},
	{"setSpecified", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, setSpecified, void, int32_t, bool)},
	{"setType", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, setType, void, int32_t, $String*)},
	{"setValue", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, setValue, void, int32_t, $String*)},
	{"setValue", "(ILjava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLAttributes, setValue, void, int32_t, $String*, $XMLString*)},
	{}
};

$ClassInfo _XMLAttributes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.XMLAttributes",
	nullptr,
	nullptr,
	nullptr,
	_XMLAttributes_MethodInfo_
};

$Object* allocate$XMLAttributes($Class* clazz) {
	return $of($alloc(XMLAttributes));
}

$Class* XMLAttributes::load$($String* name, bool initialize) {
	$loadClass(XMLAttributes, name, initialize, &_XMLAttributes_ClassInfo_, allocate$XMLAttributes);
	return class$;
}

$Class* XMLAttributes::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com