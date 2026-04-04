#include <java/beans/JavaBean.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace beans {

$Class* JavaBean::load$($String* name, bool initialize) {

	$Attribute defaultEventSetdefaultValue$$ = {
		's', ""
	};

	$Attribute defaultPropertydefaultValue$$ = {
		's', ""
	};

	$Attribute descriptiondefaultValue$$ = {
		's', ""
	};
	$MethodInfo methodInfos$$[] = {
		{"defaultEventSet", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaBean, defaultEventSet, $String*), nullptr, &defaultEventSetdefaultValue$$},
		{"defaultProperty", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaBean, defaultProperty, $String*), nullptr, &defaultPropertydefaultValue$$},
		{"description", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaBean, description, $String*), nullptr, &descriptiondefaultValue$$},
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
		{"Ljava/lang/annotation/Documented;", nullptr},
		{"Ljava/lang/annotation/Target;", annotations$$$namedAttribute},
		{"Ljava/lang/annotation/Retention;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
		"java.beans.JavaBean",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(JavaBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaBean);
	});
	return class$;
}

$Class* JavaBean::class$ = nullptr;

	} // beans
} // java