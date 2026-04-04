#include <com/sun/jndi/ldap/LdapCtxFactory.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapDnsProviderService.h>
#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>
#include <com/sun/jndi/url/ldap/ldapURLContextFactory.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/naming/ConfigurationException.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/RefAddr.h>
#include <javax/naming/Reference.h>
#include <javax/naming/StringRefAddr.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/spi/LdapDnsProviderResult.h>
#include <javax/naming/spi/ObjectFactory.h>
#include <jcpp.h>

#undef ADDRESS_TYPE
#undef BIND_CONTROLS
#undef DEFAULT_HOST
#undef DEFAULT_PORT
#undef JAVA_ATTRIBUTES
#undef PROVIDER_URL
#undef REFERRAL
#undef TYPENAME

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapDnsProviderService = ::com::sun::jndi::ldap::LdapDnsProviderService;
using $LdapReferralException = ::com::sun::jndi::ldap::LdapReferralException;
using $LdapURL = ::com::sun::jndi::ldap::LdapURL;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $AtomicContext = ::com::sun::jndi::toolkit::ctx::AtomicContext;
using $ComponentDirContext = ::com::sun::jndi::toolkit::ctx::ComponentDirContext;
using $ldapURLContextFactory = ::com::sun::jndi::url::ldap::ldapURLContextFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $ConfigurationException = ::javax::naming::ConfigurationException;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NamingException = ::javax::naming::NamingException;
using $RefAddr = ::javax::naming::RefAddr;
using $Reference = ::javax::naming::Reference;
using $StringRefAddr = ::javax::naming::StringRefAddr;
using $Attribute = ::javax::naming::directory::Attribute;
using $BasicAttribute = ::javax::naming::directory::BasicAttribute;
using $DirContext = ::javax::naming::directory::DirContext;
using $LdapDnsProviderResult = ::javax::naming::ldap::spi::LdapDnsProviderResult;
using $ObjectFactory = ::javax::naming::spi::ObjectFactory;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

int32_t LdapCtxFactory::hashCode() {
	 return this->$ObjectFactory::hashCode();
}

bool LdapCtxFactory::equals(Object$* arg0) {
	 return this->$ObjectFactory::equals(arg0);
}

$Object* LdapCtxFactory::clone() {
	 return this->$ObjectFactory::clone();
}

$String* LdapCtxFactory::toString() {
	 return this->$ObjectFactory::toString();
}

void LdapCtxFactory::finalize() {
	this->$ObjectFactory::finalize();
}

$String* LdapCtxFactory::ADDRESS_TYPE = nullptr;

void LdapCtxFactory::init$() {
}

$Object* LdapCtxFactory::getObjectInstance(Object$* ref, $Name* name, $Context* nameCtx, $Hashtable* env) {
	$useLocalObjectStack();
	if (!isLdapRef(ref)) {
		return nullptr;
	}
	$var($ObjectFactory, factory, $new($ldapURLContextFactory));
	$var($StringArray, urls, getURLs($cast($Reference, ref)));
	return factory->getObjectInstance(urls, name, nameCtx, env);
}

$Context* LdapCtxFactory::getInitialContext($Hashtable* envprops) {
	$useLocalObjectStack();
	try {
		$init($Context);
		$var($String, providerUrl, (envprops != nullptr) ? $cast($String, envprops->get($Context::PROVIDER_URL)) : ($String*)nullptr);
		if (providerUrl == nullptr) {
			$init($LdapCtx);
			return $cast($AtomicContext, $new($LdapCtx, ""_s, $LdapCtx::DEFAULT_HOST, $LdapCtx::DEFAULT_PORT, envprops, false));
		}
		$var($StringArray, urls, $LdapURL::fromList(providerUrl));
		if ($nc(urls)->length == 0) {
			$throwNew($ConfigurationException, $$str({$Context::PROVIDER_URL, " property does not contain a URL"_s}));
		}
		return getLdapCtxInstance(urls, envprops);
	} catch ($LdapReferralException& e) {
		$init($Context);
		if (envprops != nullptr && "throw"_s->equals($(envprops->get($Context::REFERRAL)))) {
			$throw(e);
		}
		$init($LdapCtx);
		$var($ControlArray, bindCtls, (envprops != nullptr) ? $cast($ControlArray, envprops->get($LdapCtx::BIND_CONTROLS)) : ($ControlArray*)nullptr);
		return $cast($AtomicContext, $cast($LdapCtx, e->getReferralContext(envprops, bindCtls)));
	}
	$shouldNotReachHere();
}

bool LdapCtxFactory::isLdapRef(Object$* obj) {
	$init(LdapCtxFactory);
	$useLocalObjectStack();
	if (!($instanceOf($Reference, obj))) {
		return false;
	}
	$var($String, thisClassName, LdapCtxFactory::class$->getName());
	$var($Reference, ref, $cast($Reference, obj));
	return $nc(thisClassName)->equals($($nc(ref)->getFactoryClassName()));
}

$StringArray* LdapCtxFactory::getURLs($Reference* ref) {
	$init(LdapCtxFactory);
	$useLocalObjectStack();
	int32_t size = 0;
	$var($StringArray, urls, $new($StringArray, $nc(ref)->size()));
	$var($Enumeration, addrs, ref->getAll());
	while ($nc(addrs)->hasMoreElements()) {
		$var($RefAddr, addr, $cast($RefAddr, addrs->nextElement()));
		if (($instanceOf($StringRefAddr, addr)) && $$nc(addr->getType())->equals(LdapCtxFactory::ADDRESS_TYPE)) {
			urls->set(size++, $$cast($String, addr->getContent()));
		}
	}
	if (size == 0) {
		$throw($$new($ConfigurationException, "Reference contains no valid addresses"_s));
	}
	if (size == ref->size()) {
		return urls;
	}
	$var($StringArray, urls2, $new($StringArray, size));
	$System::arraycopy(urls, 0, urls2, 0, size);
	return urls2;
}

$DirContext* LdapCtxFactory::getLdapCtxInstance(Object$* urlInfo, $Hashtable* env) {
	$init(LdapCtxFactory);
	if ($instanceOf($String, urlInfo)) {
		return getUsingURL($cast($String, urlInfo), env);
	} else if ($instanceOf($StringArray, urlInfo)) {
		return getUsingURLs($cast($StringArray, urlInfo), env);
	} else {
		$throwNew($IllegalArgumentException, "argument must be an LDAP URL String or array of them"_s);
	}
}

$DirContext* LdapCtxFactory::getUsingURL($String* url, $Hashtable* env) {
	$init(LdapCtxFactory);
	$useLocalObjectStack();
	try {
		$var($LdapDnsProviderResult, r, $$nc($LdapDnsProviderService::getInstance())->lookupEndpoints(url, env));
		$var($LdapCtx, ctx, nullptr);
		$var($NamingException, lastException, nullptr);
		{
			$var($Iterator, i$, $$nc($nc(r)->getEndpoints())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, u, $cast($String, i$->next()));
				try {
					$var($String, var$0, r->getDomainName());
					$assign(ctx, getLdapCtxFromUrl(var$0, url, $$new($LdapURL, u), env));
					return $cast($ComponentDirContext, ctx);
				} catch ($NamingException& e) {
					$assign(lastException, e);
				}
			}
		}
		if (lastException != nullptr) {
			$throw(lastException);
		}
		$throwNew($NamingException, "Could not resolve a valid ldap host"_s);
	} catch ($NamingException& e) {
		$throw(e);
	} catch ($Exception& e) {
		$var($NamingException, ex, $new($NamingException));
		ex->setRootCause(e);
		$throw(ex);
	}
	$shouldNotReachHere();
}

$LdapCtx* LdapCtxFactory::getLdapCtxFromUrl($String* domain, $String* url, $LdapURL* u, $Hashtable* env) {
	$init(LdapCtxFactory);
	$useLocalObjectStack();
	$var($String, dn, $nc(u)->getDN());
	$var($String, host, u->getHost());
	int32_t port = u->getPort();
	$var($LdapCtx, ctx, $new($LdapCtx, dn, host, port, env, u->useSsl()));
	ctx->setDomainName(domain);
	ctx->setProviderUrl(url);
	return ctx;
}

$DirContext* LdapCtxFactory::getUsingURLs($StringArray* urls, $Hashtable* env) {
	$init(LdapCtxFactory);
	$useLocalObjectStack();
	$var($NamingException, ex, nullptr);
	{
		$var($StringArray, arr$, urls);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, u, arr$->get(i$));
			try {
				return getUsingURL(u, env);
			} catch ($NamingException& e) {
				$assign(ex, e);
			}
		}
	}
	$throw(ex);
	$shouldNotReachHere();
}

$Attribute* LdapCtxFactory::createTypeNameAttr($Class* cl) {
	$init(LdapCtxFactory);
	$useLocalObjectStack();
	$var($Vector, v, $new($Vector, 10));
	$var($StringArray, types, getTypeNames(cl, v));
	if ($nc(types)->length > 0) {
		$init($Obj);
		$var($BasicAttribute, tAttr, $new($BasicAttribute, $nc($Obj::JAVA_ATTRIBUTES)->get($Obj::TYPENAME)));
		for (int32_t i = 0; i < types->length; ++i) {
			tAttr->add(types->get(i));
		}
		return tAttr;
	}
	return nullptr;
}

$StringArray* LdapCtxFactory::getTypeNames($Class* currentClass, $Vector* v) {
	$init(LdapCtxFactory);
	$useLocalObjectStack();
	getClassesAux(currentClass, v);
	$var($ClassArray, members, $nc(currentClass)->getInterfaces());
	for (int32_t i = 0; i < members->length; ++i) {
		getClassesAux(members->get(i), v);
	}
	$var($StringArray, ret, $new($StringArray, $nc(v)->size()));
	int32_t i = 0;
	{
		$var($Iterator, i$, v->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, name, $cast($String, i$->next()));
			{
				ret->set(i++, name);
			}
		}
	}
	return ret;
}

void LdapCtxFactory::getClassesAux($Class* currentClass, $Vector* v) {
	$init(LdapCtxFactory);
	$useLocalObjectStack();
	if (!$nc(v)->contains($($nc(currentClass)->getName()))) {
		v->addElement($(currentClass->getName()));
	}
	currentClass = currentClass->getSuperclass();
	while (currentClass != nullptr) {
		getTypeNames(currentClass, v);
		currentClass = currentClass->getSuperclass();
	}
}

LdapCtxFactory::LdapCtxFactory() {
}

void LdapCtxFactory::clinit$($Class* clazz) {
	$assignStatic(LdapCtxFactory::ADDRESS_TYPE, "URL"_s);
}

$Class* LdapCtxFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ADDRESS_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LdapCtxFactory, ADDRESS_TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(LdapCtxFactory, init$, void)},
		{"createTypeNameAttr", "(Ljava/lang/Class;)Ljavax/naming/directory/Attribute;", "(Ljava/lang/Class<*>;)Ljavax/naming/directory/Attribute;", $PUBLIC | $STATIC, $staticMethod(LdapCtxFactory, createTypeNameAttr, $Attribute*, $Class*)},
		{"getClassesAux", "(Ljava/lang/Class;Ljava/util/Vector;)V", "(Ljava/lang/Class<*>;Ljava/util/Vector<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $staticMethod(LdapCtxFactory, getClassesAux, void, $Class*, $Vector*)},
		{"getInitialContext", "(Ljava/util/Hashtable;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;)Ljavax/naming/Context;", $PUBLIC, $virtualMethod(LdapCtxFactory, getInitialContext, $Context*, $Hashtable*), "javax.naming.NamingException"},
		{"getLdapCtxFromUrl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/jndi/ldap/LdapURL;Ljava/util/Hashtable;)Lcom/sun/jndi/ldap/LdapCtx;", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/jndi/ldap/LdapURL;Ljava/util/Hashtable<**>;)Lcom/sun/jndi/ldap/LdapCtx;", $PRIVATE | $STATIC, $staticMethod(LdapCtxFactory, getLdapCtxFromUrl, $LdapCtx*, $String*, $String*, $LdapURL*, $Hashtable*), "javax.naming.NamingException"},
		{"getLdapCtxInstance", "(Ljava/lang/Object;Ljava/util/Hashtable;)Ljavax/naming/directory/DirContext;", "(Ljava/lang/Object;Ljava/util/Hashtable<**>;)Ljavax/naming/directory/DirContext;", $PUBLIC | $STATIC, $staticMethod(LdapCtxFactory, getLdapCtxInstance, $DirContext*, Object$*, $Hashtable*), "javax.naming.NamingException"},
		{"getObjectInstance", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PUBLIC, $virtualMethod(LdapCtxFactory, getObjectInstance, $Object*, Object$*, $Name*, $Context*, $Hashtable*), "java.lang.Exception"},
		{"getTypeNames", "(Ljava/lang/Class;Ljava/util/Vector;)[Ljava/lang/String;", "(Ljava/lang/Class<*>;Ljava/util/Vector<Ljava/lang/String;>;)[Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(LdapCtxFactory, getTypeNames, $StringArray*, $Class*, $Vector*)},
		{"getURLs", "(Ljavax/naming/Reference;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(LdapCtxFactory, getURLs, $StringArray*, $Reference*), "javax.naming.NamingException"},
		{"getUsingURL", "(Ljava/lang/String;Ljava/util/Hashtable;)Ljavax/naming/directory/DirContext;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;)Ljavax/naming/directory/DirContext;", $PRIVATE | $STATIC, $staticMethod(LdapCtxFactory, getUsingURL, $DirContext*, $String*, $Hashtable*), "javax.naming.NamingException"},
		{"getUsingURLs", "([Ljava/lang/String;Ljava/util/Hashtable;)Ljavax/naming/directory/DirContext;", "([Ljava/lang/String;Ljava/util/Hashtable<**>;)Ljavax/naming/directory/DirContext;", $PRIVATE | $STATIC, $staticMethod(LdapCtxFactory, getUsingURLs, $DirContext*, $StringArray*, $Hashtable*), "javax.naming.NamingException"},
		{"isLdapRef", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(LdapCtxFactory, isLdapRef, bool, Object$*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.LdapCtxFactory",
		"java.lang.Object",
		"javax.naming.spi.ObjectFactory,javax.naming.spi.InitialContextFactory",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LdapCtxFactory, name, initialize, &classInfo$$, LdapCtxFactory::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(LdapCtxFactory));
	});
	return class$;
}

$Class* LdapCtxFactory::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com