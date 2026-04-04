#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverDirectHTTP.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverFragment.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverLocalFilesystem.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverXPointer.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

#undef LOG

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $ClassLoaderUtils = ::com::sun::org::apache::xml::internal::security::utils::resolver::ClassLoaderUtils;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ResourceResolverException = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverException;
using $ResourceResolverSpi = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi;
using $ResolverDirectHTTP = ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverDirectHTTP;
using $ResolverFragment = ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverFragment;
using $ResolverLocalFilesystem = ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverLocalFilesystem;
using $ResolverXPointer = ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverXPointer;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								namespace resolver {

$Logger* ResourceResolver::LOG = nullptr;
$List* ResourceResolver::resolverList = nullptr;
$AtomicBoolean* ResourceResolver::defaultResolversAdded = nullptr;

void ResourceResolver::init$() {
}

void ResourceResolver::register$($String* className) {
	$init(ResourceResolver);
	$JavaUtils::checkRegisterPermission();
	$Class* resourceResolverClass = $ClassLoaderUtils::loadClass(className, ResourceResolver::class$);
	register$($$cast($ResourceResolverSpi, $JavaUtils::newInstanceWithEmptyConstructor(resourceResolverClass)), false);
}

void ResourceResolver::registerAtStart($String* className) {
	$init(ResourceResolver);
	$JavaUtils::checkRegisterPermission();
	$Class* resourceResolverClass = $ClassLoaderUtils::loadClass(className, ResourceResolver::class$);
	register$($$cast($ResourceResolverSpi, $JavaUtils::newInstanceWithEmptyConstructor(resourceResolverClass)), true);
}

void ResourceResolver::register$($ResourceResolverSpi* resourceResolverSpi, bool start) {
	$init(ResourceResolver);
	$useLocalObjectStack();
	$JavaUtils::checkRegisterPermission();
	if (start) {
		ResourceResolver::resolverList->add(0, resourceResolverSpi);
	} else {
		ResourceResolver::resolverList->add(resourceResolverSpi);
	}
	$nc(ResourceResolver::LOG)->debug("Registered resolver: {}"_s, $$new($ObjectArray, {$($nc($of(resourceResolverSpi))->toString())}));
}

void ResourceResolver::registerClassNames($List* classNames) {
	$init(ResourceResolver);
	$useLocalObjectStack();
	$JavaUtils::checkRegisterPermission();
	$var($List, resourceResolversToAdd, $new($ArrayList, $nc(classNames)->size()));
	{
		$var($Iterator, i$, classNames->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, className, $cast($String, i$->next()));
			{
				$var($ResourceResolverSpi, resourceResolverSpi, $cast($ResourceResolverSpi, $JavaUtils::newInstanceWithEmptyConstructor($ClassLoaderUtils::loadClass(className, ResourceResolver::class$))));
				resourceResolversToAdd->add(resourceResolverSpi);
			}
		}
	}
	ResourceResolver::resolverList->addAll(resourceResolversToAdd);
}

void ResourceResolver::registerDefaultResolvers() {
	$init(ResourceResolver);
	$useLocalObjectStack();
	if (ResourceResolver::defaultResolversAdded->compareAndSet(false, true)) {
		$var($List, resourceResolversToAdd, $new($ArrayList));
		resourceResolversToAdd->add($$new($ResolverFragment));
		resourceResolversToAdd->add($$new($ResolverLocalFilesystem));
		resourceResolversToAdd->add($$new($ResolverXPointer));
		resourceResolversToAdd->add($$new($ResolverDirectHTTP));
		ResourceResolver::resolverList->addAll(resourceResolversToAdd);
	}
}

$XMLSignatureInput* ResourceResolver::resolve($ResourceResolverContext* context) {
	$init(ResourceResolver);
	$useLocalObjectStack();
	{
		$var($Iterator, i$, ResourceResolver::resolverList->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ResourceResolverSpi, resolver, $cast($ResourceResolverSpi, i$->next()));
			{
				$nc(ResourceResolver::LOG)->debug("check resolvability by class {}"_s, $$new($ObjectArray, {$($nc(resolver)->getClass()->getName())}));
				if (resolver->engineCanResolveURI(context)) {
					if ($nc(context)->secureValidation && ($instanceOf($ResolverLocalFilesystem, resolver) || $instanceOf($ResolverDirectHTTP, resolver))) {
						$var($ObjectArray, exArgs, $new($ObjectArray, {$(resolver->getClass()->getName())}));
						$throwNew($ResourceResolverException, "signature.Reference.ForbiddenResolver"_s, exArgs, context->uriToResolve, context->baseUri);
					}
					return resolver->engineResolveURI(context);
				}
			}
		}
	}
	$var($ObjectArray, exArgs, $new($ObjectArray, {
		$nc(context)->uriToResolve != nullptr ? context->uriToResolve : "null"_s,
		context->baseUri
	}));
	$throwNew($ResourceResolverException, "utils.resolver.noClass"_s, exArgs, context->uriToResolve, context->baseUri);
}

$XMLSignatureInput* ResourceResolver::resolve($List* individualResolvers, $ResourceResolverContext* context) {
	$init(ResourceResolver);
	$useLocalObjectStack();
	$nc(ResourceResolver::LOG)->debug("I was asked to create a ResourceResolver and got {}"_s, $$new($ObjectArray, {$($Integer::valueOf(individualResolvers == nullptr ? 0 : individualResolvers->size()))}));
	if (individualResolvers != nullptr) {
		$var($Iterator, i$, individualResolvers->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ResourceResolverSpi, resolver, $cast($ResourceResolverSpi, i$->next()));
			{
				$var($String, currentClass, $nc(resolver)->getClass()->getName());
				ResourceResolver::LOG->debug("check resolvability by class {}"_s, $$new($ObjectArray, {currentClass}));
				if (resolver->engineCanResolveURI(context)) {
					return resolver->engineResolveURI(context);
				}
			}
		}
	}
	return resolve(context);
}

void ResourceResolver::clinit$($Class* clazz) {
	$assignStatic(ResourceResolver::LOG, $LoggerFactory::getLogger(ResourceResolver::class$));
	$assignStatic(ResourceResolver::resolverList, $new($CopyOnWriteArrayList));
	$assignStatic(ResourceResolver::defaultResolversAdded, $new($AtomicBoolean));
}

ResourceResolver::ResourceResolver() {
}

$Class* ResourceResolver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceResolver, LOG)},
		{"resolverList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceResolver, resolverList)},
		{"defaultResolversAdded", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceResolver, defaultResolversAdded)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResourceResolver, init$, void)},
		{"register", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ResourceResolver, register$, void, $String*), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
		{"register", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;Z)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ResourceResolver, register$, void, $ResourceResolverSpi*, bool)},
		{"registerAtStart", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ResourceResolver, registerAtStart, void, $String*), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
		{"registerClassNames", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC | $STATIC, $staticMethod(ResourceResolver, registerClassNames, void, $List*), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
		{"registerDefaultResolvers", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(ResourceResolver, registerDefaultResolvers, void)},
		{"resolve", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC | $STATIC, $staticMethod(ResourceResolver, resolve, $XMLSignatureInput*, $ResourceResolverContext*), "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
		{"resolve", "(Ljava/util/List;Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;>;Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", $PUBLIC | $STATIC, $staticMethod(ResourceResolver, resolve, $XMLSignatureInput*, $List*, $ResourceResolverContext*), "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolver",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResourceResolver, name, initialize, &classInfo$$, ResourceResolver::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResourceResolver);
	});
	return class$;
}

$Class* ResourceResolver::class$ = nullptr;

								} // resolver
							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com