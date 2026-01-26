#include <javax/lang/model/element/Modifier$1.h>

#include <javax/lang/model/element/Modifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Modifier = ::javax::lang::model::element::Modifier;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _Modifier$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(Modifier$1, init$, void, $String*, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Modifier$1, toString, $String*)},
	{}
};

$EnclosingMethodInfo _Modifier$1_EnclosingMethodInfo_ = {
	"javax.lang.model.element.Modifier",
	nullptr,
	nullptr
};

$InnerClassInfo _Modifier$1_InnerClassesInfo_[] = {
	{"javax.lang.model.element.Modifier$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Modifier$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.lang.model.element.Modifier$1",
	"javax.lang.model.element.Modifier",
	nullptr,
	nullptr,
	_Modifier$1_MethodInfo_,
	nullptr,
	&_Modifier$1_EnclosingMethodInfo_,
	_Modifier$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.element.Modifier"
};

$Object* allocate$Modifier$1($Class* clazz) {
	return $of($alloc(Modifier$1));
}

void Modifier$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Modifier::init$($enum$name, $enum$ordinal);
}

$String* Modifier$1::toString() {
	return "non-sealed"_s;
}

Modifier$1::Modifier$1() {
}

$Class* Modifier$1::load$($String* name, bool initialize) {
	$loadClass(Modifier$1, name, initialize, &_Modifier$1_ClassInfo_, allocate$Modifier$1);
	return class$;
}

$Class* Modifier$1::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax