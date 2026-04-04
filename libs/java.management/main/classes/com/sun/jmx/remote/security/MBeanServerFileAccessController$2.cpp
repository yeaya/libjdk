#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$2.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef CREATE
#undef READ
#undef UNREGISTER
#undef WRITE

using $MBeanServerFileAccessController$AccessType = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$ints* MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType = nullptr;

void MBeanServerFileAccessController$2::clinit$($Class* clazz) {
	$assignStatic(MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType, $new($ints, $($MBeanServerFileAccessController$AccessType::values())->length));
	{
		try {
			MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType->set($MBeanServerFileAccessController$AccessType::READ->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType->set($MBeanServerFileAccessController$AccessType::WRITE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType->set($MBeanServerFileAccessController$AccessType::UNREGISTER->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType->set($MBeanServerFileAccessController$AccessType::CREATE->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

MBeanServerFileAccessController$2::MBeanServerFileAccessController$2() {
}

$Class* MBeanServerFileAccessController$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MBeanServerFileAccessController$2, $SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.security.MBeanServerFileAccessController",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.jmx.remote.security.MBeanServerFileAccessController$2",
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
		"com.sun.jmx.remote.security.MBeanServerFileAccessController"
	};
	$loadClass(MBeanServerFileAccessController$2, name, initialize, &classInfo$$, MBeanServerFileAccessController$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanServerFileAccessController$2);
	});
	return class$;
}

$Class* MBeanServerFileAccessController$2::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com