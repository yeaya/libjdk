#include <com/sun/org/apache/bcel/internal/ExceptionConst$1.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst$EXCS.h>
#include <com/sun/org/apache/bcel/internal/ExceptionConst.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef EXCS_ARRAY_EXCEPTION
#undef EXCS_CLASS_AND_INTERFACE_RESOLUTION
#undef EXCS_FIELD_AND_METHOD_RESOLUTION
#undef EXCS_INTERFACE_METHOD_RESOLUTION
#undef EXCS_STRING_RESOLUTION

using $ExceptionConst$EXCS = ::com::sun::org::apache::bcel::internal::ExceptionConst$EXCS;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {

$ints* ExceptionConst$1::$SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS = nullptr;

void ExceptionConst$1::clinit$($Class* clazz) {
	$assignStatic(ExceptionConst$1::$SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS, $new($ints, $($ExceptionConst$EXCS::values())->length));
	{
		try {
			ExceptionConst$1::$SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS->set($ExceptionConst$EXCS::EXCS_CLASS_AND_INTERFACE_RESOLUTION->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ExceptionConst$1::$SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS->set($ExceptionConst$EXCS::EXCS_ARRAY_EXCEPTION->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ExceptionConst$1::$SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS->set($ExceptionConst$EXCS::EXCS_FIELD_AND_METHOD_RESOLUTION->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ExceptionConst$1::$SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS->set($ExceptionConst$EXCS::EXCS_INTERFACE_METHOD_RESOLUTION->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			ExceptionConst$1::$SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS->set($ExceptionConst$EXCS::EXCS_STRING_RESOLUTION->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ExceptionConst$1::ExceptionConst$1() {
}

$Class* ExceptionConst$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ExceptionConst$1, $SwitchMap$com$sun$org$apache$bcel$internal$ExceptionConst$EXCS)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.bcel.internal.ExceptionConst",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.ExceptionConst$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.org.apache.bcel.internal.ExceptionConst$1",
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
		"com.sun.org.apache.bcel.internal.ExceptionConst"
	};
	$loadClass(ExceptionConst$1, name, initialize, &classInfo$$, ExceptionConst$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExceptionConst$1);
	});
	return class$;
}

$Class* ExceptionConst$1::class$ = nullptr;

					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com