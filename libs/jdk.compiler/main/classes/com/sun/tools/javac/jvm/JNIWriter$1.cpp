#include <com/sun/tools/javac/jvm/JNIWriter$1.h>
#include <com/sun/tools/javac/jvm/JNIWriter$EncoderType.h>
#include <com/sun/tools/javac/jvm/JNIWriter.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/lang/model/type/TypeKind.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef CLASS
#undef DECLARED
#undef DOUBLE
#undef FIELDSTUB
#undef FLOAT
#undef INT
#undef JNI
#undef LONG
#undef SHORT
#undef SIGNATURE
#undef VOID

using $JNIWriter$EncoderType = ::com::sun::tools::javac::jvm::JNIWriter$EncoderType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $TypeKind = ::javax::lang::model::type::TypeKind;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$ints* JNIWriter$1::$SwitchMap$com$sun$tools$javac$jvm$JNIWriter$EncoderType = nullptr;
$ints* JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind = nullptr;

void JNIWriter$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JNIWriter$1::$SwitchMap$com$sun$tools$javac$jvm$JNIWriter$EncoderType, $new($ints, $($JNIWriter$EncoderType::values())->length));
	{
		try {
			JNIWriter$1::$SwitchMap$com$sun$tools$javac$jvm$JNIWriter$EncoderType->set($JNIWriter$EncoderType::CLASS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$com$sun$tools$javac$jvm$JNIWriter$EncoderType->set($JNIWriter$EncoderType::JNI->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$com$sun$tools$javac$jvm$JNIWriter$EncoderType->set($JNIWriter$EncoderType::SIGNATURE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$com$sun$tools$javac$jvm$JNIWriter$EncoderType->set($JNIWriter$EncoderType::FIELDSTUB->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind, $new($ints, $($TypeKind::values())->length));
	{
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::SHORT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::CHAR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::ARRAY->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::DECLARED->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind->set($TypeKind::VOID->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

JNIWriter$1::JNIWriter$1() {
}

$Class* JNIWriter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$jvm$JNIWriter$EncoderType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JNIWriter$1, $SwitchMap$com$sun$tools$javac$jvm$JNIWriter$EncoderType)},
		{"$SwitchMap$javax$lang$model$type$TypeKind", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JNIWriter$1, $SwitchMap$javax$lang$model$type$TypeKind)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.JNIWriter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.JNIWriter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.jvm.JNIWriter$1",
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
		"com.sun.tools.javac.jvm.JNIWriter"
	};
	$loadClass(JNIWriter$1, name, initialize, &classInfo$$, JNIWriter$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JNIWriter$1);
	});
	return class$;
}

$Class* JNIWriter$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com