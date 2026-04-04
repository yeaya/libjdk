#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$2.h>
#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $JMXPluggableAuthenticator = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

void JMXPluggableAuthenticator$2::init$($JMXPluggableAuthenticator* this$0, $Subject* val$subject) {
	$set(this, this$0, this$0);
	$set(this, val$subject, val$subject);
}

$Object* JMXPluggableAuthenticator$2::run() {
	$nc(this->val$subject)->setReadOnly();
	return nullptr;
}

JMXPluggableAuthenticator$2::JMXPluggableAuthenticator$2() {
}

$Class* JMXPluggableAuthenticator$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;", nullptr, $FINAL | $SYNTHETIC, $field(JMXPluggableAuthenticator$2, this$0)},
		{"val$subject", "Ljavax/security/auth/Subject;", nullptr, $FINAL | $SYNTHETIC, $field(JMXPluggableAuthenticator$2, val$subject)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;Ljavax/security/auth/Subject;)V", "()V", 0, $method(JMXPluggableAuthenticator$2, init$, void, $JMXPluggableAuthenticator*, $Subject*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JMXPluggableAuthenticator$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.security.JMXPluggableAuthenticator",
		"authenticate",
		"(Ljava/lang/Object;)Ljavax/security/auth/Subject;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.security.JMXPluggableAuthenticator$2",
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
		"com.sun.jmx.remote.security.JMXPluggableAuthenticator"
	};
	$loadClass(JMXPluggableAuthenticator$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXPluggableAuthenticator$2);
	});
	return class$;
}

$Class* JMXPluggableAuthenticator$2::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com