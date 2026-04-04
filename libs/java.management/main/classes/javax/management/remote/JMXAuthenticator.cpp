#include <javax/management/remote/JMXAuthenticator.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Subject = ::javax::security::auth::Subject;

namespace javax {
	namespace management {
		namespace remote {

$Class* JMXAuthenticator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"authenticate", "(Ljava/lang/Object;)Ljavax/security/auth/Subject;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JMXAuthenticator, authenticate, $Subject*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.remote.JMXAuthenticator",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JMXAuthenticator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXAuthenticator);
	});
	return class$;
}

$Class* JMXAuthenticator::class$ = nullptr;

		} // remote
	} // management
} // javax