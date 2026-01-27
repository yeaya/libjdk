#include <java/beans/Beans.h>

#include <com/sun/beans/finder/ClassFinder.h>
#include <java/applet/Applet.h>
#include <java/applet/AppletContext.h>
#include <java/applet/AppletStub.h>
#include <java/awt/Component.h>
#include <java/beans/AppletInitializer.h>
#include <java/beans/BeansAppletContext.h>
#include <java/beans/BeansAppletStub.h>
#include <java/beans/Introspector.h>
#include <java/beans/ObjectInputStreamWithLoader.h>
#include <java/beans/ThreadGroupContext.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/Modifier.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $Applet = ::java::applet::Applet;
using $AppletContext = ::java::applet::AppletContext;
using $AppletStub = ::java::applet::AppletStub;
using $AppletInitializer = ::java::beans::AppletInitializer;
using $BeansAppletContext = ::java::beans::BeansAppletContext;
using $BeansAppletStub = ::java::beans::BeansAppletStub;
using $Introspector = ::java::beans::Introspector;
using $ObjectInputStreamWithLoader = ::java::beans::ObjectInputStreamWithLoader;
using $ThreadGroupContext = ::java::beans::ThreadGroupContext;
using $BeanContext = ::java::beans::beancontext::BeanContext;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Modifier = ::java::lang::reflect::Modifier;
using $URL = ::java::net::URL;

namespace java {
	namespace beans {

$NamedAttribute Beans_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Beans_MethodAnnotations_instantiate4[] = {
	{"Ljava/lang/Deprecated;", Beans_Attribute_var$0},
	{}
};

$MethodInfo _Beans_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Beans, init$, void)},
	{"getInstanceOf", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $STATIC, $staticMethod(Beans, getInstanceOf, $Object*, Object$*, $Class*)},
	{"instantiate", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(Beans, instantiate, $Object*, $ClassLoader*, $String*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"instantiate", "(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/beans/beancontext/BeanContext;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(Beans, instantiate, $Object*, $ClassLoader*, $String*, $BeanContext*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"instantiate", "(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/beans/beancontext/BeanContext;Ljava/beans/AppletInitializer;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Beans, instantiate, $Object*, $ClassLoader*, $String*, $BeanContext*, $AppletInitializer*), "java.io.IOException,java.lang.ClassNotFoundException", nullptr, _Beans_MethodAnnotations_instantiate4},
	{"isDesignTime", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Beans, isDesignTime, bool)},
	{"isGuiAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Beans, isGuiAvailable, bool)},
	{"isInstanceOf", "(Ljava/lang/Object;Ljava/lang/Class;)Z", "(Ljava/lang/Object;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $staticMethod(Beans, isInstanceOf, bool, Object$*, $Class*)},
	{"setDesignTime", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Beans, setDesignTime, void, bool), "java.lang.SecurityException"},
	{"setGuiAvailable", "(Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Beans, setGuiAvailable, void, bool), "java.lang.SecurityException"},
	{"unsafeBeanContextAdd", "(Ljava/beans/beancontext/BeanContext;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Beans, unsafeBeanContextAdd, void, $BeanContext*, Object$*)},
	{}
};

$ClassInfo _Beans_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.Beans",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Beans_MethodInfo_
};

$Object* allocate$Beans($Class* clazz) {
	return $of($alloc(Beans));
}

void Beans::init$() {
}

$Object* Beans::instantiate($ClassLoader* cls, $String* beanName) {
	return $of(Beans::instantiate(cls, beanName, nullptr, nullptr));
}

$Object* Beans::instantiate($ClassLoader* cls, $String* beanName, $BeanContext* beanContext) {
	return $of(Beans::instantiate(cls, beanName, beanContext, nullptr));
}

$Object* Beans::instantiate($ClassLoader* cls$renamed, $String* beanName, $BeanContext* beanContext, $AppletInitializer* initializer) {
	$load(Beans);
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, cls, cls$renamed);
	$beforeCallerSensitive();
	$var($InputStream, ins, nullptr);
	$var($ObjectInputStream, oins, nullptr);
	$var($Object, result, nullptr);
	bool serialized = false;
	$var($IOException, serex, nullptr);
	if (cls == nullptr) {
		try {
			$assign(cls, $ClassLoader::getSystemClassLoader());
		} catch ($SecurityException& ex) {
		}
	}
	$var($String, serName, $($nc(beanName)->replace(u'.', u'/'))->concat(".ser"_s));
	if (cls == nullptr) {
		$assign(ins, $ClassLoader::getSystemResourceAsStream(serName));
	} else {
		$assign(ins, $nc(cls)->getResourceAsStream(serName));
	}
	if (ins != nullptr) {
		try {
			if (cls == nullptr) {
				$assign(oins, $new($ObjectInputStream, ins));
			} else {
				$assign(oins, $new($ObjectInputStreamWithLoader, ins, cls));
			}
			$assign(result, $nc(oins)->readObject());
			serialized = true;
			oins->close();
		} catch ($IOException& ex) {
			ins->close();
			$assign(serex, ex);
		} catch ($ClassNotFoundException& ex) {
			ins->close();
			$throw(ex);
		}
	}
	if (result == nullptr) {
		$Class* cl = nullptr;
		try {
			cl = $ClassFinder::findClass(beanName, cls);
		} catch ($ClassNotFoundException& ex) {
			if (serex != nullptr) {
				$throw(serex);
			}
			$throw(ex);
		}
		if (!$Modifier::isPublic($nc(cl)->getModifiers())) {
			$throwNew($ClassNotFoundException, $$str({""_s, cl, " : no public access"_s}));
		}
		try {
			$assign(result, $nc(cl)->newInstance());
		} catch ($Exception& ex) {
			$throwNew($ClassNotFoundException, $$str({""_s, cl, " : "_s, ex}), ex);
		}
	}
	if (result != nullptr) {
		$var($AppletStub, stub, nullptr);
		if ($instanceOf($Applet, result)) {
			$var($Applet, applet, $cast($Applet, result));
			bool needDummies = initializer == nullptr;
			if (needDummies) {
				$var($String, resourceName, nullptr);
				if (serialized) {
					$assign(resourceName, $(beanName->replace(u'.', u'/'))->concat(".ser"_s));
				} else {
					$assign(resourceName, $(beanName->replace(u'.', u'/'))->concat(".class"_s));
				}
				$var($URL, objectUrl, nullptr);
				$var($URL, codeBase, nullptr);
				$var($URL, docBase, nullptr);
				if (cls == nullptr) {
					$assign(objectUrl, $ClassLoader::getSystemResource(resourceName));
				} else {
					$assign(objectUrl, $nc(cls)->getResource(resourceName));
				}
				if (objectUrl != nullptr) {
					$var($String, s, objectUrl->toExternalForm());
					if ($nc(s)->endsWith(resourceName)) {
						int32_t var$0 = s->length();
						int32_t ix = var$0 - $nc(resourceName)->length();
						$assign(codeBase, $new($URL, $(s->substring(0, ix))));
						$assign(docBase, codeBase);
						ix = s->lastIndexOf((int32_t)u'/');
						if (ix >= 0) {
							$assign(docBase, $new($URL, $(s->substring(0, ix + 1))));
						}
					}
				}
				$var($BeansAppletContext, context, $new($BeansAppletContext, applet));
				$assign(stub, static_cast<$AppletStub*>($new($BeansAppletStub, applet, context, codeBase, docBase)));
				applet->setStub(stub);
			} else {
				$nc(initializer)->initialize(applet, beanContext);
			}
			if (beanContext != nullptr) {
				unsafeBeanContextAdd(beanContext, result);
			}
			if (!serialized) {
				applet->setSize(100, 100);
				applet->init();
			}
			if (needDummies) {
				$nc(($cast($BeansAppletStub, stub)))->active = true;
			} else {
				$nc(initializer)->activate(applet);
			}
		} else if (beanContext != nullptr) {
			unsafeBeanContextAdd(beanContext, result);
		}
	}
	return $of(result);
}

void Beans::unsafeBeanContextAdd($BeanContext* beanContext, Object$* res) {
	$nc(beanContext)->add(res);
}

$Object* Beans::getInstanceOf(Object$* bean, $Class* targetType) {
	return $of(bean);
}

bool Beans::isInstanceOf(Object$* bean, $Class* targetType) {
	return $Introspector::isSubclass($nc($of(bean))->getClass(), targetType);
}

bool Beans::isDesignTime() {
	return $nc($($ThreadGroupContext::getContext()))->isDesignTime();
}

bool Beans::isGuiAvailable() {
	return $nc($($ThreadGroupContext::getContext()))->isGuiAvailable();
}

void Beans::setDesignTime(bool isDesignTime) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertiesAccess();
	}
	$nc($($ThreadGroupContext::getContext()))->setDesignTime(isDesignTime);
}

void Beans::setGuiAvailable(bool isGuiAvailable) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertiesAccess();
	}
	$nc($($ThreadGroupContext::getContext()))->setGuiAvailable(isGuiAvailable);
}

Beans::Beans() {
}

$Class* Beans::load$($String* name, bool initialize) {
	$loadClass(Beans, name, initialize, &_Beans_ClassInfo_, allocate$Beans);
	return class$;
}

$Class* Beans::class$ = nullptr;

	} // beans
} // java