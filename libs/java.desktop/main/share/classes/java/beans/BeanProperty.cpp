#include <java/beans/BeanProperty.h>
#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace beans {

$Class* BeanProperty::load$($String* name, bool initialize) {

	$Attribute bounddefaultValue$$ = {
		'Z', "true"
	};

	$Attribute descriptiondefaultValue$$ = {
		's', ""
	};
	$Attribute $attribute[] = {
		{'-'}
	};

	$Attribute enumerationValuesdefaultValue$$ = {
		'[', $attribute
	};

	$Attribute expertdefaultValue$$ = {
		'Z', "false"
	};

	$Attribute hiddendefaultValue$$ = {
		'Z', "false"
	};

	$Attribute preferreddefaultValue$$ = {
		'Z', "false"
	};

	$Attribute requireddefaultValue$$ = {
		'Z', "false"
	};

	$Attribute visualUpdatedefaultValue$$ = {
		'Z', "false"
	};
	$MethodInfo methodInfos$$[] = {
		{"bound", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanProperty, bound, bool), nullptr, &bounddefaultValue$$},
		{"description", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanProperty, description, $String*), nullptr, &descriptiondefaultValue$$},
		{"enumerationValues", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanProperty, enumerationValues, $StringArray*), nullptr, &enumerationValuesdefaultValue$$},
		{"expert", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanProperty, expert, bool), nullptr, &expertdefaultValue$$},
		{"hidden", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanProperty, hidden, bool), nullptr, &hiddendefaultValue$$},
		{"preferred", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanProperty, preferred, bool), nullptr, &preferreddefaultValue$$},
		{"required", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanProperty, required, bool), nullptr, &requireddefaultValue$$},
		{"visualUpdate", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanProperty, visualUpdate, bool), nullptr, &visualUpdatedefaultValue$$},
		{}
	};
	$Attribute $attribute$1[] = {
		{'e', "Ljava/lang/annotation/ElementType; METHOD"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute$1},
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
		"java.beans.BeanProperty",
		nullptr,
		"java.lang.annotation.Annotation",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(BeanProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanProperty);
	});
	return class$;
}

$Class* BeanProperty::class$ = nullptr;

	} // beans
} // java