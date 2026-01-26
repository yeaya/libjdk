#include <org/ietf/jgss/Oid.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <org/ietf/jgss/GSSException.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

#undef FAILURE

using $OidArray = $Array<::org::ietf::jgss::Oid>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GSSException = ::org::ietf::jgss::GSSException;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace org {
	namespace ietf {
		namespace jgss {

$FieldInfo _Oid_FieldInfo_[] = {
	{"oid", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(Oid, oid)},
	{"derEncoding", "[B", nullptr, $PRIVATE, $field(Oid, derEncoding)},
	{}
};

$MethodInfo _Oid_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Oid, init$, void, $String*), "org.ietf.jgss.GSSException"},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(Oid, init$, void, $InputStream*), "org.ietf.jgss.GSSException"},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(Oid, init$, void, $bytes*), "org.ietf.jgss.GSSException"},
	{"containedIn", "([Lorg/ietf/jgss/Oid;)Z", nullptr, $PUBLIC, $virtualMethod(Oid, containedIn, bool, $OidArray*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Oid, equals, bool, Object$*)},
	{"getDER", "()[B", nullptr, $PUBLIC, $virtualMethod(Oid, getDER, $bytes*), "org.ietf.jgss.GSSException"},
	{"getInstance", "(Ljava/lang/String;)Lorg/ietf/jgss/Oid;", nullptr, $STATIC, $staticMethod(Oid, getInstance, Oid*, $String*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(Oid, hashCode, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Oid, toString, $String*)},
	{}
};

$ClassInfo _Oid_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.ietf.jgss.Oid",
	"java.lang.Object",
	nullptr,
	_Oid_FieldInfo_,
	_Oid_MethodInfo_
};

$Object* allocate$Oid($Class* clazz) {
	return $of($alloc(Oid));
}

void Oid::init$($String* strOid) {
	try {
		$set(this, oid, $ObjectIdentifier::of(strOid));
		$set(this, derEncoding, nullptr);
	} catch ($Exception& e) {
		$throwNew($GSSException, $GSSException::FAILURE, $$str({"Improperly formatted Object Identifier String - "_s, strOid}));
	}
}

void Oid::init$($InputStream* derOid) {
	try {
		$var($DerValue, derVal, $new($DerValue, derOid));
		$set(this, derEncoding, derVal->toByteArray());
		$set(this, oid, derVal->getOID());
	} catch ($IOException& e) {
		$throwNew($GSSException, $GSSException::FAILURE, "Improperly formatted ASN.1 DER encoding for Oid"_s);
	}
}

void Oid::init$($bytes* data) {
	try {
		$var($DerValue, derVal, $new($DerValue, data));
		$set(this, derEncoding, derVal->toByteArray());
		$set(this, oid, derVal->getOID());
	} catch ($IOException& e) {
		$throwNew($GSSException, $GSSException::FAILURE, "Improperly formatted ASN.1 DER encoding for Oid"_s);
	}
}

Oid* Oid::getInstance($String* strOid) {
	$var(Oid, retVal, nullptr);
	try {
		$assign(retVal, $new(Oid, strOid));
	} catch ($GSSException& e) {
	}
	return retVal;
}

$String* Oid::toString() {
	return $nc(this->oid)->toString();
}

bool Oid::equals(Object$* other) {
	if ($equals(this, other)) {
		return (true);
	}
	if ($instanceOf(Oid, other)) {
		return $nc(this->oid)->equals($nc(($cast(Oid, other)))->oid);
	} else if ($instanceOf($ObjectIdentifier, other)) {
		return $nc(this->oid)->equals(other);
	} else {
		return false;
	}
}

$bytes* Oid::getDER() {
	$useLocalCurrentObjectStackCache();
	if (this->derEncoding == nullptr) {
		$var($DerOutputStream, dout, $new($DerOutputStream));
		try {
			dout->putOID(this->oid);
		} catch ($IOException& e) {
			$throwNew($GSSException, $GSSException::FAILURE, $(e->getMessage()));
		}
		$set(this, derEncoding, dout->toByteArray());
	}
	return $cast($bytes, $nc(this->derEncoding)->clone());
}

bool Oid::containedIn($OidArray* oids) {
	for (int32_t i = 0; i < $nc(oids)->length; ++i) {
		if ($nc(oids->get(i))->equals(this)) {
			return (true);
		}
	}
	return (false);
}

int32_t Oid::hashCode() {
	return $nc(this->oid)->hashCode();
}

Oid::Oid() {
}

$Class* Oid::load$($String* name, bool initialize) {
	$loadClass(Oid, name, initialize, &_Oid_ClassInfo_, allocate$Oid);
	return class$;
}

$Class* Oid::class$ = nullptr;

		} // jgss
	} // ietf
} // org