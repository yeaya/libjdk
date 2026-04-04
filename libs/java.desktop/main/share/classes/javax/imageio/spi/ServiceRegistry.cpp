#include <javax/imageio/spi/ServiceRegistry.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/ServiceLoader.h>
#include <java/util/Set.h>
#include <javax/imageio/spi/FilterIterator.h>
#include <javax/imageio/spi/ImageInputStreamSpi.h>
#include <javax/imageio/spi/ImageOutputStreamSpi.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ImageTranscoderSpi.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/spi/ServiceRegistry$Filter.h>
#include <javax/imageio/spi/SubRegistry.h>
#include <jcpp.h>

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ServiceLoader = ::java::util::ServiceLoader;
using $Set = ::java::util::Set;
using $FilterIterator = ::javax::imageio::spi::FilterIterator;
using $ImageInputStreamSpi = ::javax::imageio::spi::ImageInputStreamSpi;
using $ImageOutputStreamSpi = ::javax::imageio::spi::ImageOutputStreamSpi;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageTranscoderSpi = ::javax::imageio::spi::ImageTranscoderSpi;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ServiceRegistry$Filter = ::javax::imageio::spi::ServiceRegistry$Filter;
using $SubRegistry = ::javax::imageio::spi::SubRegistry;

namespace javax {
	namespace imageio {
		namespace spi {

void ServiceRegistry::init$($Iterator* categories) {
	$useLocalObjectStack();
	$set(this, categoryMap, $new($HashMap));
	if (categories == nullptr) {
		$throwNew($IllegalArgumentException, "categories == null!"_s);
	}
	while ($nc(categories)->hasNext()) {
		$Class* category = $cast($Class, categories->next());
		checkClassAllowed(category);
		$var($SubRegistry, reg, $new($SubRegistry, this, category));
		$nc(this->categoryMap)->put(category, reg);
	}
}

$Iterator* ServiceRegistry::lookupProviders($Class* providerClass, $ClassLoader* loader) {
	$load(ServiceRegistry);
	$beforeCallerSensitive();
	if (providerClass == nullptr) {
		$throwNew($IllegalArgumentException, "providerClass == null!"_s);
	}
	checkClassAllowed(providerClass);
	return $$nc($ServiceLoader::load(providerClass, loader))->iterator();
}

$Iterator* ServiceRegistry::lookupProviders($Class* providerClass) {
	$load(ServiceRegistry);
	$beforeCallerSensitive();
	if (providerClass == nullptr) {
		$throwNew($IllegalArgumentException, "providerClass == null!"_s);
	}
	checkClassAllowed(providerClass);
	return $$nc($ServiceLoader::load(providerClass))->iterator();
}

$Iterator* ServiceRegistry::getCategories() {
	$var($Set, keySet, $nc(this->categoryMap)->keySet());
	return $nc(keySet)->iterator();
}

$Iterator* ServiceRegistry::getSubRegistries(Object$* provider) {
	$useLocalObjectStack();
	$var($List, l, $new($ArrayList));
	{
		$var($Iterator, i$, $$nc($nc(this->categoryMap)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* c = $cast($Class, i$->next());
			if ($nc(c)->isAssignableFrom($nc($of(provider))->getClass())) {
				l->add($$cast($SubRegistry, this->categoryMap->get(c)));
			}
		}
	}
	return l->iterator();
}

bool ServiceRegistry::registerServiceProvider(Object$* provider, $Class* category) {
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	if (!$nc(category)->isAssignableFrom($nc($of(provider))->getClass())) {
		$throwNew($ClassCastException);
	}
	return $nc(reg)->registerServiceProvider(provider);
}

void ServiceRegistry::registerServiceProvider(Object$* provider) {
	$useLocalObjectStack();
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($Iterator, regs, getSubRegistries(provider));
	while ($nc(regs)->hasNext()) {
		$var($SubRegistry, reg, $cast($SubRegistry, regs->next()));
		$nc(reg)->registerServiceProvider(provider);
	}
}

void ServiceRegistry::registerServiceProviders($Iterator* providers) {
	$useLocalObjectStack();
	if (providers == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	while ($nc(providers)->hasNext()) {
		registerServiceProvider($(providers->next()));
	}
}

bool ServiceRegistry::deregisterServiceProvider(Object$* provider, $Class* category) {
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	if (!$nc(category)->isAssignableFrom($nc($of(provider))->getClass())) {
		$throwNew($ClassCastException);
	}
	return $nc(reg)->deregisterServiceProvider(provider);
}

void ServiceRegistry::deregisterServiceProvider(Object$* provider) {
	$useLocalObjectStack();
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($Iterator, regs, getSubRegistries(provider));
	while ($nc(regs)->hasNext()) {
		$var($SubRegistry, reg, $cast($SubRegistry, regs->next()));
		$nc(reg)->deregisterServiceProvider(provider);
	}
}

bool ServiceRegistry::contains(Object$* provider) {
	$useLocalObjectStack();
	if (provider == nullptr) {
		$throwNew($IllegalArgumentException, "provider == null!"_s);
	}
	$var($Iterator, regs, getSubRegistries(provider));
	while ($nc(regs)->hasNext()) {
		$var($SubRegistry, reg, $cast($SubRegistry, regs->next()));
		if ($nc(reg)->contains(provider)) {
			return true;
		}
	}
	return false;
}

$Iterator* ServiceRegistry::getServiceProviders($Class* category, bool useOrdering) {
	$useLocalObjectStack();
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	$var($Iterator, it, $nc(reg)->getServiceProviders(useOrdering));
	return it;
}

$Iterator* ServiceRegistry::getServiceProviders($Class* category, $ServiceRegistry$Filter* filter, bool useOrdering) {
	$useLocalObjectStack();
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	$var($Iterator, iter, getServiceProviders(category, useOrdering));
	return $new($FilterIterator, iter, filter);
}

$Object* ServiceRegistry::getServiceProviderByClass($Class* providerClass) {
	$useLocalObjectStack();
	if (providerClass == nullptr) {
		$throwNew($IllegalArgumentException, "providerClass == null!"_s);
	}
	{
		$var($Iterator, i$, $$nc($nc(this->categoryMap)->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* c = $cast($Class, i$->next());
			if ($nc(c)->isAssignableFrom(providerClass)) {
				$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(c)));
				$var($Object, provider, $nc(reg)->getServiceProviderByClass(providerClass));
				if (provider != nullptr) {
					return provider;
				}
			}
		}
	}
	return nullptr;
}

bool ServiceRegistry::setOrdering($Class* category, Object$* firstProvider, Object$* secondProvider) {
	if (firstProvider == nullptr || secondProvider == nullptr) {
		$throwNew($IllegalArgumentException, "provider is null!"_s);
	}
	if ($equals(firstProvider, secondProvider)) {
		$throwNew($IllegalArgumentException, "providers are the same!"_s);
	}
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	bool var$0 = $nc(reg)->contains(firstProvider);
	if (var$0 && reg->contains(secondProvider)) {
		return reg->setOrdering(firstProvider, secondProvider);
	}
	return false;
}

bool ServiceRegistry::unsetOrdering($Class* category, Object$* firstProvider, Object$* secondProvider) {
	if (firstProvider == nullptr || secondProvider == nullptr) {
		$throwNew($IllegalArgumentException, "provider is null!"_s);
	}
	if ($equals(firstProvider, secondProvider)) {
		$throwNew($IllegalArgumentException, "providers are the same!"_s);
	}
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	bool var$0 = $nc(reg)->contains(firstProvider);
	if (var$0 && reg->contains(secondProvider)) {
		return reg->unsetOrdering(firstProvider, secondProvider);
	}
	return false;
}

void ServiceRegistry::deregisterAll($Class* category) {
	$var($SubRegistry, reg, $cast($SubRegistry, $nc(this->categoryMap)->get(category)));
	if (reg == nullptr) {
		$throwNew($IllegalArgumentException, "category unknown!"_s);
	}
	$nc(reg)->clear();
}

void ServiceRegistry::deregisterAll() {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($nc(this->categoryMap)->values())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($SubRegistry, reg, $cast($SubRegistry, i$->next()));
		{
			$nc(reg)->clear();
		}
	}
}

void ServiceRegistry::finalize() {
	deregisterAll();
	$Object::finalize();
}

void ServiceRegistry::checkClassAllowed($Class* clazz) {
	$useLocalObjectStack();
	if (clazz == nullptr) {
		$throwNew($IllegalArgumentException, "class must not be null"_s);
	}
	$load($ImageInputStreamSpi);
	$load($ImageOutputStreamSpi);
	$load($ImageReaderSpi);
	$load($ImageTranscoderSpi);
	$load($ImageWriterSpi);
	if (clazz != $ImageInputStreamSpi::class$ && clazz != $ImageOutputStreamSpi::class$ && clazz != $ImageReaderSpi::class$ && clazz != $ImageTranscoderSpi::class$ && clazz != $ImageWriterSpi::class$) {
		$throwNew($IllegalArgumentException, $$str({$($nc(clazz)->getName()), " is not an ImageIO SPI class"_s}));
	}
}

ServiceRegistry::ServiceRegistry() {
}

$Class* ServiceRegistry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"categoryMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljavax/imageio/spi/SubRegistry;>;", $PRIVATE, $field(ServiceRegistry, categoryMap)},
		{}
	};
	$NamedAttribute finalizemethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute finalizemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", finalizemethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljava/lang/Class<*>;>;)V", $PUBLIC, $method(ServiceRegistry, init$, void, $Iterator*)},
		{"checkClassAllowed", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(ServiceRegistry, checkClassAllowed, void, $Class*)},
		{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ServiceRegistry, contains, bool, Object$*)},
		{"deregisterAll", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(ServiceRegistry, deregisterAll, void, $Class*)},
		{"deregisterAll", "()V", nullptr, $PUBLIC, $virtualMethod(ServiceRegistry, deregisterAll, void)},
		{"deregisterServiceProvider", "(Ljava/lang/Object;Ljava/lang/Class;)Z", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;)Z", $PUBLIC, $virtualMethod(ServiceRegistry, deregisterServiceProvider, bool, Object$*, $Class*)},
		{"deregisterServiceProvider", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ServiceRegistry, deregisterServiceProvider, void, Object$*)},
		{"finalize", "()V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(ServiceRegistry, finalize, void), "java.lang.Throwable", nullptr, finalizemethodAnnotations$$},
		{"getCategories", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/Class<*>;>;", $PUBLIC, $virtualMethod(ServiceRegistry, getCategories, $Iterator*)},
		{"getServiceProviderByClass", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC, $virtualMethod(ServiceRegistry, getServiceProviderByClass, $Object*, $Class*)},
		{"getServiceProviders", "(Ljava/lang/Class;Z)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Z)Ljava/util/Iterator<TT;>;", $PUBLIC, $virtualMethod(ServiceRegistry, getServiceProviders, $Iterator*, $Class*, bool)},
		{"getServiceProviders", "(Ljava/lang/Class;Ljavax/imageio/spi/ServiceRegistry$Filter;Z)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljavax/imageio/spi/ServiceRegistry$Filter;Z)Ljava/util/Iterator<TT;>;", $PUBLIC, $virtualMethod(ServiceRegistry, getServiceProviders, $Iterator*, $Class*, $ServiceRegistry$Filter*, bool)},
		{"getSubRegistries", "(Ljava/lang/Object;)Ljava/util/Iterator;", "(Ljava/lang/Object;)Ljava/util/Iterator<Ljavax/imageio/spi/SubRegistry;>;", $PRIVATE, $method(ServiceRegistry, getSubRegistries, $Iterator*, Object$*)},
		{"lookupProviders", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;Ljava/lang/ClassLoader;)Ljava/util/Iterator<TT;>;", $PUBLIC | $STATIC, $staticMethod(ServiceRegistry, lookupProviders, $Iterator*, $Class*, $ClassLoader*)},
		{"lookupProviders", "(Ljava/lang/Class;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/util/Iterator<TT;>;", $PUBLIC | $STATIC, $staticMethod(ServiceRegistry, lookupProviders, $Iterator*, $Class*)},
		{"registerServiceProvider", "(Ljava/lang/Object;Ljava/lang/Class;)Z", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;)Z", $PUBLIC, $virtualMethod(ServiceRegistry, registerServiceProvider, bool, Object$*, $Class*)},
		{"registerServiceProvider", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ServiceRegistry, registerServiceProvider, void, Object$*)},
		{"registerServiceProviders", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<*>;)V", $PUBLIC, $virtualMethod(ServiceRegistry, registerServiceProviders, void, $Iterator*)},
		{"setOrdering", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;)Z", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;TT;TT;)Z", $PUBLIC, $virtualMethod(ServiceRegistry, setOrdering, bool, $Class*, Object$*, Object$*)},
		{"unsetOrdering", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;)Z", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;TT;TT;)Z", $PUBLIC, $virtualMethod(ServiceRegistry, unsetOrdering, bool, $Class*, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.imageio.spi.ServiceRegistry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.imageio.spi.ServiceRegistry$Filter"
	};
	$loadClass(ServiceRegistry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceRegistry);
	});
	return class$;
}

$Class* ServiceRegistry::class$ = nullptr;

		} // spi
	} // imageio
} // javax