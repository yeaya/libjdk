#include <com/sun/naming/internal/ObjectFactoriesFilter$FactoryInfo.h>
#include <com/sun/naming/internal/ObjectFactoriesFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

int64_t ObjectFactoriesFilter$FactoryInfo::arrayLength() {
	return -1;
}

int64_t ObjectFactoriesFilter$FactoryInfo::depth() {
	return 1;
}

int64_t ObjectFactoriesFilter$FactoryInfo::references() {
	return 0;
}

int64_t ObjectFactoriesFilter$FactoryInfo::streamBytes() {
	return 0;
}

$Class* ObjectFactoriesFilter$FactoryInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"arrayLength", "()J", nullptr, $PUBLIC, $virtualMethod(ObjectFactoriesFilter$FactoryInfo, arrayLength, int64_t)},
		{"depth", "()J", nullptr, $PUBLIC, $virtualMethod(ObjectFactoriesFilter$FactoryInfo, depth, int64_t)},
		{"references", "()J", nullptr, $PUBLIC, $virtualMethod(ObjectFactoriesFilter$FactoryInfo, references, int64_t)},
		{"streamBytes", "()J", nullptr, $PUBLIC, $virtualMethod(ObjectFactoriesFilter$FactoryInfo, streamBytes, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo", "com.sun.naming.internal.ObjectFactoriesFilter", "FactoryInfo", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.io.ObjectInputFilter$FilterInfo", "java.io.ObjectInputFilter", "FilterInfo", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo",
		nullptr,
		"java.io.ObjectInputFilter$FilterInfo",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"com.sun.naming.internal.ObjectFactoriesFilter"
	};
	$loadClass(ObjectFactoriesFilter$FactoryInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectFactoriesFilter$FactoryInfo);
	});
	return class$;
}

$Class* ObjectFactoriesFilter$FactoryInfo::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com