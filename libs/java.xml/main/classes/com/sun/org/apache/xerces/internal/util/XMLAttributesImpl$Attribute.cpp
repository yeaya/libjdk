#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl$Attribute.h>
#include <com/sun/org/apache/xerces/internal/util/AugmentationsImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLAttributesImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <jcpp.h>

using $AugmentationsImpl = ::com::sun::org::apache::xerces::internal::util::AugmentationsImpl;
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

void XMLAttributesImpl$Attribute::init$() {
	$set(this, name, $new($QName));
	$set(this, augs, $new($AugmentationsImpl));
}

XMLAttributesImpl$Attribute::XMLAttributesImpl$Attribute() {
}

$Class* XMLAttributesImpl$Attribute::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XMLAttributesImpl$Attribute, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl$Attribute", "com.sun.org.apache.xerces.internal.util.XMLAttributesImpl", "Attribute", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl$Attribute",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.util.XMLAttributesImpl"
	};
	$loadClass(XMLAttributesImpl$Attribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLAttributesImpl$Attribute);
	});
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