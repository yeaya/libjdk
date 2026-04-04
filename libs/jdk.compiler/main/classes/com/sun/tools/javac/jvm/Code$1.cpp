#include <com/sun/tools/javac/jvm/Code$1.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/Code$StackMapFormat.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef ARRAY
#undef BOOLEAN
#undef BOT
#undef BYTE
#undef CHAR
#undef CLASS
#undef CLDC
#undef DOUBLE
#undef FLOAT
#undef INT
#undef LONG
#undef METHOD
#undef SHORT
#undef TYPEVAR
#undef UNINITIALIZED_OBJECT
#undef UNINITIALIZED_THIS
#undef VOID

using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $Code$StackMapFormat = ::com::sun::tools::javac::jvm::Code$StackMapFormat;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$ints* Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;
$ints* Code$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat = nullptr;

void Code$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BYTE->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::SHORT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CHAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::INT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::LONG->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::FLOAT->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::DOUBLE->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BOOLEAN->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::VOID->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CLASS->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::ARRAY->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::METHOD->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BOT->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::TYPEVAR->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::UNINITIALIZED_THIS->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::UNINITIALIZED_OBJECT->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(Code$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat, $new($ints, $($Code$StackMapFormat::values())->length));
	{
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat->set($Code$StackMapFormat::CLDC->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Code$1::$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat->set($Code$StackMapFormat::JSR202->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Code$1::Code$1() {
}

$Class* Code$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Code$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{"$SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Code$1, $SwitchMap$com$sun$tools$javac$jvm$Code$StackMapFormat)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.Code",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Code$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.jvm.Code$1",
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
		"com.sun.tools.javac.jvm.Code"
	};
	$loadClass(Code$1, name, initialize, &classInfo$$, Code$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Code$1);
	});
	return class$;
}

$Class* Code$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com