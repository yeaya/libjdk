#include <com/sun/tools/javac/jvm/ClassReader$28.h>
#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CAST
#undef CHAR
#undef CLASS
#undef CLASS_EXTENDS
#undef CLASS_TYPE_PARAMETER
#undef CLASS_TYPE_PARAMETER_BOUND
#undef CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT
#undef CONSTRUCTOR_REFERENCE
#undef CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT
#undef DOUBLE
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef FLOAT
#undef INSTANCEOF
#undef INT
#undef LOCAL_VARIABLE
#undef LONG
#undef METHOD_FORMAL_PARAMETER
#undef METHOD_INVOCATION_TYPE_ARGUMENT
#undef METHOD_RECEIVER
#undef METHOD_REFERENCE
#undef METHOD_REFERENCE_TYPE_ARGUMENT
#undef METHOD_RETURN
#undef METHOD_TYPE_PARAMETER
#undef METHOD_TYPE_PARAMETER_BOUND
#undef NEW
#undef RESOURCE_VARIABLE
#undef SHORT
#undef THROWS
#undef UNKNOWN

using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
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

$ints* ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType = nullptr;
$ints* ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void ClassReader$28::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType, $new($ints, $($TargetType::values())->length));
	{
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::INSTANCEOF->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::NEW->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::CONSTRUCTOR_REFERENCE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::METHOD_REFERENCE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::LOCAL_VARIABLE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::RESOURCE_VARIABLE->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::EXCEPTION_PARAMETER->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::METHOD_RECEIVER->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::CLASS_TYPE_PARAMETER->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::METHOD_TYPE_PARAMETER->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::CLASS_TYPE_PARAMETER_BOUND->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::METHOD_TYPE_PARAMETER_BOUND->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::CLASS_EXTENDS->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::THROWS->ordinal(), 14);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::METHOD_FORMAL_PARAMETER->ordinal(), 15);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::CAST->ordinal(), 16);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT->ordinal(), 17);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::METHOD_INVOCATION_TYPE_ARGUMENT->ordinal(), 18);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT->ordinal(), 19);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::METHOD_REFERENCE_TYPE_ARGUMENT->ordinal(), 20);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::METHOD_RETURN->ordinal(), 21);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::FIELD->ordinal(), 22);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TargetType->set($TargetType::UNKNOWN->ordinal(), 23);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BOOLEAN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::BYTE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CHAR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::SHORT->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::INT->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::LONG->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::FLOAT->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::DOUBLE->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ClassReader$28::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::CLASS->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ClassReader$28::ClassReader$28() {
}

$Class* ClassReader$28::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$TargetType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassReader$28, $SwitchMap$com$sun$tools$javac$code$TargetType)},
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ClassReader$28, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.ClassReader",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$28", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.jvm.ClassReader$28",
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
		"com.sun.tools.javac.jvm.ClassReader"
	};
	$loadClass(ClassReader$28, name, initialize, &classInfo$$, ClassReader$28::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$28);
	});
	return class$;
}

$Class* ClassReader$28::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com