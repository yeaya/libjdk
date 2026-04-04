#include <sun/security/krb5/SCDynamicStoreConfig.h>
#include <java/io/IOException.h>
#include <java/security/AccessController.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <sun/security/krb5/SCDynamicStoreConfig$1.h>
#include <sun/security/krb5/internal/Krb5.h>
#include <jcpp.h>

#undef DEBUG

using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $SCDynamicStoreConfig$1 = ::sun::security::krb5::SCDynamicStoreConfig$1;
using $Krb5 = ::sun::security::krb5::internal::Krb5;

namespace sun {
	namespace security {
		namespace krb5 {

bool SCDynamicStoreConfig::DEBUG = false;

void SCDynamicStoreConfig::init$() {
}

void SCDynamicStoreConfig::installNotificationCallback() {
	$init(SCDynamicStoreConfig);
	$prepareNativeStatic(installNotificationCallback, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$List* SCDynamicStoreConfig::getKerberosConfig() {
	$init(SCDynamicStoreConfig);
	$prepareNativeStatic(getKerberosConfig, $List*);
	$var($List, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$Hashtable* SCDynamicStoreConfig::getConfig() {
	$init(SCDynamicStoreConfig);
	$useLocalObjectStack();
	$var($List, list, getKerberosConfig());
	if (list == nullptr) {
		$throwNew($IOException, "Could not load configuration from SCDynamicStore"_s);
	}
	if (SCDynamicStoreConfig::DEBUG) {
		$nc($System::out)->println($$str({"Raw map from JNI: "_s, list}));
	}
	$var($Hashtable, v, $new($Hashtable));
	$var($Hashtable, realms, $new($Hashtable));
	$var($Iterator, iterator, $nc(list)->iterator());
	$var($String, defaultRealm, nullptr);
	while (true) {
		$var($String, nextRealm, $cast($String, $nc(iterator)->next()));
		if (nextRealm == nullptr) {
			break;
		}
		if (defaultRealm == nullptr) {
			$assign(defaultRealm, nextRealm);
			$var($Hashtable, dr, $new($Hashtable));
			dr->put("default_realm"_s, $(v1(defaultRealm)));
			v->put("libdefaults"_s, dr);
		}
		$var($Vector, kdcs, $new($Vector));
		while (true) {
			$var($String, nextKdc, $cast($String, iterator->next()));
			if (nextKdc == nullptr) {
				break;
			}
			kdcs->add(nextKdc);
		}
		if (!kdcs->isEmpty()) {
			$var($Hashtable, ri, $new($Hashtable));
			ri->put("kdc"_s, kdcs);
			realms->put(nextRealm, ri);
		}
	}
	if (!realms->isEmpty()) {
		v->put("realms"_s, realms);
	}
	$var($Hashtable, mapping, $new($Hashtable));
	while (true) {
		if (!$nc(iterator)->hasNext()) {
			break;
		}
		$var($Object, var$0, $cast($String, iterator->next()));
		mapping->put(var$0, $(v1($$cast($String, iterator->next()))));
	}
	if (!mapping->isEmpty()) {
		v->put("domain_realm"_s, mapping);
	}
	return v;
}

$Vector* SCDynamicStoreConfig::v1($String* s) {
	$init(SCDynamicStoreConfig);
	$var($Vector, out, $new($Vector));
	out->add(s);
	return out;
}

void SCDynamicStoreConfig::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($Krb5);
	SCDynamicStoreConfig::DEBUG = $Krb5::DEBUG;
	{
		bool isMac = $$sure($Boolean, $AccessController::doPrivileged($$new($SCDynamicStoreConfig$1)))->booleanValue();
		if (isMac) {
			SCDynamicStoreConfig::installNotificationCallback();
		}
	}
}

SCDynamicStoreConfig::SCDynamicStoreConfig() {
}

$Class* SCDynamicStoreConfig::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SCDynamicStoreConfig, DEBUG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SCDynamicStoreConfig, init$, void)},
		{"getConfig", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC | $STATIC, $staticMethod(SCDynamicStoreConfig, getConfig, $Hashtable*), "java.io.IOException"},
		{"getKerberosConfig", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $STATIC | $NATIVE, $staticMethod(SCDynamicStoreConfig, getKerberosConfig, $List*)},
		{"installNotificationCallback", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SCDynamicStoreConfig, installNotificationCallback, void)},
		{"v1", "(Ljava/lang/String;)Ljava/util/Vector;", "(Ljava/lang/String;)Ljava/util/Vector<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(SCDynamicStoreConfig, v1, $Vector*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.krb5.SCDynamicStoreConfig$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.SCDynamicStoreConfig",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.krb5.SCDynamicStoreConfig$1"
	};
	$loadClass(SCDynamicStoreConfig, name, initialize, &classInfo$$, SCDynamicStoreConfig::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SCDynamicStoreConfig);
	});
	return class$;
}

$Class* SCDynamicStoreConfig::class$ = nullptr;

		} // krb5
	} // security
} // sun