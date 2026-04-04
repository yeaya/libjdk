#include <com/sun/jmx/remote/security/HashedPasswordManager$UserCredentials.h>
#include <com/sun/jmx/remote/security/HashedPasswordManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

void HashedPasswordManager$UserCredentials::init$($String* userName, $String* hashAlgorithm, $String* b64Salt, $String* b64Hash) {
	$set(this, userName, userName);
	$set(this, hashAlgorithm, hashAlgorithm);
	$set(this, b64Salt, b64Salt);
	$set(this, b64Hash, b64Hash);
}

$String* HashedPasswordManager$UserCredentials::toString() {
	return $str({this->userName, " "_s, this->b64Salt, " "_s, this->b64Hash, " "_s, this->hashAlgorithm});
}

HashedPasswordManager$UserCredentials::HashedPasswordManager$UserCredentials() {
}

$Class* HashedPasswordManager$UserCredentials::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"userName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager$UserCredentials, userName)},
		{"hashAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager$UserCredentials, hashAlgorithm)},
		{"b64Salt", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager$UserCredentials, b64Salt)},
		{"b64Hash", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(HashedPasswordManager$UserCredentials, b64Hash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HashedPasswordManager$UserCredentials, init$, void, $String*, $String*, $String*, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HashedPasswordManager$UserCredentials, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.security.HashedPasswordManager$UserCredentials", "com.sun.jmx.remote.security.HashedPasswordManager", "UserCredentials", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.remote.security.HashedPasswordManager$UserCredentials",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.security.HashedPasswordManager"
	};
	$loadClass(HashedPasswordManager$UserCredentials, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HashedPasswordManager$UserCredentials);
	});
	return class$;
}

$Class* HashedPasswordManager$UserCredentials::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com