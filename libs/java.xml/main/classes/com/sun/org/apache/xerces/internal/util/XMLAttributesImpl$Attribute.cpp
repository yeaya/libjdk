#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute.h>

#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <jcpp.h>

using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
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
						namespace util {

$FieldInfo _XMLAttributesImpl$Attribute_FieldInfo_[] = {
	{"name", "Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $FINAL, $field(XMLAttributesImpl$Attribute, name)},
	{"type", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLAttributesImpl$Attribute, type)},
	{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLAttributesImpl$Attribute, value)},
	{"xmlValue", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PUBLIC, $field(XMLAttributesImpl$Attribute, xmlValue)},
	{"nonNormalizedValue", "Ljava/lang/String;", nullptr, $PUBLIC, $field(XMLAttributesImpl$Attribute, nonNormalizedValue)},
	{"specified", "Z", nullptr, $PUBLIC, $field(XMLAttributesImpl$Attribute, specified)},
	{"augs", "Lcom/sun/org/apache/xerces/internal/xni/Augmentations;", nullptr, $PUBLIC, $field(XMLAttributesImpl$Attribute, augs)},
	{"next", "Lcom/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute;", nullptr, $PUBLIC, $field(XMLAttributesImpl$Attribute, next)},
	{}
};

$MethodInfo _XMLAttributesImpl$Attribute_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(XMLAttributesImpl$Attribute, init$, void)},
	{}
};

$InnerClassInfo _XMLAttributesImpl$Attribute_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl$Attribute", "com.sun.org.apache.xerces.internal.util.XMLAttributesImpl", "Attribute", $STATIC},
	{}
};

$ClassInfo _XMLAttributesImpl$Attribute_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl$Attribute",
	"java.lang.Object",
	nullptr,
	_XMLAttributesImpl$Attribute_FieldInfo_,
	_XMLAttributesImpl$Attribute_MethodInfo_,
	nullptr,
	nullptr,
	_XMLAttributesImpl$Attribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl"
};

$Object* allocate$XMLAttributesImpl$Attribute($Class* clazz) {
	return $of($alloc(XMLAttributesImpl$Attribute));
}

void XMLAttributesImpl$Attribute::init$() {
	$set(this, name, $new($QName));
	$set(this, augs, $new($AugmentationsImpl));
}

XMLAttributesImpl$Attribute::XMLAttributesImpl$Attribute() {
}

$Class* XMLAttributesImpl$Attribute::load$($String* name, bool initialize) {
	$loadClass(XMLAttributesImpl$Attribute, name, initialize, &_XMLAttributesImpl$Attribute_ClassInfo_, allocate$XMLAttributesImpl$Attribute);
	return class$;
}

$Class* XMLAttributesImpl$Attribute::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com