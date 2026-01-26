#include <sun/management/BaseOperatingSystemImpl.h>

#include <java/lang/management/ManagementFactory.h>
#include <javax/management/ObjectName.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/management/Util.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef OPERATING_SYSTEM_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $ObjectName = ::javax::management::ObjectName;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Util = ::sun::management::Util;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

$FieldInfo _BaseOperatingSystemImpl_FieldInfo_[] = {
	{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE | $FINAL, $field(BaseOperatingSystemImpl, jvm)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BaseOperatingSystemImpl, unsafe)},
	{"loadavg", "[D", nullptr, $PRIVATE, $field(BaseOperatingSystemImpl, loadavg)},
	{}
};

$MethodInfo _BaseOperatingSystemImpl_MethodInfo_[] = {
	{"<init>", "(Lsun/management/VMManagement;)V", nullptr, $PROTECTED, $method(BaseOperatingSystemImpl, init$, void, $VMManagement*)},
	{"getArch", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BaseOperatingSystemImpl, getArch, $String*)},
	{"getAvailableProcessors", "()I", nullptr, $PUBLIC, $virtualMethod(BaseOperatingSystemImpl, getAvailableProcessors, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BaseOperatingSystemImpl, getName, $String*)},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC, $virtualMethod(BaseOperatingSystemImpl, getObjectName, $ObjectName*)},
	{"getSystemLoadAverage", "()D", nullptr, $PUBLIC, $virtualMethod(BaseOperatingSystemImpl, getSystemLoadAverage, double)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BaseOperatingSystemImpl, getVersion, $String*)},
	{}
};

$ClassInfo _BaseOperatingSystemImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.BaseOperatingSystemImpl",
	"java.lang.Object",
	"java.lang.management.OperatingSystemMXBean",
	_BaseOperatingSystemImpl_FieldInfo_,
	_BaseOperatingSystemImpl_MethodInfo_
};

$Object* allocate$BaseOperatingSystemImpl($Class* clazz) {
	return $of($alloc(BaseOperatingSystemImpl));
}

$Unsafe* BaseOperatingSystemImpl::unsafe = nullptr;

void BaseOperatingSystemImpl::init$($VMManagement* vm) {
	$set(this, loadavg, $new($doubles, 1));
	$set(this, jvm, vm);
}

$String* BaseOperatingSystemImpl::getName() {
	return $nc(this->jvm)->getOsName();
}

$String* BaseOperatingSystemImpl::getArch() {
	return $nc(this->jvm)->getOsArch();
}

$String* BaseOperatingSystemImpl::getVersion() {
	return $nc(this->jvm)->getOsVersion();
}

int32_t BaseOperatingSystemImpl::getAvailableProcessors() {
	return $nc(this->jvm)->getAvailableProcessors();
}

double BaseOperatingSystemImpl::getSystemLoadAverage() {
	if ($nc(BaseOperatingSystemImpl::unsafe)->getLoadAverage(this->loadavg, 1) == 1) {
		return $nc(this->loadavg)->get(0);
	} else {
		return -1.0;
	}
}

$ObjectName* BaseOperatingSystemImpl::getObjectName() {
	$init($ManagementFactory);
	return $Util::newObjectName($ManagementFactory::OPERATING_SYSTEM_MXBEAN_NAME);
}

void clinit$BaseOperatingSystemImpl($Class* class$) {
	$assignStatic(BaseOperatingSystemImpl::unsafe, $Unsafe::getUnsafe());
}

BaseOperatingSystemImpl::BaseOperatingSystemImpl() {
}

$Class* BaseOperatingSystemImpl::load$($String* name, bool initialize) {
	$loadClass(BaseOperatingSystemImpl, name, initialize, &_BaseOperatingSystemImpl_ClassInfo_, clinit$BaseOperatingSystemImpl, allocate$BaseOperatingSystemImpl);
	return class$;
}

$Class* BaseOperatingSystemImpl::class$ = nullptr;

	} // management
} // sun