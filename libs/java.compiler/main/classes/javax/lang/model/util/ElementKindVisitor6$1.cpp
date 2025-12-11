#include <javax/lang/model/util/ElementKindVisitor6$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/util/ElementKindVisitor6.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef BINDING_VARIABLE
#undef CLASS
#undef CONSTRUCTOR
#undef ENUM
#undef ENUM_CONSTANT
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef INSTANCE_INIT
#undef INTERFACE
#undef LOCAL_VARIABLE
#undef METHOD
#undef PARAMETER
#undef RECORD
#undef RESOURCE_VARIABLE
#undef STATIC_INIT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $ElementKind = ::javax::lang::model::element::ElementKind;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$FieldInfo _ElementKindVisitor6$1_FieldInfo_[] = {
	{"$SwitchMap$javax$lang$model$element$ElementKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ElementKindVisitor6$1, $SwitchMap$javax$lang$model$element$ElementKind)},
	{}
};

$EnclosingMethodInfo _ElementKindVisitor6$1_EnclosingMethodInfo_ = {
	"javax.lang.model.util.ElementKindVisitor6",
	nullptr,
	nullptr
};

$InnerClassInfo _ElementKindVisitor6$1_InnerClassesInfo_[] = {
	{"javax.lang.model.util.ElementKindVisitor6$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ElementKindVisitor6$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.lang.model.util.ElementKindVisitor6$1",
	"java.lang.Object",
	nullptr,
	_ElementKindVisitor6$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ElementKindVisitor6$1_EnclosingMethodInfo_,
	_ElementKindVisitor6$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.util.ElementKindVisitor6"
};

$Object* allocate$ElementKindVisitor6$1($Class* clazz) {
	return $of($alloc(ElementKindVisitor6$1));
}

$ints* ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind = nullptr;

void clinit$ElementKindVisitor6$1($Class* class$) {
	$assignStatic(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind, $new($ints, $($ElementKind::values())->length));
	{
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::ANNOTATION_TYPE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::CLASS->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::ENUM->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::INTERFACE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::RECORD->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::ENUM_CONSTANT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::EXCEPTION_PARAMETER->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::FIELD->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::LOCAL_VARIABLE->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::PARAMETER->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::RESOURCE_VARIABLE->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::BINDING_VARIABLE->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::CONSTRUCTOR->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::INSTANCE_INIT->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::METHOD->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ElementKindVisitor6$1::$SwitchMap$javax$lang$model$element$ElementKind)->set($ElementKind::STATIC_INIT->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ElementKindVisitor6$1::ElementKindVisitor6$1() {
}

$Class* ElementKindVisitor6$1::load$($String* name, bool initialize) {
	$loadClass(ElementKindVisitor6$1, name, initialize, &_ElementKindVisitor6$1_ClassInfo_, clinit$ElementKindVisitor6$1, allocate$ElementKindVisitor6$1);
	return class$;
}

$Class* ElementKindVisitor6$1::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax