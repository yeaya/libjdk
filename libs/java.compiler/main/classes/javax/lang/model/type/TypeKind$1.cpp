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

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$ints* TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind = nullptr;

void TypeKind$1::clinit$($Class* clazz) {
	$assignStatic(TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind, $new($ints, $($TypeKind::values())->length));
	{
		try {
			TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::CHAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			TypeKind$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

TypeKind$1::TypeKind$1() {
}

$Class* TypeKind$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$lang$model$type$TypeKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TypeKind$1, $SwitchMap$javax$lang$model$type$TypeKind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.lang.model.type.TypeKind",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.lang.model.type.TypeKind$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"javax.lang.model.type.TypeKind$1",
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
		"javax.lang.model.type.TypeKind"
	};
	$loadClass(TypeKind$1, name, initialize, &classInfo$$, TypeKind$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TypeKind$1);
	});
	return class$;
}

$Class* TypeKind$1::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax