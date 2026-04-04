#include <javax/swing/SwingContainer.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace swing {

$Class* SwingContainer::load$($String* name, bool initialize) {

	$Attribute delegatedefaultValue$$ = {
		's', ""
	};

	$Attribute valuedefaultValue$$ = {
		'Z', "true"
	};
	$MethodInfo methodInfos$$[] = {
		{"delegate", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingContainer, delegate, $String*), nullptr, &delegatedefaultValue$$},
		{"value", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingContainer, value, bool), nullptr, &valuedefaultValue$$},
		{}
	};
	$Attribute $attribute[] = {
		{'e', "Ljava/lang/annotation/ElementType; TYPE"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"javax.swing.SwingContainer",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SwingContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingContainer);
	});
	return class$;
}

$Class* SwingContainer::class$ = nullptr;

	} // swing
} // javax