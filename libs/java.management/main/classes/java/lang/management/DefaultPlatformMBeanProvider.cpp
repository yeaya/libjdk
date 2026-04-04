#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$1.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$10.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$11.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$2.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$3.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$4.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$5.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$6.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$7.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$8.h>
#include <java/lang/management/DefaultPlatformMBeanProvider$9.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <sun/management/spi/PlatformMBeanProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider$1 = ::java::lang::management::DefaultPlatformMBeanProvider$1;
using $DefaultPlatformMBeanProvider$10 = ::java::lang::management::DefaultPlatformMBeanProvider$10;
using $DefaultPlatformMBeanProvider$11 = ::java::lang::management::DefaultPlatformMBeanProvider$11;
using $DefaultPlatformMBeanProvider$2 = ::java::lang::management::DefaultPlatformMBeanProvider$2;
using $DefaultPlatformMBeanProvider$3 = ::java::lang::management::DefaultPlatformMBeanProvider$3;
using $DefaultPlatformMBeanProvider$4 = ::java::lang::management::DefaultPlatformMBeanProvider$4;
using $DefaultPlatformMBeanProvider$5 = ::java::lang::management::DefaultPlatformMBeanProvider$5;
using $DefaultPlatformMBeanProvider$6 = ::java::lang::management::DefaultPlatformMBeanProvider$6;
using $DefaultPlatformMBeanProvider$7 = ::java::lang::management::DefaultPlatformMBeanProvider$7;
using $DefaultPlatformMBeanProvider$8 = ::java::lang::management::DefaultPlatformMBeanProvider$8;
using $DefaultPlatformMBeanProvider$9 = ::java::lang::management::DefaultPlatformMBeanProvider$9;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $PlatformMBeanProvider = ::sun::management::spi::PlatformMBeanProvider;

namespace java {
	namespace lang {
		namespace management {

void DefaultPlatformMBeanProvider::init$() {
	$PlatformMBeanProvider::init$();
	$set(this, mxbeanList, $Collections::unmodifiableList($(init())));
}

$List* DefaultPlatformMBeanProvider::getPlatformComponentList() {
	return this->mxbeanList;
}

$List* DefaultPlatformMBeanProvider::init() {
	$useLocalObjectStack();
	$var($ArrayList, initMBeanList, $new($ArrayList));
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$1, this));
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$2, this));
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$3, this));
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$4, this));
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$5, this));
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$6, this));
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$7, this));
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$8, this));
	if ($ManagementFactoryHelper::isPlatformLoggingMXBeanAvailable()) {
		initMBeanList->add($$new($DefaultPlatformMBeanProvider$9, this));
	}
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$10, this));
	initMBeanList->add($$new($DefaultPlatformMBeanProvider$11, this));
	initMBeanList->trimToSize();
	return initMBeanList;
}

DefaultPlatformMBeanProvider::DefaultPlatformMBeanProvider() {
}

$Class* DefaultPlatformMBeanProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mxbeanList", "Ljava/util/List;", "Ljava/util/List<Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider, mxbeanList)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultPlatformMBeanProvider, init$, void)},
		{"getPlatformComponentList", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider, getPlatformComponentList, $List*)},
		{"init", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;>;", $PRIVATE, $method(DefaultPlatformMBeanProvider, init, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.management.DefaultPlatformMBeanProvider$11", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$10", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$9", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$8", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$7", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$6", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$5", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$4", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$3", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$2", nullptr, nullptr, 0},
		{"java.lang.management.DefaultPlatformMBeanProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.management.DefaultPlatformMBeanProvider",
		"sun.management.spi.PlatformMBeanProvider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.management.DefaultPlatformMBeanProvider$11,java.lang.management.DefaultPlatformMBeanProvider$10,java.lang.management.DefaultPlatformMBeanProvider$9,java.lang.management.DefaultPlatformMBeanProvider$8,java.lang.management.DefaultPlatformMBeanProvider$7,java.lang.management.DefaultPlatformMBeanProvider$6,java.lang.management.DefaultPlatformMBeanProvider$5,java.lang.management.DefaultPlatformMBeanProvider$4,java.lang.management.DefaultPlatformMBeanProvider$3,java.lang.management.DefaultPlatformMBeanProvider$2,java.lang.management.DefaultPlatformMBeanProvider$1"
	};
	$loadClass(DefaultPlatformMBeanProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultPlatformMBeanProvider);
	});
	return class$;
}

$Class* DefaultPlatformMBeanProvider::class$ = nullptr;

		} // management
	} // lang
} // java