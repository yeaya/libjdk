#include <javax/imageio/spi/IIOServiceProvider.h>

#include <java/util/Locale.h>
#include <javax/imageio/spi/ServiceRegistry.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _IIOServiceProvider_FieldInfo_[] = {
	{"vendorName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(IIOServiceProvider, vendorName)},
	{"version", "Ljava/lang/String;", nullptr, $PROTECTED, $field(IIOServiceProvider, version)},
	{}
};

$MethodInfo _IIOServiceProvider_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IIOServiceProvider, init$, void, $String*, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(IIOServiceProvider, init$, void)},
	{"getDescription", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOServiceProvider, getDescription, $String*, $Locale*)},
	{"getVendorName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IIOServiceProvider, getVendorName, $String*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IIOServiceProvider, getVersion, $String*)},
	{"onDeregistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(IIOServiceProvider, onDeregistration, void, $ServiceRegistry*, $Class*)},
	{"onRegistration", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class;)V", "(Ljavax/imageio/spi/ServiceRegistry;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(IIOServiceProvider, onRegistration, void, $ServiceRegistry*, $Class*)},
	{}
};

$ClassInfo _IIOServiceProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.imageio.spi.IIOServiceProvider",
	"java.lang.Object",
	"javax.imageio.spi.RegisterableService",
	_IIOServiceProvider_FieldInfo_,
	_IIOServiceProvider_MethodInfo_
};

$Object* allocate$IIOServiceProvider($Class* clazz) {
	return $of($alloc(IIOServiceProvider));
}

void IIOServiceProvider::init$($String* vendorName, $String* version) {
	if (vendorName == nullptr) {
		$throwNew($IllegalArgumentException, "vendorName == null!"_s);
	}
	if (version == nullptr) {
		$throwNew($IllegalArgumentException, "version == null!"_s);
	}
	$set(this, vendorName, vendorName);
	$set(this, version, version);
}

void IIOServiceProvider::init$() {
}

void IIOServiceProvider::onRegistration($ServiceRegistry* registry, $Class* category) {
}

void IIOServiceProvider::onDeregistration($ServiceRegistry* registry, $Class* category) {
}

$String* IIOServiceProvider::getVendorName() {
	return this->vendorName;
}

$String* IIOServiceProvider::getVersion() {
	return this->version;
}

IIOServiceProvider::IIOServiceProvider() {
}

$Class* IIOServiceProvider::load$($String* name, bool initialize) {
	$loadClass(IIOServiceProvider, name, initialize, &_IIOServiceProvider_ClassInfo_, allocate$IIOServiceProvider);
	return class$;
}

$Class* IIOServiceProvider::class$ = nullptr;

		} // spi
	} // imageio
} // javax