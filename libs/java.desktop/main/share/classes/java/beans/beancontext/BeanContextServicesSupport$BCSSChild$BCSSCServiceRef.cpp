#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceRef.h>

#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef.h>
#include <java/beans/beancontext/BeanContextServicesSupport$BCSSChild.h>
#include <jcpp.h>

using $BeanContextServicesSupport$BCSSChild = ::java::beans::beancontext::BeanContextServicesSupport$BCSSChild;
using $BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef = ::java::beans::beancontext::BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {
		namespace beancontext {

$FieldInfo _BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_FieldInfo_[] = {
	{"this$1", "Ljava/beans/beancontext/BeanContextServicesSupport$BCSSChild;", nullptr, $FINAL | $SYNTHETIC, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, this$1)},
	{"serviceClassRef", "Ljava/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef;", nullptr, 0, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, serviceClassRef)},
	{"refCnt", "I", nullptr, 0, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, refCnt)},
	{"delegated", "Z", nullptr, 0, $field(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, delegated)},
	{}
};

$MethodInfo _BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_MethodInfo_[] = {
	{"<init>", "(Ljava/beans/beancontext/BeanContextServicesSupport$BCSSChild;Ljava/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef;Z)V", nullptr, 0, $method(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, init$, void, $BeanContextServicesSupport$BCSSChild*, $BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef*, bool)},
	{"addRef", "()V", nullptr, 0, $virtualMethod(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, addRef, void)},
	{"getServiceClassRef", "()Ljava/beans/beancontext/BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef;", nullptr, 0, $virtualMethod(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, getServiceClassRef, $BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef*)},
	{"isDelegated", "()Z", nullptr, 0, $virtualMethod(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, isDelegated, bool)},
	{"release", "()I", nullptr, 0, $virtualMethod(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, release, int32_t)},
	{}
};

$InnerClassInfo _BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_InnerClassesInfo_[] = {
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSChild", "java.beans.beancontext.BeanContextServicesSupport", "BCSSChild", $PROTECTED},
	{"java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceRef", "java.beans.beancontext.BeanContextServicesSupport$BCSSChild", "BCSSCServiceRef", 0},
	{}
};

$ClassInfo _BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceRef",
	"java.lang.Object",
	nullptr,
	_BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_FieldInfo_,
	_BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_MethodInfo_,
	nullptr,
	nullptr,
	_BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.beancontext.BeanContextServicesSupport"
};

$Object* allocate$BeanContextServicesSupport$BCSSChild$BCSSCServiceRef($Class* clazz) {
	return $of($alloc(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef));
}

void BeanContextServicesSupport$BCSSChild$BCSSCServiceRef::init$($BeanContextServicesSupport$BCSSChild* this$1, $BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef* scref, bool isDelegated) {
	$set(this, this$1, this$1);
	this->refCnt = 1;
	this->delegated = false;
	$set(this, serviceClassRef, scref);
	this->delegated = isDelegated;
}

void BeanContextServicesSupport$BCSSChild$BCSSCServiceRef::addRef() {
	++this->refCnt;
}

int32_t BeanContextServicesSupport$BCSSChild$BCSSCServiceRef::release() {
	return --this->refCnt;
}

$BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef* BeanContextServicesSupport$BCSSChild$BCSSCServiceRef::getServiceClassRef() {
	return this->serviceClassRef;
}

bool BeanContextServicesSupport$BCSSChild$BCSSCServiceRef::isDelegated() {
	return this->delegated;
}

BeanContextServicesSupport$BCSSChild$BCSSCServiceRef::BeanContextServicesSupport$BCSSChild$BCSSCServiceRef() {
}

$Class* BeanContextServicesSupport$BCSSChild$BCSSCServiceRef::load$($String* name, bool initialize) {
	$loadClass(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, name, initialize, &_BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_ClassInfo_, allocate$BeanContextServicesSupport$BCSSChild$BCSSCServiceRef);
	return class$;
}

$Class* BeanContextServicesSupport$BCSSChild$BCSSCServiceRef::class$ = nullptr;

		} // beancontext
	} // beans
} // java