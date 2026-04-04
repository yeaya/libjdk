#include <com/sun/jndi/ldap/DigestClientId.h>
#include <com/sun/jndi/ldap/SimpleClientId.h>
#include <java/io/OutputStream.h>
#include <java/util/Arrays.h>
#include <java/util/Hashtable.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

#undef SASL_PROPS

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $SimpleClientId = ::com::sun::jndi::ldap::SimpleClientId;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Hashtable = ::java::util::Hashtable;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$StringArray* DigestClientId::SASL_PROPS = nullptr;

void DigestClientId::init$(int32_t version, $String* hostname, int32_t port, $String* protocol, $ControlArray* bindCtls, $OutputStream* trace, $String* socketFactory, $String* username, Object$* passwd, $Hashtable* env) {
	$useLocalObjectStack();
	$SimpleClientId::init$(version, hostname, port, protocol, bindCtls, trace, socketFactory, username, passwd);
	if (env == nullptr) {
		$set(this, propvals, nullptr);
	} else {
		$set(this, propvals, $new($StringArray, DigestClientId::SASL_PROPS->length));
		for (int32_t i = 0; i < DigestClientId::SASL_PROPS->length; ++i) {
			this->propvals->set(i, $$cast($String, env->get(DigestClientId::SASL_PROPS->get(i))));
		}
	}
	int32_t var$0 = $SimpleClientId::hashCode();
	this->myHash = var$0 ^ $Arrays::hashCode(this->propvals);
}

bool DigestClientId::equals(Object$* obj) {
	if (!($instanceOf(DigestClientId, obj))) {
		return false;
	}
	$var(DigestClientId, other, $cast(DigestClientId, obj));
	bool var$0 = this->myHash == $nc(other)->myHash && $SimpleClientId::equals(obj);
	return var$0 && $Arrays::equals(this->propvals, other->propvals);
}

int32_t DigestClientId::hashCode() {
	return this->myHash;
}

$String* DigestClientId::toString() {
	$useLocalObjectStack();
	if (this->propvals != nullptr) {
		$var($StringBuilder, sb, $new($StringBuilder));
		for (int32_t i = 0; i < this->propvals->length; ++i) {
			sb->append(u':');
			if (this->propvals->get(i) != nullptr) {
				sb->append(this->propvals->get(i));
			}
		}
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($SimpleClientId::toString()));
		var$0->append($(sb->toString()));
		return $str(var$0);
	} else {
		return $SimpleClientId::toString();
	}
}

void DigestClientId::clinit$($Class* clazz) {
	$assignStatic(DigestClientId::SASL_PROPS, $new($StringArray, {
		"java.naming.security.sasl.authorizationId"_s,
		"java.naming.security.sasl.realm"_s,
		"javax.security.sasl.qop"_s,
		"javax.security.sasl.strength"_s,
		"javax.security.sasl.reuse"_s,
		"javax.security.sasl.server.authentication"_s,
		"javax.security.sasl.maxbuffer"_s,
		"javax.security.sasl.policy.noplaintext"_s,
		"javax.security.sasl.policy.noactive"_s,
		"javax.security.sasl.policy.nodictionary"_s,
		"javax.security.sasl.policy.noanonymous"_s,
		"javax.security.sasl.policy.forward"_s,
		"javax.security.sasl.policy.credentials"_s
	}));
}

DigestClientId::DigestClientId() {
}

$Class* DigestClientId::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SASL_PROPS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestClientId, SASL_PROPS)},
		{"propvals", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DigestClientId, propvals)},
		{"myHash", "I", nullptr, $PRIVATE | $FINAL, $field(DigestClientId, myHash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Hashtable;)V", "(ILjava/lang/String;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Hashtable<**>;)V", 0, $method(DigestClientId, init$, void, int32_t, $String*, int32_t, $String*, $ControlArray*, $OutputStream*, $String*, $String*, Object$*, $Hashtable*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DigestClientId, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DigestClientId, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DigestClientId, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.DigestClientId",
		"com.sun.jndi.ldap.SimpleClientId",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DigestClientId, name, initialize, &classInfo$$, DigestClientId::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DigestClientId);
	});
	return class$;
}

$Class* DigestClientId::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com