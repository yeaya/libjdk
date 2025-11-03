#include <javax/lang/model/type/TypeKind$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef SHORT

using $TypeKindArray = $Array<::javax::lang::model::type::TypeKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$FieldInfo _TypeKind$1_FieldInfo_[] = {
	{"$SwitchMap$javax$lang$model$type$TypeKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeKind$1, $SwitchMap$javax$lang$model$type$TypeKind)},
	{}
};

$EnclosingMethodInfo _TypeKind$1_EnclosingMethodInfo_ = {
	"javax.lang.model.type.TypeKind",
	nullptr,
	nullptr
};

$InnerClassInfo _TypeKind$1_InnerClassesInfo_[] = {
	{"javax.lang.model.type.TypeKind$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TypeKind$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.lang.model.type.TypeKind$1",
	"java.lang.Object",
	nullptr,
	_TypeKind$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TypeKind$1_EnclosingMethodInfo_,
	_TypeKind$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.type.TypeKind"
};

$Object* allocate$TypeKind$1($Class* clazz) {
	return $of($alloc(TypeKind$1));
}

$ints* TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind = nullptr;

void clinit$TypeKind$1($Class* class$) {
	$assignStatic(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind, $new($ints, $($TypeKind::values())->length));
	{
		try {
			$nc(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::CHAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeKind$1::TypeKind$1() {
}

$Class* TypeKind$1::load$($String* name, bool initialize) {
	$loadClass(TypeKind$1, name, initialize, &_TypeKind$1_ClassInfo_, clinit$TypeKind$1, allocate$TypeKind$1);
	return class$;
}

$Class* TypeKind$1::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax