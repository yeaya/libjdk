#include <sun/security/krb5/internal/rcache/AuthTimeWithHash.h>
#include <java/lang/AssertionError.h>
#include <java/util/Objects.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/security/krb5/internal/rcache/AuthTime.h>
#include <jcpp.h>

#undef DEFAULT_HASH_ALG

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $AuthTime = ::sun::security::krb5::internal::rcache::AuthTime;

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {
				namespace rcache {

$Object* AuthTimeWithHash::clone() {
	return this->$AuthTime::clone();
}

void AuthTimeWithHash::finalize() {
	this->$AuthTime::finalize();
}

$String* AuthTimeWithHash::DEFAULT_HASH_ALG = nullptr;

$String* AuthTimeWithHash::realAlg($String* alg) {
	$init(AuthTimeWithHash);
	$useLocalObjectStack();
	{
		$var($String, s1915$, alg);
		int32_t tmp1915$ = -1;
		switch ($nc(s1915$)->hashCode()) {
		case 0x0021b90e:
			if (s1915$->equals("HASH"_s)) {
				tmp1915$ = 0;
			}
			break;
		case (int32_t)0x91b72647:
			if (s1915$->equals("SHA256"_s)) {
				tmp1915$ = 1;
			}
			break;
		}
		switch (tmp1915$) {
		case 0:
			return "MD5"_s;
		case 1:
			return "SHA-256"_s;
		default:
			$throwNew($AssertionError, $$of($str({alg, " is not HASH or SHA256"_s})));
		}
	}
}

void AuthTimeWithHash::init$($String* client, $String* server, int32_t ctime, int32_t cusec, $String* hashAlg, $String* hash) {
	$AuthTime::init$(client, server, ctime, cusec);
	$set(this, hashAlg, hashAlg);
	$set(this, hash, hash);
}

bool AuthTimeWithHash::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(AuthTimeWithHash, o))) {
		return false;
	}
	$var(AuthTimeWithHash, that, $cast(AuthTimeWithHash, o));
	bool var$2 = $Objects::equals(this->hash, $nc(that)->hash);
	bool var$1 = var$2 && $Objects::equals(this->hashAlg, that->hashAlg);
	bool var$0 = var$1 && $Objects::equals(this->client, that->client);
	return var$0 && $Objects::equals(this->server, that->server) && this->ctime == that->ctime && this->cusec == that->cusec;
}

int32_t AuthTimeWithHash::hashCode() {
	return $Objects::hash($$new($ObjectArray, {this->hash}));
}

$String* AuthTimeWithHash::toString() {
	$useLocalObjectStack();
	return $String::format("%d/%06d/%s/%s"_s, $$new($ObjectArray, {
		$($Integer::valueOf(this->ctime)),
		$($Integer::valueOf(this->cusec)),
		this->hash,
		this->client
	}));
}

int32_t AuthTimeWithHash::compareTo(AuthTimeWithHash* other) {
	int32_t cmp = 0;
	if (this->ctime != $nc(other)->ctime) {
		cmp = $Integer::compare(this->ctime, other->ctime);
	} else if (this->cusec != other->cusec) {
		cmp = $Integer::compare(this->cusec, other->cusec);
	} else {
		cmp = $nc(this->hash)->compareTo(other->hash);
	}
	return cmp;
}

bool AuthTimeWithHash::sameTimeDiffHash(AuthTimeWithHash* old) {
	if (!this->isSameIgnoresHash(old)) {
		return false;
	}
	bool var$0 = $nc(this->hashAlg)->equals($nc(old)->hashAlg);
	return var$0 && !$nc(this->hash)->equals(old->hash);
}

bool AuthTimeWithHash::isSameIgnoresHash($AuthTime* old) {
	bool var$0 = $nc(this->client)->equals($nc(old)->client);
	return var$0 && $nc(this->server)->equals(old->server) && this->ctime == old->ctime && this->cusec == old->cusec;
}

$bytes* AuthTimeWithHash::encode(bool withHash) {
	$useLocalObjectStack();
	$var($String, cstring, nullptr);
	$var($String, sstring, nullptr);
	if (withHash) {
		$assign(cstring, ""_s);
		$assign(sstring, $String::format("%s:%s %d:%s %d:%s"_s, $$new($ObjectArray, {
			this->hashAlg,
			this->hash,
			$($Integer::valueOf($nc(this->client)->length())),
			this->client,
			$($Integer::valueOf($nc(this->server)->length())),
			this->server
		})));
	} else {
		$assign(cstring, this->client);
		$assign(sstring, this->server);
	}
	return encode0(cstring, sstring);
}

int32_t AuthTimeWithHash::compareTo(Object$* other) {
	return this->compareTo($cast(AuthTimeWithHash, other));
}

void AuthTimeWithHash::clinit$($Class* clazz) {
	{
		if ($GetBooleanAction::privilegedGetProperty("jdk.krb5.rcache.useMD5"_s)) {
			$assignStatic(AuthTimeWithHash::DEFAULT_HASH_ALG, "HASH"_s);
		} else {
			$assignStatic(AuthTimeWithHash::DEFAULT_HASH_ALG, "SHA256"_s);
		}
	}
}

AuthTimeWithHash::AuthTimeWithHash() {
}

$Class* AuthTimeWithHash::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_HASH_ALG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthTimeWithHash, DEFAULT_HASH_ALG)},
		{"hashAlg", "Ljava/lang/String;", nullptr, $FINAL, $field(AuthTimeWithHash, hashAlg)},
		{"hash", "Ljava/lang/String;", nullptr, $FINAL, $field(AuthTimeWithHash, hash)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;IILjava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AuthTimeWithHash, init$, void, $String*, $String*, int32_t, int32_t, $String*, $String*)},
		{"compareTo", "(Lsun/security/krb5/internal/rcache/AuthTimeWithHash;)I", nullptr, $PUBLIC, $virtualMethod(AuthTimeWithHash, compareTo, int32_t, AuthTimeWithHash*)},
		{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AuthTimeWithHash, compareTo, int32_t, Object$*)},
		{"encode", "(Z)[B", nullptr, $PUBLIC, $virtualMethod(AuthTimeWithHash, encode, $bytes*, bool)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AuthTimeWithHash, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AuthTimeWithHash, hashCode, int32_t)},
		{"isSameIgnoresHash", "(Lsun/security/krb5/internal/rcache/AuthTime;)Z", nullptr, $PUBLIC, $virtualMethod(AuthTimeWithHash, isSameIgnoresHash, bool, $AuthTime*)},
		{"realAlg", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(AuthTimeWithHash, realAlg, $String*, $String*)},
		{"sameTimeDiffHash", "(Lsun/security/krb5/internal/rcache/AuthTimeWithHash;)Z", nullptr, $PUBLIC, $virtualMethod(AuthTimeWithHash, sameTimeDiffHash, bool, AuthTimeWithHash*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AuthTimeWithHash, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.krb5.internal.rcache.AuthTimeWithHash",
		"sun.security.krb5.internal.rcache.AuthTime",
		"java.lang.Comparable",
		fieldInfos$$,
		methodInfos$$,
		"Lsun/security/krb5/internal/rcache/AuthTime;Ljava/lang/Comparable<Lsun/security/krb5/internal/rcache/AuthTimeWithHash;>;"
	};
	$loadClass(AuthTimeWithHash, name, initialize, &classInfo$$, AuthTimeWithHash::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AuthTimeWithHash));
	});
	return class$;
}

$Class* AuthTimeWithHash::class$ = nullptr;

				} // rcache
			} // internal
		} // krb5
	} // security
} // sun