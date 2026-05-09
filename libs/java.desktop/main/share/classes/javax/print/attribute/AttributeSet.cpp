#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/Attribute.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;

namespace javax {
	namespace print {
		namespace attribute {

bool AttributeSet::equals(Object$* object) {
	return this->$Object::equals(object);
}

int32_t AttributeSet::hashCode() {
	return this->$Object::hashCode();
}

$Class* AttributeSet::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, add, bool, $Attribute*)},
		{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, addAll, bool, AttributeSet*)},
		{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, clear, void)},
		{"containsKey", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, containsKey, bool, $Class*)},
		{"containsValue", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, containsValue, bool, $Attribute*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"get", "(Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", "(Ljava/lang/Class<*>;)Ljavax/print/attribute/Attribute;", $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, get, $Attribute*, $Class*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, isEmpty, bool)},
		{"remove", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, remove, bool, $Class*)},
		{"remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, remove, bool, $Attribute*)},
		{"size", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, size, int32_t)},
		{"toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AttributeSet, toArray, $AttributeArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.print.attribute.AttributeSet",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeSet);
	});
	return class$;
}

$Class* AttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax