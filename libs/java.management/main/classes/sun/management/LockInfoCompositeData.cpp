#include <sun/management/LockInfoCompositeData.h>
#include <java/lang/management/LockInfo.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Map.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataSupport.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/LazyCompositeData.h>
#include <sun/management/MappedMXBeanType.h>
#include <sun/management/Util.h>
#include <jcpp.h>

#undef CLASS_NAME
#undef IDENTITY_HASH_CODE
#undef LOCK_INFO_COMPOSITE_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $LockInfo = ::java::lang::management::LockInfo;
using $Map = ::java::util::Map;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataSupport = ::javax::management::openmbean::CompositeDataSupport;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $LazyCompositeData = ::sun::management::LazyCompositeData;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;
using $Util = ::sun::management::Util;

namespace sun {
	namespace management {

$CompositeType* LockInfoCompositeData::LOCK_INFO_COMPOSITE_TYPE = nullptr;
$String* LockInfoCompositeData::CLASS_NAME = nullptr;
$String* LockInfoCompositeData::IDENTITY_HASH_CODE = nullptr;

void LockInfoCompositeData::init$($LockInfo* li) {
	$LazyCompositeData::init$();
	$set(this, lock, li);
}

$LockInfo* LockInfoCompositeData::getLockInfo() {
	return this->lock;
}

$CompositeData* LockInfoCompositeData::toCompositeData($LockInfo* li) {
	$init(LockInfoCompositeData);
	if (li == nullptr) {
		return nullptr;
	}
	$var(LockInfoCompositeData, licd, $new(LockInfoCompositeData, li));
	return licd->getCompositeData();
}

$CompositeData* LockInfoCompositeData::getCompositeData() {
	$useLocalObjectStack();
	$var($Object, var$0, LockInfoCompositeData::CLASS_NAME);
	$var($Object, var$1, $nc(this->lock)->getClassName());
	$var($Object, var$2, LockInfoCompositeData::IDENTITY_HASH_CODE);
	$var($Map, items, $Map::of(var$0, var$1, var$2, $($Integer::valueOf(this->lock->getIdentityHashCode()))));
	try {
		return $new($CompositeDataSupport, LockInfoCompositeData::LOCK_INFO_COMPOSITE_TYPE, items);
	} catch ($OpenDataException& e) {
		$throw($($Util::newException(e)));
	}
	$shouldNotReachHere();
}

$CompositeType* LockInfoCompositeData::compositeType() {
	$init(LockInfoCompositeData);
	return LockInfoCompositeData::LOCK_INFO_COMPOSITE_TYPE;
}

$LockInfo* LockInfoCompositeData::toLockInfo($CompositeData* cd) {
	$init(LockInfoCompositeData);
	$useLocalObjectStack();
	if (cd == nullptr) {
		$throwNew($NullPointerException, "Null CompositeData"_s);
	}
	if (!isTypeMatched(LockInfoCompositeData::LOCK_INFO_COMPOSITE_TYPE, $($nc(cd)->getCompositeType()))) {
		$throwNew($IllegalArgumentException, "Unexpected composite type for LockInfo"_s);
	}
	$var($String, className, getString(cd, LockInfoCompositeData::CLASS_NAME));
	int32_t identityHashCode = getInt(cd, LockInfoCompositeData::IDENTITY_HASH_CODE);
	return $new($LockInfo, className, identityHashCode);
}

void LockInfoCompositeData::clinit$($Class* clazz) {
	$assignStatic(LockInfoCompositeData::CLASS_NAME, "className"_s);
	$assignStatic(LockInfoCompositeData::IDENTITY_HASH_CODE, "identityHashCode"_s);
	{
		try {
			$load($LockInfo);
			$assignStatic(LockInfoCompositeData::LOCK_INFO_COMPOSITE_TYPE, $cast($CompositeType, $MappedMXBeanType::toOpenType($LockInfo::class$)));
		} catch ($OpenDataException& e) {
			$throw($($Util::newException(e)));
		}
	}
}

LockInfoCompositeData::LockInfoCompositeData() {
}

$Class* LockInfoCompositeData::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"lock", "Ljava/lang/management/LockInfo;", nullptr, $PRIVATE | $FINAL, $field(LockInfoCompositeData, lock)},
		{"LOCK_INFO_COMPOSITE_TYPE", "Ljavax/management/openmbean/CompositeType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LockInfoCompositeData, LOCK_INFO_COMPOSITE_TYPE)},
		{"CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LockInfoCompositeData, CLASS_NAME)},
		{"IDENTITY_HASH_CODE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LockInfoCompositeData, IDENTITY_HASH_CODE)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LockInfoCompositeData, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/management/LockInfo;)V", nullptr, $PRIVATE, $method(LockInfoCompositeData, init$, void, $LockInfo*)},
		{"compositeType", "()Ljavax/management/openmbean/CompositeType;", nullptr, $STATIC, $staticMethod(LockInfoCompositeData, compositeType, $CompositeType*)},
		{"getCompositeData", "()Ljavax/management/openmbean/CompositeData;", nullptr, $PROTECTED, $virtualMethod(LockInfoCompositeData, getCompositeData, $CompositeData*)},
		{"getLockInfo", "()Ljava/lang/management/LockInfo;", nullptr, $PUBLIC, $virtualMethod(LockInfoCompositeData, getLockInfo, $LockInfo*)},
		{"toCompositeData", "(Ljava/lang/management/LockInfo;)Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC | $STATIC, $staticMethod(LockInfoCompositeData, toCompositeData, $CompositeData*, $LockInfo*)},
		{"toLockInfo", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/management/LockInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(LockInfoCompositeData, toLockInfo, $LockInfo*, $CompositeData*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.management.LockInfoCompositeData",
		"sun.management.LazyCompositeData",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LockInfoCompositeData, name, initialize, &classInfo$$, LockInfoCompositeData::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LockInfoCompositeData));
	});
	return class$;
}

$Class* LockInfoCompositeData::class$ = nullptr;

	} // management
} // sun