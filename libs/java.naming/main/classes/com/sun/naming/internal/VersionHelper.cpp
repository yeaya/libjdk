#include <com/sun/naming/internal/VersionHelper.h>
#include <com/sun/naming/internal/VersionHelper$InputStreamEnumeration.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <java/util/StringTokenizer.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/ldap/LdapContext.h>
#include <jcpp.h>

#undef CONTROL_FACTORIES
#undef DNS_URL
#undef INITIAL_CONTEXT_FACTORY
#undef OBJECT_FACTORIES
#undef PROPS
#undef PROVIDER_URL
#undef STATE_FACTORIES
#undef TRUST_URL_CODE_BASE
#undef URL_PKG_PREFIXES

using $URLArray = $Array<::java::net::URL>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $VersionHelper$InputStreamEnumeration = ::com::sun::naming::internal::VersionHelper$InputStreamEnumeration;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Context = ::javax::naming::Context;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $LdapContext = ::javax::naming::ldap::LdapContext;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class VersionHelper$$Lambda$lambda$getJndiProperty$1 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getJndiProperty$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(int32_t i) {
		this->i = i;
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$getJndiProperty$1(i));
	}
	int32_t i = 0;
};
$Class* VersionHelper$$Lambda$lambda$getJndiProperty$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"i", "I", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getJndiProperty$1, i)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(VersionHelper$$Lambda$lambda$getJndiProperty$1, init$, void, int32_t)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$$Lambda$lambda$getJndiProperty$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getJndiProperty$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VersionHelper$$Lambda$lambda$getJndiProperty$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper$$Lambda$lambda$getJndiProperty$1);
	});
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getJndiProperty$1::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getJndiProperties$2$1 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getJndiProperties$2$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$getJndiProperties$2());
	}
};
$Class* VersionHelper$$Lambda$lambda$getJndiProperties$2$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VersionHelper$$Lambda$lambda$getJndiProperties$2$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$$Lambda$lambda$getJndiProperties$2$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getJndiProperties$2$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(VersionHelper$$Lambda$lambda$getJndiProperties$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper$$Lambda$lambda$getJndiProperties$2$1);
	});
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getJndiProperties$2$1::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getResourceAsStream$3$2 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Class* c, $String* name) {
		this->c = c;
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return VersionHelper::lambda$getResourceAsStream$3(c, name);
	}
	$Class* c = nullptr;
	$String* name = nullptr;
};
$Class* VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, c)},
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, init$, void, $Class*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getResourceAsStream$3$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2);
	});
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* filename) {
		$set(this, filename, filename);
	}
	virtual $Object* run() override {
		 return VersionHelper::lambda$getJavaHomeConfStream$4(filename);
	}
	$String* filename = nullptr;
};
$Class* VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"filename", "Ljava/lang/String;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, filename)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, init$, void, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3);
	});
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getResources$5$4 : public $PrivilegedExceptionAction {
	$class(VersionHelper$$Lambda$lambda$getResources$5$4, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($ClassLoader* cl, $String* name) {
		$set(this, cl, cl);
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return VersionHelper::lambda$getResources$5(cl, name);
	}
	$ClassLoader* cl = nullptr;
	$String* name = nullptr;
};
$Class* VersionHelper$$Lambda$lambda$getResources$5$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cl", "Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getResources$5$4, cl)},
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(VersionHelper$$Lambda$lambda$getResources$5$4, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(VersionHelper$$Lambda$lambda$getResources$5$4, init$, void, $ClassLoader*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$$Lambda$lambda$getResources$5$4, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getResources$5$4",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VersionHelper$$Lambda$lambda$getResources$5$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper$$Lambda$lambda$getResources$5$4);
	});
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getResources$5$4::class$ = nullptr;

class VersionHelper$$Lambda$lambda$getContextClassLoader$6$5 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return VersionHelper::lambda$getContextClassLoader$6();
	}
};
$Class* VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.naming.internal.VersionHelper$$Lambda$lambda$getContextClassLoader$6$5",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5);
	});
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::class$ = nullptr;

class VersionHelper$$Lambda$lambda$static$0$6 : public $PrivilegedAction {
	$class(VersionHelper$$Lambda$lambda$static$0$6, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(VersionHelper::lambda$static$0());
	}
};
$Class* VersionHelper$$Lambda$lambda$static$0$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VersionHelper$$Lambda$lambda$static$0$6, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$$Lambda$lambda$static$0$6, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.naming.internal.VersionHelper$$Lambda$lambda$static$0$6",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(VersionHelper$$Lambda$lambda$static$0$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper$$Lambda$lambda$static$0$6);
	});
	return class$;
}
$Class* VersionHelper$$Lambda$lambda$static$0$6::class$ = nullptr;

VersionHelper* VersionHelper::helper = nullptr;
bool VersionHelper::TRUST_URL_CODE_BASE = false;
$StringArray* VersionHelper::PROPS = nullptr;

void VersionHelper::init$() {
}

VersionHelper* VersionHelper::getVersionHelper() {
	$init(VersionHelper);
	return VersionHelper::helper;
}

$Class* VersionHelper::loadClass($String* className) {
	return loadClass(className, $(getContextClassLoader()));
}

$Class* VersionHelper::loadClassWithoutInit($String* className) {
	return loadClass(className, false, $(getContextClassLoader()));
}

$Class* VersionHelper::loadClass($String* className, $String* codebase) {
	$useLocalObjectStack();
	if (VersionHelper::TRUST_URL_CODE_BASE) {
		$var($ClassLoader, parent, getContextClassLoader());
		$var($ClassLoader, cl, $URLClassLoader::newInstance($(getUrlArray(codebase)), parent));
		return loadClass(className, cl);
	} else {
		return nullptr;
	}
}

$Class* VersionHelper::loadClass($String* className, bool initialize, $ClassLoader* cl) {
	$beforeCallerSensitive();
	$Class* cls = $Class::forName(className, initialize, cl);
	return cls;
}

$Class* VersionHelper::loadClass($String* className, $ClassLoader* cl) {
	return loadClass(className, true, cl);
}

$String* VersionHelper::getJndiProperty(int32_t i) {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, $new(VersionHelper$$Lambda$lambda$getJndiProperty$1, i));
	return $cast($String, $AccessController::doPrivileged(act));
}

$StringArray* VersionHelper::getJndiProperties() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, $new(VersionHelper$$Lambda$lambda$getJndiProperties$2$1));
	$var($Properties, sysProps, $cast($Properties, $AccessController::doPrivileged(act)));
	if (sysProps == nullptr) {
		return nullptr;
	}
	$var($StringArray, jProps, $new($StringArray, VersionHelper::PROPS->length));
	for (int32_t i = 0; i < VersionHelper::PROPS->length; ++i) {
		jProps->set(i, $($nc(sysProps)->getProperty(VersionHelper::PROPS->get(i))));
	}
	return jProps;
}

$String* VersionHelper::resolveName($Class* c, $String* name$renamed) {
	$init(VersionHelper);
	$useLocalObjectStack();
	$var($String, name, name$renamed);
	if (name == nullptr) {
		return name;
	}
	if (!$nc(name)->startsWith("/"_s)) {
		if (!$nc(c)->isPrimitive()) {
			$var($String, baseName, c->getPackageName());
			if (!$nc(baseName)->isEmpty()) {
				$assign(name, $str({$(baseName->replace(u'.', u'/')), "/"_s, name}));
			}
		}
	} else {
		$assign(name, name->substring(1));
	}
	return name;
}

$InputStream* VersionHelper::getResourceAsStream($Class* c, $String* name) {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, $new(VersionHelper$$Lambda$lambda$getResourceAsStream$3$2, c, name));
	return $cast($InputStream, $AccessController::doPrivileged(act));
}

$InputStream* VersionHelper::getJavaHomeConfStream($String* filename) {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, $new(VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3, filename));
	return $cast($InputStream, $AccessController::doPrivileged(act));
}

$NamingEnumeration* VersionHelper::getResources($ClassLoader* cl, $String* name) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Enumeration, urls, nullptr);
	$var($PrivilegedExceptionAction, act, $new(VersionHelper$$Lambda$lambda$getResources$5$4, cl, name));
	try {
		$assign(urls, $cast($Enumeration, $AccessController::doPrivileged(act)));
	} catch ($PrivilegedActionException& e) {
		$throw($$cast($IOException, e->getException()));
	}
	return $new($VersionHelper$InputStreamEnumeration, this, urls);
}

$ClassLoader* VersionHelper::getContextClassLoader() {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, $new(VersionHelper$$Lambda$lambda$getContextClassLoader$6$5));
	return $cast($ClassLoader, $AccessController::doPrivileged(act));
}

$URLArray* VersionHelper::getUrlArray($String* codebase) {
	$init(VersionHelper);
	$useLocalObjectStack();
	$var($StringTokenizer, parser, $new($StringTokenizer, codebase));
	$var($List, list, $new($ArrayList));
	while (parser->hasMoreTokens()) {
		list->add($$new($URL, $(parser->nextToken())));
	}
	return $cast($URLArray, list->toArray($$new($URLArray, 0)));
}

$ClassLoader* VersionHelper::lambda$getContextClassLoader$6() {
	$init(VersionHelper);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $($Thread::currentThread())->getContextClassLoader());
	if (loader == nullptr) {
		$assign(loader, $ClassLoader::getSystemClassLoader());
	}
	return loader;
}

$Enumeration* VersionHelper::lambda$getResources$5($ClassLoader* cl, $String* name) {
	$init(VersionHelper);
	return (cl == nullptr) ? $ClassLoader::getSystemResources(name) : cl->getResources(name);
}

$InputStream* VersionHelper::lambda$getJavaHomeConfStream$4($String* filename) {
	$init(VersionHelper);
	$useLocalObjectStack();
	try {
		$var($String, javahome, $System::getProperty("java.home"_s));
		if (javahome == nullptr) {
			return nullptr;
		}
		return $Files::newInputStream($($Path::of(javahome, $$new($StringArray, {
			"conf"_s,
			filename
		}))), $$new($OpenOptionArray, 0));
	} catch ($Exception& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$InputStream* VersionHelper::lambda$getResourceAsStream$3($Class* c, $String* name) {
	$init(VersionHelper);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		return $$nc($nc(c)->getModule())->getResourceAsStream($(resolveName(c, name)));
	} catch ($IOException& x) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Properties* VersionHelper::lambda$getJndiProperties$2() {
	$init(VersionHelper);
	try {
		return $System::getProperties();
	} catch ($SecurityException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* VersionHelper::lambda$getJndiProperty$1(int32_t i) {
	$init(VersionHelper);
	try {
		return $System::getProperty(VersionHelper::PROPS->get(i));
	} catch ($SecurityException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$String* VersionHelper::lambda$static$0() {
	$init(VersionHelper);
	return $System::getProperty("com.sun.jndi.ldap.object.trustURLCodebase"_s, "false"_s);
}

void VersionHelper::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$assignStatic(VersionHelper::helper, $new(VersionHelper));
	{
		$var($PrivilegedAction, act, $new(VersionHelper$$Lambda$lambda$static$0$6));
		$var($String, trust, $cast($String, $AccessController::doPrivileged(act)));
		VersionHelper::TRUST_URL_CODE_BASE = "true"_s->equalsIgnoreCase(trust);
	}
	$init($Context);
	$init($LdapContext);
	$assignStatic(VersionHelper::PROPS, $new($StringArray, {
		$Context::INITIAL_CONTEXT_FACTORY,
		$Context::OBJECT_FACTORIES,
		$Context::URL_PKG_PREFIXES,
		$Context::STATE_FACTORIES,
		$Context::PROVIDER_URL,
		$Context::DNS_URL,
		$LdapContext::CONTROL_FACTORIES
	}));
}

VersionHelper::VersionHelper() {
}

$Class* VersionHelper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.naming.internal.VersionHelper$$Lambda$lambda$getJndiProperty$1")) {
			return VersionHelper$$Lambda$lambda$getJndiProperty$1::load$(name, initialize);
		}
		if (name->equals("com.sun.naming.internal.VersionHelper$$Lambda$lambda$getJndiProperties$2$1")) {
			return VersionHelper$$Lambda$lambda$getJndiProperties$2$1::load$(name, initialize);
		}
		if (name->equals("com.sun.naming.internal.VersionHelper$$Lambda$lambda$getResourceAsStream$3$2")) {
			return VersionHelper$$Lambda$lambda$getResourceAsStream$3$2::load$(name, initialize);
		}
		if (name->equals("com.sun.naming.internal.VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3")) {
			return VersionHelper$$Lambda$lambda$getJavaHomeConfStream$4$3::load$(name, initialize);
		}
		if (name->equals("com.sun.naming.internal.VersionHelper$$Lambda$lambda$getResources$5$4")) {
			return VersionHelper$$Lambda$lambda$getResources$5$4::load$(name, initialize);
		}
		if (name->equals("com.sun.naming.internal.VersionHelper$$Lambda$lambda$getContextClassLoader$6$5")) {
			return VersionHelper$$Lambda$lambda$getContextClassLoader$6$5::load$(name, initialize);
		}
		if (name->equals("com.sun.naming.internal.VersionHelper$$Lambda$lambda$static$0$6")) {
			return VersionHelper$$Lambda$lambda$static$0$6::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"helper", "Lcom/sun/naming/internal/VersionHelper;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionHelper, helper)},
		{"TRUST_URL_CODE_BASE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VersionHelper, TRUST_URL_CODE_BASE)},
		{"PROPS", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(VersionHelper, PROPS)},
		{"INITIAL_CONTEXT_FACTORY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, INITIAL_CONTEXT_FACTORY)},
		{"OBJECT_FACTORIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, OBJECT_FACTORIES)},
		{"URL_PKG_PREFIXES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, URL_PKG_PREFIXES)},
		{"STATE_FACTORIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, STATE_FACTORIES)},
		{"PROVIDER_URL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, PROVIDER_URL)},
		{"DNS_URL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, DNS_URL)},
		{"CONTROL_FACTORIES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(VersionHelper, CONTROL_FACTORIES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(VersionHelper, init$, void)},
		{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, 0, $method(VersionHelper, getContextClassLoader, $ClassLoader*)},
		{"getJavaHomeConfStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, 0, $method(VersionHelper, getJavaHomeConfStream, $InputStream*, $String*)},
		{"getJndiProperties", "()[Ljava/lang/String;", nullptr, 0, $method(VersionHelper, getJndiProperties, $StringArray*)},
		{"getJndiProperty", "(I)Ljava/lang/String;", nullptr, 0, $method(VersionHelper, getJndiProperty, $String*, int32_t)},
		{"getResourceAsStream", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/io/InputStream;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/io/InputStream;", 0, $method(VersionHelper, getResourceAsStream, $InputStream*, $Class*, $String*)},
		{"getResources", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljava/io/InputStream;>;", 0, $method(VersionHelper, getResources, $NamingEnumeration*, $ClassLoader*, $String*), "java.io.IOException"},
		{"getUrlArray", "(Ljava/lang/String;)[Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $staticMethod(VersionHelper, getUrlArray, $URLArray*, $String*), "java.net.MalformedURLException"},
		{"getVersionHelper", "()Lcom/sun/naming/internal/VersionHelper;", nullptr, $PUBLIC | $STATIC, $staticMethod(VersionHelper, getVersionHelper, VersionHelper*)},
		{"lambda$getContextClassLoader$6", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(VersionHelper, lambda$getContextClassLoader$6, $ClassLoader*)},
		{"lambda$getJavaHomeConfStream$4", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(VersionHelper, lambda$getJavaHomeConfStream$4, $InputStream*, $String*)},
		{"lambda$getJndiProperties$2", "()Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(VersionHelper, lambda$getJndiProperties$2, $Properties*)},
		{"lambda$getJndiProperty$1", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(VersionHelper, lambda$getJndiProperty$1, $String*, int32_t)},
		{"lambda$getResourceAsStream$3", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(VersionHelper, lambda$getResourceAsStream$3, $InputStream*, $Class*, $String*)},
		{"lambda$getResources$5", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/util/Enumeration;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(VersionHelper, lambda$getResources$5, $Enumeration*, $ClassLoader*, $String*), "java.lang.Exception"},
		{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(VersionHelper, lambda$static$0, $String*)},
		{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $method(VersionHelper, loadClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"loadClass", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $method(VersionHelper, loadClass, $Class*, $String*, $String*), "java.lang.ClassNotFoundException,java.net.MalformedURLException"},
		{"loadClass", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class<*>;", 0, $method(VersionHelper, loadClass, $Class*, $String*, bool, $ClassLoader*), "java.lang.ClassNotFoundException"},
		{"loadClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", 0, $method(VersionHelper, loadClass, $Class*, $String*, $ClassLoader*), "java.lang.ClassNotFoundException"},
		{"loadClassWithoutInit", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $method(VersionHelper, loadClassWithoutInit, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"resolveName", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(VersionHelper, resolveName, $String*, $Class*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.naming.internal.VersionHelper$InputStreamEnumeration", "com.sun.naming.internal.VersionHelper", "InputStreamEnumeration", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.naming.internal.VersionHelper",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.naming.internal.VersionHelper$InputStreamEnumeration"
	};
	$loadClass(VersionHelper, name, initialize, &classInfo$$, VersionHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper);
	});
	return class$;
}

$Class* VersionHelper::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com