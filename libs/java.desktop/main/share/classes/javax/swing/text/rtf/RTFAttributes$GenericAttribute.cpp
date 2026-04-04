#include <javax/swing/text/rtf/RTFAttributes$GenericAttribute.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/rtf/RTFAttributes.h>
#include <javax/swing/text/rtf/RTFGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $RTFGenerator = ::javax::swing::text::rtf::RTFGenerator;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

void RTFAttributes$GenericAttribute::init$(int32_t d, Object$* s, $String* r) {
	this->domain$ = d;
	$set(this, swingName$, s);
	$set(this, rtfName$, r);
}

int32_t RTFAttributes$GenericAttribute::domain() {
	return this->domain$;
}

$Object* RTFAttributes$GenericAttribute::swingName() {
	return this->swingName$;
}

$String* RTFAttributes$GenericAttribute::rtfName() {
	return this->rtfName$;
}

bool RTFAttributes$GenericAttribute::write($AttributeSet* source, $RTFGenerator* target, bool force) {
	return writeValue($($nc(source)->getAttribute(this->swingName$)), target, force);
}

bool RTFAttributes$GenericAttribute::writeValue(Object$* value, $RTFGenerator* target, bool force) {
	return false;
}

RTFAttributes$GenericAttribute::RTFAttributes$GenericAttribute() {
}

$Class* RTFAttributes$GenericAttribute::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"domain", "I", nullptr, 0, $field(RTFAttributes$GenericAttribute, domain$)},
		{"swingName", "Ljava/lang/Object;", nullptr, 0, $field(RTFAttributes$GenericAttribute, swingName$)},
		{"rtfName", "Ljava/lang/String;", nullptr, 0, $field(RTFAttributes$GenericAttribute, rtfName$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Object;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(RTFAttributes$GenericAttribute, init$, void, int32_t, Object$*, $String*)},
		{"domain", "()I", nullptr, $PUBLIC, $virtualMethod(RTFAttributes$GenericAttribute, domain, int32_t)},
		{"rtfName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RTFAttributes$GenericAttribute, rtfName, $String*)},
		{"set", "(Ljavax/swing/text/MutableAttributeSet;)Z", nullptr, $ABSTRACT, $virtualMethod(RTFAttributes$GenericAttribute, set, bool, $MutableAttributeSet*)},
		{"set", "(Ljavax/swing/text/MutableAttributeSet;I)Z", nullptr, $ABSTRACT, $virtualMethod(RTFAttributes$GenericAttribute, set, bool, $MutableAttributeSet*, int32_t)},
		{"setDefault", "(Ljavax/swing/text/MutableAttributeSet;)Z", nullptr, $ABSTRACT, $virtualMethod(RTFAttributes$GenericAttribute, setDefault, bool, $MutableAttributeSet*)},
		{"swingName", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RTFAttributes$GenericAttribute, swingName, $Object*)},
		{"write", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/rtf/RTFGenerator;Z)Z", nullptr, $PUBLIC, $virtualMethod(RTFAttributes$GenericAttribute, write, bool, $AttributeSet*, $RTFGenerator*, bool), "java.io.IOException"},
		{"writeValue", "(Ljava/lang/Object;Ljavax/swing/text/rtf/RTFGenerator;Z)Z", nullptr, $PUBLIC, $virtualMethod(RTFAttributes$GenericAttribute, writeValue, bool, Object$*, $RTFGenerator*, bool), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.rtf.RTFAttributes$GenericAttribute", "javax.swing.text.rtf.RTFAttributes", "GenericAttribute", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"javax.swing.text.rtf.RTFAttributes$GenericAttribute",
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
		"javax.swing.text.rtf.RTFAttributes"
	};
	$loadClass(RTFAttributes$GenericAttribute, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RTFAttributes$GenericAttribute);
	});
	return class$;
}

$Class* RTFAttributes$GenericAttribute::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax