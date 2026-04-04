#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$1.h>
#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$FileLoginConfig.h>
#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$JMXCallbackHandler.h>
#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/login/LoginContext.h>
#include <jcpp.h>

using $JMXPluggableAuthenticator = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator;
using $JMXPluggableAuthenticator$FileLoginConfig = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator$FileLoginConfig;
using $JMXPluggableAuthenticator$JMXCallbackHandler = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator$JMXCallbackHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Subject = ::javax::security::auth::Subject;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $LoginContext = ::javax::security::auth::login::LoginContext;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

void JMXPluggableAuthenticator$1::init$($JMXPluggableAuthenticator* this$0, $String* val$pf, $String* val$hashPass) {
	$set(this, this$0, this$0);
	$set(this, val$pf, val$pf);
	$set(this, val$hashPass, val$hashPass);
}

$Object* JMXPluggableAuthenticator$1::run() {
	$useLocalObjectStack();
	$var($String, var$0, "JMXPluggableAuthenticator"_s);
	$var($CallbackHandler, var$1, $new($JMXPluggableAuthenticator$JMXCallbackHandler, this->this$0));
	return $new($LoginContext, var$0, nullptr, var$1, $$new($JMXPluggableAuthenticator$FileLoginConfig, this->val$pf, this->val$hashPass));
}

JMXPluggableAuthenticator$1::JMXPluggableAuthenticator$1() {
}

$Class* JMXPluggableAuthenticator$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;", nullptr, $FINAL | $SYNTHETIC, $field(JMXPluggableAuthenticator$1, this$0)},
		{"val$hashPass", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JMXPluggableAuthenticator$1, val$hashPass)},
		{"val$pf", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JMXPluggableAuthenticator$1, val$pf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;Ljava/lang/String;Ljava/lang/String;)V", "()V", 0, $method(JMXPluggableAuthenticator$1, init$, void, $JMXPluggableAuthenticator*, $String*, $String*)},
		{"run", "()Ljavax/security/auth/login/LoginContext;", nullptr, $PUBLIC, $virtualMethod(JMXPluggableAuthenticator$1, run, $Object*), "javax.security.auth.login.LoginException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.security.JMXPluggableAuthenticator",
		"<init>",
		"(Ljava/util/Map;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.security.JMXPluggableAuthenticator$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljavax/security/auth/login/LoginContext;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.security.JMXPluggableAuthenticator"
	};
	$loadClass(JMXPluggableAuthenticator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXPluggableAuthenticator$1);
	});
	return class$;
}

$Class* JMXPluggableAuthenticator$1::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com