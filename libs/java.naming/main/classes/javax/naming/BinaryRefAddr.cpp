#include <javax/naming/BinaryRefAddr.h>

#include <javax/naming/RefAddr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RefAddr = ::javax::naming::RefAddr;

namespace javax {
	namespace naming {

$FieldInfo _BinaryRefAddr_FieldInfo_[] = {
	{"buf", "[B", nullptr, $PRIVATE, $field(BinaryRefAddr, buf)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BinaryRefAddr, serialVersionUID)},
	{}
};

$MethodInfo _BinaryRefAddr_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC, $method(BinaryRefAddr, init$, void, $String*, $bytes*)},
	{"<init>", "(Ljava/lang/String;[BII)V", nullptr, $PUBLIC, $method(BinaryRefAddr, init$, void, $String*, $bytes*, int32_t, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BinaryRefAddr, equals, bool, Object$*)},
	{"getContent", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BinaryRefAddr, getContent, $Object*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(BinaryRefAddr, hashCode, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BinaryRefAddr, toString, $String*)},
	{}
};

$ClassInfo _BinaryRefAddr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.BinaryRefAddr",
	"javax.naming.RefAddr",
	nullptr,
	_BinaryRefAddr_FieldInfo_,
	_BinaryRefAddr_MethodInfo_
};

$Object* allocate$BinaryRefAddr($Class* clazz) {
	return $of($alloc(BinaryRefAddr));
}

void BinaryRefAddr::init$($String* addrType, $bytes* src) {
	BinaryRefAddr::init$(addrType, src, 0, $nc(src)->length);
}

void BinaryRefAddr::init$($String* addrType, $bytes* src, int32_t offset, int32_t count) {
	$RefAddr::init$(addrType);
	$set(this, buf, nullptr);
	$set(this, buf, $new($bytes, count));
	$System::arraycopy(src, offset, this->buf, 0, count);
}

$Object* BinaryRefAddr::getContent() {
	return $of(this->buf);
}

bool BinaryRefAddr::equals(Object$* obj) {
	if ((obj != nullptr) && ($instanceOf(BinaryRefAddr, obj))) {
		$var(BinaryRefAddr, target, $cast(BinaryRefAddr, obj));
		if ($nc(this->addrType)->compareTo(target->addrType) == 0) {
			if (this->buf == nullptr && target->buf == nullptr) {
				return true;
			}
			if (this->buf == nullptr || target->buf == nullptr || $nc(this->buf)->length != $nc(target->buf)->length) {
				return false;
			}
			for (int32_t i = 0; i < $nc(this->buf)->length; ++i) {
				if ($nc(this->buf)->get(i) != $nc(target->buf)->get(i)) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

int32_t BinaryRefAddr::hashCode() {
	int32_t hash = $nc(this->addrType)->hashCode();
	for (int32_t i = 0; i < $nc(this->buf)->length; ++i) {
		hash += $nc(this->buf)->get(i);
	}
	return hash;
}

$String* BinaryRefAddr::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, str, $new($StringBuilder, $$str({"Address Type: "_s, this->addrType, "\n"_s})));
	str->append("AddressContents: "_s);
	for (int32_t i = 0; i < $nc(this->buf)->length && i < 32; ++i) {
		str->append($$str({$($Integer::toHexString($nc(this->buf)->get(i))), " "_s}));
	}
	if ($nc(this->buf)->length >= 32) {
		str->append(" ...\n"_s);
	}
	return (str->toString());
}

BinaryRefAddr::BinaryRefAddr() {
}

$Class* BinaryRefAddr::load$($String* name, bool initialize) {
	$loadClass(BinaryRefAddr, name, initialize, &_BinaryRefAddr_ClassInfo_, allocate$BinaryRefAddr);
	return class$;
}

$Class* BinaryRefAddr::class$ = nullptr;

	} // naming
} // javax