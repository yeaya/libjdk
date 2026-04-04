#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>
#include <java/lang/Enum.h>
#include <jcpp.h>

#undef CREATE
#undef READ
#undef UNREGISTER
#undef WRITE

using $MBeanServerFileAccessController$AccessTypeArray = $Array<::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

MBeanServerFileAccessController$AccessType* MBeanServerFileAccessController$AccessType::READ = nullptr;
MBeanServerFileAccessController$AccessType* MBeanServerFileAccessController$AccessType::WRITE = nullptr;
MBeanServerFileAccessController$AccessType* MBeanServerFileAccessController$AccessType::CREATE = nullptr;
MBeanServerFileAccessController$AccessType* MBeanServerFileAccessController$AccessType::UNREGISTER = nullptr;
$MBeanServerFileAccessController$AccessTypeArray* MBeanServerFileAccessController$AccessType::$VALUES = nullptr;

$MBeanServerFileAccessController$AccessTypeArray* MBeanServerFileAccessController$AccessType::$values() {
	$init(MBeanServerFileAccessController$AccessType);
	return $new($MBeanServerFileAccessController$AccessTypeArray, {
		MBeanServerFileAccessController$AccessType::READ,
		MBeanServerFileAccessController$AccessType::WRITE,
		MBeanServerFileAccessController$AccessType::CREATE,
		MBeanServerFileAccessController$AccessType::UNREGISTER
	});
}

$MBeanServerFileAccessController$AccessTypeArray* MBeanServerFileAccessController$AccessType::values() {
	$init(MBeanServerFileAccessController$AccessType);
	return $cast($MBeanServerFileAccessController$AccessTypeArray, MBeanServerFileAccessController$AccessType::$VALUES->clone());
}

MBeanServerFileAccessController$AccessType* MBeanServerFileAccessController$AccessType::valueOf($String* name) {
	$init(MBeanServerFileAccessController$AccessType);
	return $cast(MBeanServerFileAccessController$AccessType, $Enum::valueOf(MBeanServerFileAccessController$AccessType::class$, name));
}

void MBeanServerFileAccessController$AccessType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void MBeanServerFileAccessController$AccessType::clinit$($Class* clazz) {
	$assignStatic(MBeanServerFileAccessController$AccessType::READ, $new(MBeanServerFileAccessController$AccessType, "READ"_s, 0));
	$assignStatic(MBeanServerFileAccessController$AccessType::WRITE, $new(MBeanServerFileAccessController$AccessType, "WRITE"_s, 1));
	$assignStatic(MBeanServerFileAccessController$AccessType::CREATE, $new(MBeanServerFileAccessController$AccessType, "CREATE"_s, 2));
	$assignStatic(MBeanServerFileAccessController$AccessType::UNREGISTER, $new(MBeanServerFileAccessController$AccessType, "UNREGISTER"_s, 3));
	$assignStatic(MBeanServerFileAccessController$AccessType::$VALUES, MBeanServerFileAccessController$AccessType::$values());
}

MBeanServerFileAccessController$AccessType::MBeanServerFileAccessController$AccessType() {
}

$Class* MBeanServerFileAccessController$AccessType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"READ", "Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MBeanServerFileAccessController$AccessType, READ)},
		{"WRITE", "Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MBeanServerFileAccessController$AccessType, WRITE)},
		{"CREATE", "Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MBeanServerFileAccessController$AccessType, CREATE)},
		{"UNREGISTER", "Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MBeanServerFileAccessController$AccessType, UNREGISTER)},
		{"$VALUES", "[Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MBeanServerFileAccessController$AccessType, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MBeanServerFileAccessController$AccessType, $values, $MBeanServerFileAccessController$AccessTypeArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(MBeanServerFileAccessController$AccessType, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;", nullptr, $PUBLIC | $STATIC, $staticMethod(MBeanServerFileAccessController$AccessType, valueOf, MBeanServerFileAccessController$AccessType*, $String*)},
		{"values", "()[Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;", nullptr, $PUBLIC | $STATIC, $staticMethod(MBeanServerFileAccessController$AccessType, values, $MBeanServerFileAccessController$AccessTypeArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.MBeanServerFileAccessController$AccessType", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "AccessType", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"com.sun.jmx.remote.security.MBeanServerFileAccessController$AccessType",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.security.MBeanServerFileAccessController"
	};
	$loadClass(MBeanServerFileAccessController$AccessType, name, initialize, &classInfo$$, MBeanServerFileAccessController$AccessType::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MBeanServerFileAccessController$AccessType));
	});
	return class$;
}

$Class* MBeanServerFileAccessController$AccessType::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com