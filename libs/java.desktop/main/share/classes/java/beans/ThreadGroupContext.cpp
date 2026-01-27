#include <java/beans/ThreadGroupContext.h>

#include <com/sun/beans/finder/BeanInfoFinder.h>
#include <com/sun/beans/finder/PropertyEditorFinder.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/ThreadGroupContext$1.h>
#include <java/beans/WeakIdentityMap.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $BeanInfoFinder = ::com::sun::beans::finder::BeanInfoFinder;
using $PropertyEditorFinder = ::com::sun::beans::finder::PropertyEditorFinder;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $BeanInfo = ::java::beans::BeanInfo;
using $ThreadGroupContext$1 = ::java::beans::ThreadGroupContext$1;
using $WeakIdentityMap = ::java::beans::WeakIdentityMap;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace java {
	namespace beans {

$FieldInfo _ThreadGroupContext_FieldInfo_[] = {
	{"contexts", "Ljava/beans/WeakIdentityMap;", "Ljava/beans/WeakIdentityMap<Ljava/beans/ThreadGroupContext;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ThreadGroupContext, contexts)},
	{"isDesignTime", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ThreadGroupContext, isDesignTime$)},
	{"isGuiAvailable", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $VOLATILE, $field(ThreadGroupContext, isGuiAvailable$)},
	{"beanInfoCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/beans/BeanInfo;>;", $PRIVATE, $field(ThreadGroupContext, beanInfoCache)},
	{"beanInfoFinder", "Lcom/sun/beans/finder/BeanInfoFinder;", nullptr, $PRIVATE, $field(ThreadGroupContext, beanInfoFinder)},
	{"propertyEditorFinder", "Lcom/sun/beans/finder/PropertyEditorFinder;", nullptr, $PRIVATE, $field(ThreadGroupContext, propertyEditorFinder)},
	{}
};

$MethodInfo _ThreadGroupContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(ThreadGroupContext, init$, void)},
	{"clearBeanInfoCache", "()V", nullptr, $SYNCHRONIZED, $method(ThreadGroupContext, clearBeanInfoCache, void)},
	{"getBeanInfo", "(Ljava/lang/Class;)Ljava/beans/BeanInfo;", "(Ljava/lang/Class<*>;)Ljava/beans/BeanInfo;", $SYNCHRONIZED, $method(ThreadGroupContext, getBeanInfo, $BeanInfo*, $Class*)},
	{"getBeanInfoFinder", "()Lcom/sun/beans/finder/BeanInfoFinder;", nullptr, $SYNCHRONIZED, $method(ThreadGroupContext, getBeanInfoFinder, $BeanInfoFinder*)},
	{"getContext", "()Ljava/beans/ThreadGroupContext;", nullptr, $STATIC, $staticMethod(ThreadGroupContext, getContext, ThreadGroupContext*)},
	{"getPropertyEditorFinder", "()Lcom/sun/beans/finder/PropertyEditorFinder;", nullptr, $SYNCHRONIZED, $method(ThreadGroupContext, getPropertyEditorFinder, $PropertyEditorFinder*)},
	{"isDesignTime", "()Z", nullptr, 0, $method(ThreadGroupContext, isDesignTime, bool)},
	{"isGuiAvailable", "()Z", nullptr, 0, $method(ThreadGroupContext, isGuiAvailable, bool)},
	{"putBeanInfo", "(Ljava/lang/Class;Ljava/beans/BeanInfo;)Ljava/beans/BeanInfo;", "(Ljava/lang/Class<*>;Ljava/beans/BeanInfo;)Ljava/beans/BeanInfo;", $SYNCHRONIZED, $method(ThreadGroupContext, putBeanInfo, $BeanInfo*, $Class*, $BeanInfo*)},
	{"removeBeanInfo", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $SYNCHRONIZED, $method(ThreadGroupContext, removeBeanInfo, void, $Class*)},
	{"setDesignTime", "(Z)V", nullptr, 0, $method(ThreadGroupContext, setDesignTime, void, bool)},
	{"setGuiAvailable", "(Z)V", nullptr, 0, $method(ThreadGroupContext, setGuiAvailable, void, bool)},
	{}
};

$InnerClassInfo _ThreadGroupContext_InnerClassesInfo_[] = {
	{"java.beans.ThreadGroupContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ThreadGroupContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.ThreadGroupContext",
	"java.lang.Object",
	nullptr,
	_ThreadGroupContext_FieldInfo_,
	_ThreadGroupContext_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadGroupContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.beans.ThreadGroupContext$1"
};

$Object* allocate$ThreadGroupContext($Class* clazz) {
	return $of($alloc(ThreadGroupContext));
}

$WeakIdentityMap* ThreadGroupContext::contexts = nullptr;

ThreadGroupContext* ThreadGroupContext::getContext() {
	$init(ThreadGroupContext);
	$useLocalCurrentObjectStackCache();
	return $cast(ThreadGroupContext, $nc(ThreadGroupContext::contexts)->get($($($Thread::currentThread())->getThreadGroup())));
}

void ThreadGroupContext::init$() {
}

bool ThreadGroupContext::isDesignTime() {
	return this->isDesignTime$;
}

void ThreadGroupContext::setDesignTime(bool isDesignTime) {
	this->isDesignTime$ = isDesignTime;
}

bool ThreadGroupContext::isGuiAvailable() {
	$var($Boolean, isGuiAvailable, this->isGuiAvailable$);
	return (isGuiAvailable != nullptr) ? $nc(isGuiAvailable)->booleanValue() : !$GraphicsEnvironment::isHeadless();
}

void ThreadGroupContext::setGuiAvailable(bool isGuiAvailable) {
	$set(this, isGuiAvailable$, $Boolean::valueOf(isGuiAvailable));
}

$BeanInfo* ThreadGroupContext::getBeanInfo($Class* type) {
	$synchronized(this) {
		return (this->beanInfoCache != nullptr) ? $cast($BeanInfo, $nc(this->beanInfoCache)->get(type)) : ($BeanInfo*)nullptr;
	}
}

$BeanInfo* ThreadGroupContext::putBeanInfo($Class* type, $BeanInfo* info) {
	$synchronized(this) {
		if (this->beanInfoCache == nullptr) {
			$set(this, beanInfoCache, $new($WeakHashMap));
		}
		return $cast($BeanInfo, $nc(this->beanInfoCache)->put(type, info));
	}
}

void ThreadGroupContext::removeBeanInfo($Class* type) {
	$synchronized(this) {
		if (this->beanInfoCache != nullptr) {
			$nc(this->beanInfoCache)->remove(type);
		}
	}
}

void ThreadGroupContext::clearBeanInfoCache() {
	$synchronized(this) {
		if (this->beanInfoCache != nullptr) {
			$nc(this->beanInfoCache)->clear();
		}
	}
}

$BeanInfoFinder* ThreadGroupContext::getBeanInfoFinder() {
	$synchronized(this) {
		if (this->beanInfoFinder == nullptr) {
			$set(this, beanInfoFinder, $new($BeanInfoFinder));
		}
		return this->beanInfoFinder;
	}
}

$PropertyEditorFinder* ThreadGroupContext::getPropertyEditorFinder() {
	$synchronized(this) {
		if (this->propertyEditorFinder == nullptr) {
			$set(this, propertyEditorFinder, $new($PropertyEditorFinder));
		}
		return this->propertyEditorFinder;
	}
}

void clinit$ThreadGroupContext($Class* class$) {
	$assignStatic(ThreadGroupContext::contexts, $new($ThreadGroupContext$1));
}

ThreadGroupContext::ThreadGroupContext() {
}

$Class* ThreadGroupContext::load$($String* name, bool initialize) {
	$loadClass(ThreadGroupContext, name, initialize, &_ThreadGroupContext_ClassInfo_, clinit$ThreadGroupContext, allocate$ThreadGroupContext);
	return class$;
}

$Class* ThreadGroupContext::class$ = nullptr;

	} // beans
} // java