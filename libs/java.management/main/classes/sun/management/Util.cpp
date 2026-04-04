#include <sun/management/Util.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/management/ManagementPermission.h>
#include <java/security/Permission.h>
#include <java/util/List.h>
#include <javax/management/MalformedObjectNameException.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

#undef EMPTY_STRING_ARRAY

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $ManagementPermission = ::java::lang::management::ManagementPermission;
using $List = ::java::util::List;
using $MalformedObjectNameException = ::javax::management::MalformedObjectNameException;
using $ObjectName = ::javax::management::ObjectName;

namespace sun {
	namespace management {

$StringArray* Util::EMPTY_STRING_ARRAY = nullptr;
$ManagementPermission* Util::monitorPermission = nullptr;
$ManagementPermission* Util::controlPermission = nullptr;

void Util::init$() {
}

$RuntimeException* Util::newException($Exception* e) {
	$init(Util);
	$throwNew($RuntimeException, e);
	$shouldNotReachHere();
}

$StringArray* Util::toStringArray($List* list) {
	$init(Util);
	return $cast($StringArray, $nc(list)->toArray(Util::EMPTY_STRING_ARRAY));
}

$ObjectName* Util::newObjectName($String* domainAndType, $String* name) {
	$init(Util);
	return newObjectName($$str({domainAndType, ",name="_s, name}));
}

$ObjectName* Util::newObjectName($String* name) {
	$init(Util);
	try {
		return $ObjectName::getInstance(name);
	} catch ($MalformedObjectNameException& e) {
		$throwNew($IllegalArgumentException, e);
	}
	$shouldNotReachHere();
}

void Util::checkAccess($ManagementPermission* p) {
	$init(Util);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(p);
	}
}

void Util::checkMonitorAccess() {
	$init(Util);
	checkAccess(Util::monitorPermission);
}

void Util::checkControlAccess() {
	$init(Util);
	checkAccess(Util::controlPermission);
}

void Util::clinit$($Class* clazz) {
	$assignStatic(Util::EMPTY_STRING_ARRAY, $new($StringArray, 0));
	$assignStatic(Util::monitorPermission, $new($ManagementPermission, "monitor"_s));
	$assignStatic(Util::controlPermission, $new($ManagementPermission, "control"_s));
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY_STRING_ARRAY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Util, EMPTY_STRING_ARRAY)},
		{"monitorPermission", "Ljava/lang/management/ManagementPermission;", nullptr, $PRIVATE | $STATIC, $staticField(Util, monitorPermission)},
		{"controlPermission", "Ljava/lang/management/ManagementPermission;", nullptr, $PRIVATE | $STATIC, $staticField(Util, controlPermission)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Util, init$, void)},
		{"checkAccess", "(Ljava/lang/management/ManagementPermission;)V", nullptr, $STATIC, $staticMethod(Util, checkAccess, void, $ManagementPermission*), "java.lang.SecurityException"},
		{"checkControlAccess", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, checkControlAccess, void), "java.lang.SecurityException"},
		{"checkMonitorAccess", "()V", nullptr, $STATIC, $staticMethod(Util, checkMonitorAccess, void), "java.lang.SecurityException"},
		{"newException", "(Ljava/lang/Exception;)Ljava/lang/RuntimeException;", nullptr, $STATIC, $staticMethod(Util, newException, $RuntimeException*, $Exception*)},
		{"newObjectName", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, newObjectName, $ObjectName*, $String*, $String*)},
		{"newObjectName", "(Ljava/lang/String;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, newObjectName, $ObjectName*, $String*)},
		{"toStringArray", "(Ljava/util/List;)[Ljava/lang/String;", "(Ljava/util/List<Ljava/lang/String;>;)[Ljava/lang/String;", $STATIC, $staticMethod(Util, toStringArray, $StringArray*, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.management.Util",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Util, name, initialize, &classInfo$$, Util::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Util);
	});
	return class$;
}

$Class* Util::class$ = nullptr;

	} // management
} // sun