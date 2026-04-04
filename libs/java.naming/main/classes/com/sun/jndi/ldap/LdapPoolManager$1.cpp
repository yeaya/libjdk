#include <com/sun/jndi/ldap/LdapPoolManager$1.h>
#include <com/sun/jndi/ldap/LdapPoolManager.h>
#include <com/sun/jndi/ldap/pool/Pool.h>
#include <com/sun/jndi/ldap/pool/PoolCleaner.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jcpp.h>

using $LdapPoolManager = ::com::sun::jndi::ldap::LdapPoolManager;
using $PoolCleaner = ::com::sun::jndi::ldap::pool::PoolCleaner;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

bool LdapPoolManager$1::$assertionsDisabled = false;

void LdapPoolManager$1::init$() {
}

$Object* LdapPoolManager$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($LdapPoolManager);
	$var($Thread, t, $InnocuousThread::newSystemThread("LDAP PoolCleaner"_s, $$new($PoolCleaner, $LdapPoolManager::idleTimeout, $LdapPoolManager::pools)));
	if (!LdapPoolManager$1::$assertionsDisabled && !($nc(t)->getContextClassLoader() == nullptr)) {
		$throwNew($AssertionError);
	}
	$nc(t)->setDaemon(true);
	t->start();
	return nullptr;
}

void LdapPoolManager$1::clinit$($Class* clazz) {
	$load($LdapPoolManager);
	LdapPoolManager$1::$assertionsDisabled = !$LdapPoolManager::class$->desiredAssertionStatus();
}

LdapPoolManager$1::LdapPoolManager$1() {
}

$Class* LdapPoolManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LdapPoolManager$1, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LdapPoolManager$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(LdapPoolManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jndi.ldap.LdapPoolManager",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.LdapPoolManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.LdapPoolManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.ldap.LdapPoolManager"
	};
	$loadClass(LdapPoolManager$1, name, initialize, &classInfo$$, LdapPoolManager$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LdapPoolManager$1);
	});
	return class$;
}

$Class* LdapPoolManager$1::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com