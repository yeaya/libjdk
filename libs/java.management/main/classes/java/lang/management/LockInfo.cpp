#include <java/lang/management/LockInfo.h>
#include <javax/management/openmbean/CompositeData.h>
#include <sun/management/LockInfoCompositeData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $LockInfoCompositeData = ::sun::management::LockInfoCompositeData;

namespace java {
	namespace lang {
		namespace management {

void LockInfo::init$($String* className, int32_t identityHashCode) {
	if (className == nullptr) {
		$throwNew($NullPointerException, "Parameter className cannot be null"_s);
	}
	$set(this, className, className);
	this->identityHashCode = identityHashCode;
}

void LockInfo::init$(Object$* lock) {
	$set(this, className, $nc($of(lock))->getClass()->getName());
	this->identityHashCode = $System::identityHashCode(lock);
}

$String* LockInfo::getClassName() {
	return this->className;
}

int32_t LockInfo::getIdentityHashCode() {
	return this->identityHashCode;
}

LockInfo* LockInfo::from($CompositeData* cd) {
	if (cd == nullptr) {
		return nullptr;
	}
	if ($instanceOf($LockInfoCompositeData, cd)) {
		return $cast($LockInfoCompositeData, cd)->getLockInfo();
	} else {
		return $LockInfoCompositeData::toLockInfo(cd);
	}
}

$String* LockInfo::toString() {
	$useLocalObjectStack();
	return $str({this->className, $$str(u'@'), $($Integer::toHexString(this->identityHashCode))});
}

LockInfo::LockInfo() {
}

$Class* LockInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LockInfo, className)},
		{"identityHashCode", "I", nullptr, $PRIVATE, $field(LockInfo, identityHashCode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(LockInfo, init$, void, $String*, int32_t)},
		{"<init>", "(Ljava/lang/Object;)V", nullptr, 0, $method(LockInfo, init$, void, Object$*)},
		{"from", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/management/LockInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(LockInfo, from, LockInfo*, $CompositeData*)},
		{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LockInfo, getClassName, $String*)},
		{"getIdentityHashCode", "()I", nullptr, $PUBLIC, $virtualMethod(LockInfo, getIdentityHashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LockInfo, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.management.LockInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LockInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LockInfo);
	});
	return class$;
}

$Class* LockInfo::class$ = nullptr;

		} // management
	} // lang
} // java