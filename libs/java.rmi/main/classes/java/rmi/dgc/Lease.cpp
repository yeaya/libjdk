#include <java/rmi/dgc/Lease.h>
#include <java/rmi/dgc/VMID.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VMID = ::java::rmi::dgc::VMID;

namespace java {
	namespace rmi {
		namespace dgc {

void Lease::init$($VMID* id, int64_t duration) {
	$set(this, vmid, id);
	this->value = duration;
}

$VMID* Lease::getVMID() {
	return this->vmid;
}

int64_t Lease::getValue() {
	return this->value;
}

Lease::Lease() {
}

$Class* Lease::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"vmid", "Ljava/rmi/dgc/VMID;", nullptr, $PRIVATE, $field(Lease, vmid)},
		{"value", "J", nullptr, $PRIVATE, $field(Lease, value)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Lease, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/rmi/dgc/VMID;J)V", nullptr, $PUBLIC, $method(Lease, init$, void, $VMID*, int64_t)},
		{"getVMID", "()Ljava/rmi/dgc/VMID;", nullptr, $PUBLIC, $method(Lease, getVMID, $VMID*)},
		{"getValue", "()J", nullptr, $PUBLIC, $method(Lease, getValue, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.rmi.dgc.Lease",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Lease, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Lease);
	});
	return class$;
}

$Class* Lease::class$ = nullptr;

		} // dgc
	} // rmi
} // java