#include <javax/lang/model/util/TypeKindVisitor6$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/util/TypeKindVisitor6.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef MODULE
#undef NONE
#undef PACKAGE
#undef SHORT
#undef VOID

using $TypeKindArray = $Array<::javax::lang::model::type::TypeKind>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeKindVisitor6 = ::javax::lang::model::util::TypeKindVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$FieldInfo _TypeKindVisitor6$1_FieldInfo_[] = {
	{"$SwitchMap$javax$lang$model$type$TypeKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeKindVisitor6$1, $SwitchMap$javax$lang$model$type$TypeKind)},
	{}
};

$EnclosingMethodInfo _TypeKindVisitor6$1_EnclosingMethodInfo_ = {
	"javax.lang.model.util.TypeKindVisitor6",
	nullptr,
	nullptr
};

$InnerClassInfo _TypeKindVisitor6$1_InnerClassesInfo_[] = {
	{"javax.lang.model.util.TypeKindVisitor6$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _TypeKindVisitor6$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.lang.model.util.TypeKindVisitor6$1",
	"java.lang.Object",
	nullptr,
	_TypeKindVisitor6$1_FieldInfo_,
	nullptr,
	nullptr,
	&_TypeKindVisitor6$1_EnclosingMethodInfo_,
	_TypeKindVisitor6$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.lang.model.util.TypeKindVisitor6"
};

$Object* allocate$TypeKindVisitor6$1($Class* clazz) {
	return $of($alloc(TypeKindVisitor6$1));
}

$ints* TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind = nullptr;

void clinit$TypeKindVisitor6$1($Class* class$) {
	$assignStatic(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind, $new($ints, $($TypeKind::values())->length));
	{
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::CHAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::VOID->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::PACKAGE->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::MODULE->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind)->set($TypeKind::NONE->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeKindVisitor6$1::TypeKindVisitor6$1() {
}

$Class* TypeKindVisitor6$1::load$($String* name, bool initialize) {
	$loadClass(TypeKindVisitor6$1, name, initialize, &_TypeKindVisitor6$1_ClassInfo_, clinit$TypeKindVisitor6$1, allocate$TypeKindVisitor6$1);
	return class$;
}

$Class* TypeKindVisitor6$1::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax