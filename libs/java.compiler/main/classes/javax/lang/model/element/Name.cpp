#include <javax/lang/model/element/Name.h>

#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _Name_MethodInfo_[] = {
	{"contentEquals", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Name, contentEquals, bool, $CharSequence*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Name_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.Name",
	nullptr,
	"java.lang.CharSequence",
	nullptr,
	_Name_MethodInfo_
};

$Object* allocate$Name($Class* clazz) {
	return $of($alloc(Name));
}

bool Name::equals(Object$* obj) {
	 return this->$CharSequence::equals(obj);
}

int32_t Name::hashCode() {
	 return this->$CharSequence::hashCode();
}

$Class* Name::load$($String* name, bool initialize) {
	$loadClass(Name, name, initialize, &_Name_ClassInfo_, allocate$Name);
	return class$;
}

$Class* Name::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax