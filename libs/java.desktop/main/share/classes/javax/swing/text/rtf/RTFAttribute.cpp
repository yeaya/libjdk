#include <javax/swing/text/rtf/RTFAttribute.h>

#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/rtf/RTFGenerator.h>
#include <jcpp.h>

#undef D_CHARACTER
#undef D_DOCUMENT
#undef D_META
#undef D_PARAGRAPH
#undef D_SECTION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $RTFGenerator = ::javax::swing::text::rtf::RTFGenerator;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFAttribute_FieldInfo_[] = {
	{"D_CHARACTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RTFAttribute, D_CHARACTER)},
	{"D_PARAGRAPH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RTFAttribute, D_PARAGRAPH)},
	{"D_SECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RTFAttribute, D_SECTION)},
	{"D_DOCUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RTFAttribute, D_DOCUMENT)},
	{"D_META", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RTFAttribute, D_META)},
	{}
};

$MethodInfo _RTFAttribute_MethodInfo_[] = {
	{"domain", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFAttribute, domain, int32_t)},
	{"rtfName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFAttribute, rtfName, $String*)},
	{"set", "(Ljavax/swing/text/MutableAttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFAttribute, set, bool, $MutableAttributeSet*)},
	{"set", "(Ljavax/swing/text/MutableAttributeSet;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFAttribute, set, bool, $MutableAttributeSet*, int32_t)},
	{"setDefault", "(Ljavax/swing/text/MutableAttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFAttribute, setDefault, bool, $MutableAttributeSet*)},
	{"swingName", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFAttribute, swingName, $Object*)},
	{"write", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/rtf/RTFGenerator;Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFAttribute, write, bool, $AttributeSet*, $RTFGenerator*, bool), "java.io.IOException"},
	{"writeValue", "(Ljava/lang/Object;Ljavax/swing/text/rtf/RTFGenerator;Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RTFAttribute, writeValue, bool, Object$*, $RTFGenerator*, bool), "java.io.IOException"},
	{}
};

$ClassInfo _RTFAttribute_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.text.rtf.RTFAttribute",
	nullptr,
	nullptr,
	_RTFAttribute_FieldInfo_,
	_RTFAttribute_MethodInfo_
};

$Object* allocate$RTFAttribute($Class* clazz) {
	return $of($alloc(RTFAttribute));
}

$Class* RTFAttribute::load$($String* name, bool initialize) {
	$loadClass(RTFAttribute, name, initialize, &_RTFAttribute_ClassInfo_, allocate$RTFAttribute);
	return class$;
}

$Class* RTFAttribute::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax