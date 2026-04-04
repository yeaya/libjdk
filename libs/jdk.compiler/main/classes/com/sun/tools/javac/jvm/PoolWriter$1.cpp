#include <com/sun/tools/javac/jvm/PoolWriter$1.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef UNINITIALIZED_OBJECT
#undef UNINITIALIZED_THIS

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

$ints* PoolWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag = nullptr;

void PoolWriter$1::clinit$($Class* clazz) {
	$assignStatic(PoolWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag, $new($ints, $($TypeTag::values())->length));
	{
		try {
			PoolWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::UNINITIALIZED_THIS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			PoolWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag->set($TypeTag::UNINITIALIZED_OBJECT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

PoolWriter$1::PoolWriter$1() {
}

$Class* PoolWriter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$tools$javac$code$TypeTag", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PoolWriter$1, $SwitchMap$com$sun$tools$javac$code$TypeTag)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.jvm.PoolWriter",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.PoolWriter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.tools.javac.jvm.PoolWriter$1",
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
		"com.sun.tools.javac.jvm.PoolWriter"
	};
	$loadClass(PoolWriter$1, name, initialize, &classInfo$$, PoolWriter$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PoolWriter$1);
	});
	return class$;
}

$Class* PoolWriter$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com