#include <com/sun/jndi/ldap/SimpleClientId.h>
#include <com/sun/jndi/ldap/ClientId.h>
#include <java/io/OutputStream.h>
#include <java/util/Arrays.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClientId = ::com::sun::jndi::ldap::ClientId;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void SimpleClientId::init$(int32_t version, $String* hostname, int32_t port, $String* protocol, $ControlArray* bindCtls, $OutputStream* trace, $String* socketFactory, $String* username, Object$* passwd) {
	$ClientId::init$(version, hostname, port, protocol, bindCtls, trace, socketFactory);
	$set(this, username, username);
	int32_t pwdHashCode = 0;
	if (passwd == nullptr) {
		$set(this, passwd, nullptr);
	} else if ($instanceOf($bytes, passwd)) {
		$set(this, passwd, $cast($bytes, passwd)->clone());
		pwdHashCode = $Arrays::hashCode($cast($bytes, passwd));
	} else if ($instanceOf($chars, passwd)) {
		$set(this, passwd, $cast($chars, passwd)->clone());
		pwdHashCode = $Arrays::hashCode($cast($chars, passwd));
	} else {
		$set(this, passwd, passwd);
		pwdHashCode = $of(passwd)->hashCode();
	}
	int32_t var$0 = $ClientId::hashCode();
	this->myHash = (var$0 ^ (username != nullptr ? username->hashCode() : 0)) ^ pwdHashCode;
}

bool SimpleClientId::equals(Object$* obj) {
	if (obj == nullptr || !($instanceOf(SimpleClientId, obj))) {
		return false;
	}
	$var(SimpleClientId, other, $cast(SimpleClientId, obj));
	bool var$1 = $ClientId::equals(obj);
	bool var$0 = var$1 && (this->username == $nc(other)->username || (this->username != nullptr && this->username->equals(other->username)));
	if (var$0) {
		bool var$2 = $equals(this->passwd, other->passwd);
		if (!var$2) {
			bool var$3 = this->passwd != nullptr && other->passwd != nullptr;
			if (var$3) {
				bool var$5 = ($instanceOf($String, this->passwd)) && this->passwd->equals(other->passwd);
				bool var$4 = var$5 || (($instanceOf($bytes, this->passwd)) && ($instanceOf($bytes, other->passwd)) && $Arrays::equals($cast($bytes, this->passwd), $cast($bytes, other->passwd)));
				var$3 = var$4 || (($instanceOf($chars, this->passwd)) && ($instanceOf($chars, other->passwd)) && $Arrays::equals($cast($chars, this->passwd), $cast($chars, other->passwd)));
			}
			var$2 = var$3;
		}
		var$0 = var$2;
	}
	return var$0;
}

int32_t SimpleClientId::hashCode() {
	return this->myHash;
}

$String* SimpleClientId::toString() {
	return $str({$($ClientId::toString()), ":"_s, this->username});
}

SimpleClientId::SimpleClientId() {
}

$Class* SimpleClientId::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"username", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SimpleClientId, username)},
		{"passwd", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SimpleClientId, passwd)},
		{"myHash", "I", nullptr, $PRIVATE | $FINAL, $field(SimpleClientId, myHash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(SimpleClientId, init$, void, int32_t, $String*, int32_t, $String*, $ControlArray*, $OutputStream*, $String*, $String*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SimpleClientId, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SimpleClientId, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleClientId, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.SimpleClientId",
		"com.sun.jndi.ldap.ClientId",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleClientId, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleClientId);
	});
	return class$;
}

$Class* SimpleClientId::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com