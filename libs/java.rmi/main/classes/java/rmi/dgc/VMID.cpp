#include <java/rmi/dgc/VMID.h>
#include <java/rmi/server/UID.h>
#include <java/security/SecureRandom.h>
#include <jcpp.h>

#undef VMID

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UID = ::java::rmi::server::UID;
using $SecureRandom = ::java::security::SecureRandom;

namespace java {
	namespace rmi {
		namespace dgc {

$bytes* VMID::randomBytes = nullptr;

void VMID::init$() {
	$set(this, addr, VMID::randomBytes);
	$set(this, uid, $new($UID));
}

bool VMID::isUnique() {
	$init(VMID);
	return true;
}

int32_t VMID::hashCode() {
	return $nc(this->uid)->hashCode();
}

bool VMID::equals(Object$* obj) {
	if ($instanceOf(VMID, obj)) {
		$var(VMID, vmid, $cast(VMID, obj));
		if (!$nc(this->uid)->equals(vmid->uid)) {
			return false;
		}
		if ((this->addr == nullptr) ^ (vmid->addr == nullptr)) {
			return false;
		}
		if (this->addr != nullptr) {
			if (this->addr->length != $nc(vmid->addr)->length) {
				return false;
			}
			for (int32_t i = 0; i < this->addr->length; ++i) {
				if (this->addr->get(i) != vmid->addr->get(i)) {
					return false;
				}
			}
		}
		return true;
	} else {
		return false;
	}
}

$String* VMID::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	if (this->addr != nullptr) {
		for (int32_t i = 0; i < this->addr->length; ++i) {
			int32_t x = this->addr->get(i) & 0xff;
			sb->append($$str({(x < 16 ? "0"_s : ""_s), $($Integer::toString(x, 16))}));
		}
	}
	sb->append(u':');
	sb->append($($nc(this->uid)->toString()));
	return sb->toString();
}

void VMID::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($SecureRandom, secureRandom, $new($SecureRandom));
		$var($bytes, bytes, $new($bytes, 8));
		secureRandom->nextBytes(bytes);
		$assignStatic(VMID::randomBytes, bytes);
	}
}

VMID::VMID() {
}

$Class* VMID::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"randomBytes", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VMID, randomBytes)},
		{"addr", "[B", nullptr, $PRIVATE, $field(VMID, addr)},
		{"uid", "Ljava/rmi/server/UID;", nullptr, $PRIVATE, $field(VMID, uid)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VMID, serialVersionUID)},
		{}
	};
	$CompoundAttribute isUniquemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VMID, init$, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(VMID, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(VMID, hashCode, int32_t)},
		{"isUnique", "()Z", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(VMID, isUnique, bool), nullptr, nullptr, isUniquemethodAnnotations$$},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(VMID, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.rmi.dgc.VMID",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VMID, name, initialize, &classInfo$$, VMID::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VMID);
	});
	return class$;
}

$Class* VMID::class$ = nullptr;

		} // dgc
	} // rmi
} // java