#include <sun/lwawt/macosx/CPrinterDevice.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <sun/lwawt/macosx/CPrinterGraphicsConfig.h>
#include <jcpp.h>

#undef TYPE_PRINTER

using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterGraphicsConfig = ::sun::lwawt::macosx::CPrinterGraphicsConfig;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPrinterDevice::init$($CPrinterGraphicsConfig* config) {
	$GraphicsDevice::init$();
	$set(this, config, config);
}

int32_t CPrinterDevice::getType() {
	return $GraphicsDevice::TYPE_PRINTER;
}

$String* CPrinterDevice::getIDstring() {
	return ("Printer"_s);
}

$GraphicsConfigurationArray* CPrinterDevice::getConfigurations() {
	return $new($GraphicsConfigurationArray, {this->config});
}

$GraphicsConfiguration* CPrinterDevice::getDefaultConfiguration() {
	return this->config;
}

CPrinterDevice::CPrinterDevice() {
}

$Class* CPrinterDevice::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $FINAL, $field(CPrinterDevice, config)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CPrinterGraphicsConfig;)V", nullptr, $PUBLIC, $method(CPrinterDevice, init$, void, $CPrinterGraphicsConfig*)},
		{"getConfigurations", "()[Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $virtualMethod(CPrinterDevice, getConfigurations, $GraphicsConfigurationArray*)},
		{"getDefaultConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $virtualMethod(CPrinterDevice, getDefaultConfiguration, $GraphicsConfiguration*)},
		{"getIDstring", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CPrinterDevice, getIDstring, $String*)},
		{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(CPrinterDevice, getType, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.lwawt.macosx.CPrinterDevice",
		"java.awt.GraphicsDevice",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CPrinterDevice, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPrinterDevice);
	});
	return class$;
}

$Class* CPrinterDevice::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun