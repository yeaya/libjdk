#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$JMXCallbackHandler.h>
#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <jcpp.h>

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $JMXPluggableAuthenticator = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

void JMXPluggableAuthenticator$JMXCallbackHandler::init$($JMXPluggableAuthenticator* this$0) {
	$set(this, this$0, this$0);
}

void JMXPluggableAuthenticator$JMXCallbackHandler::handle($CallbackArray* callbacks) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(callbacks)->length; ++i) {
		if ($instanceOf($NameCallback, callbacks->get(i))) {
			$nc($cast($NameCallback, callbacks->get(i)))->setName(this->this$0->username);
		} else if ($instanceOf($PasswordCallback, callbacks->get(i))) {
			$nc($cast($PasswordCallback, callbacks->get(i)))->setPassword($($nc(this->this$0->password)->toCharArray()));
		} else {
			$throwNew($UnsupportedCallbackException, callbacks->get(i), "Unrecognized Callback"_s);
		}
	}
}

JMXPluggableAuthenticator$JMXCallbackHandler::JMXPluggableAuthenticator$JMXCallbackHandler() {
}

$Class* JMXPluggableAuthenticator$JMXCallbackHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;", nullptr, $FINAL | $SYNTHETIC, $field(JMXPluggableAuthenticator$JMXCallbackHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;)V", nullptr, $PRIVATE, $method(JMXPluggableAuthenticator$JMXCallbackHandler, init$, void, $JMXPluggableAuthenticator*)},
		{"handle", "([Ljavax/security/auth/callback/Callback;)V", nullptr, $PUBLIC, $virtualMethod(JMXPluggableAuthenticator$JMXCallbackHandler, handle, void, $CallbackArray*), "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$JMXCallbackHandler", "com.sun.jmx.remote.security.JMXPluggableAuthenticator", "JMXCallbackHandler", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.remote.security.JMXPluggableAuthenticator$JMXCallbackHandler",
		"java.lang.Object",
		"javax.security.auth.callback.CallbackHandler",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.security.JMXPluggableAuthenticator"
	};
	$loadClass(JMXPluggableAuthenticator$JMXCallbackHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXPluggableAuthenticator$JMXCallbackHandler);
	});
	return class$;
}

$Class* JMXPluggableAuthenticator$JMXCallbackHandler::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com