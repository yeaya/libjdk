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

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$ints* TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind = nullptr;

void TypeKindVisitor6$1::clinit$($Class* clazz) {
	$assignStatic(TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind, $new($ints, $($TypeKind::values())->length));
	{
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::CHAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::VOID->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::PACKAGE->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::MODULE->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKindVisitor6$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::NONE->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeKindVisitor6$1::TypeKindVisitor6$1() {
}

$Class* TypeKindVisitor6$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$lang$model$type$TypeKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeKindVisitor6$1, $SwitchMap$javax$lang$model$type$TypeKind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.lang.model.util.TypeKindVisitor6",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.lang.model.util.TypeKindVisitor6$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.lang.model.util.TypeKindVisitor6$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.lang.model.util.TypeKindVisitor6"
	};
	$loadClass(TypeKindVisitor6$1, name, initialize, &classInfo$$, TypeKindVisitor6$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TypeKindVisitor6$1);
	});
	return class$;
}

$Class* TypeKindVisitor6$1::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax